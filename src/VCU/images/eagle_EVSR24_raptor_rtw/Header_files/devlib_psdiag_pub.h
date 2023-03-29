/*<RBHead>
 ************************************************************************* 
 *                                                                       * 
 *                      ROBERT BOSCH GMBH                                * 
 *                          STUTTGART                                    * 
 *                                                                       * 
 *          Alle Rechte vorbehalten - All rights reserved                * 
 *                                                                       * 
 ************************************************************************* 
																		    
 ************************************************************************* 
 *    Administrative Information (automatically filled in by eASEE)      * 
 ************************************************************************* 
 *	
 * $Filename__:devlib_psdiag_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:19.08.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_psdiag_pub$ 
 * $Variant___:1.146.0$ 
 * $Revision__:0$ 
 * $Type______:H$ 
 * $State_____:AVAILABLE$ 
 * $Generated_:$ 
 ************************************************************************* 
 * 
 * $UniqueName:$ 
 * $Component_:$ 
 * 
 * 
 ************************************************************************* 
 * List Of Changes 
 * 
 * $History
 * 
 * 1.146.0; 0     19.08.2011 KLN1SI
 *   Extension of the internal structure DevLib_PsDiag_t with variable passed as
 *    argument during DSM report.
 * 
 * 1.145.0; 0     24.08.2010 MCH1FE
 *   Corrected error in bit mask DEVLIB_PSDIAG_OL_MSK
 * 
 * 1.144.0; 0     12.02.2010 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_psdiag_pub.h
 *      Version: \main\basis\b_DE_DevLib\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PSDIAG_PUB_H                                  /* protect multiple includes        */
#define _DEVLIB_PSDIAG_PUB_H

/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

#define DEVLIB_PSDIAG_SCB_BP      0
#define DEVLIB_PSDIAG_SCG_BP      1
#define DEVLIB_PSDIAG_OT_BP       2
#define DEVLIB_PSDIAG_TSTIMP_PROG_BP   3
#define DEVLIB_PSDIAG_OL_BP       5
#define DEVLIB_PSDIAG_TSTIMP_BP   6
#define DEVLIB_PSDIAG_SHTOFF_BP   7
#define DEVLIB_PSDIAG_SCB_TSTDONCE_BP   8   /* bit indicates that SCB is tested atleast once since diagnosis is enabled */
#define DEVLIB_PSDIAG_SCG_TSTDONCE_BP   9   /* bit indicates that SCG is tested atleast once since diagnosis is enabled */
#define DEVLIB_PSDIAG_OT_TSTDONCE_BP    10  /* bit indicates that OT is tested atleast once since diagnosis is enabled */
#define DEVLIB_PSDIAG_OL_TSTDONCE_BP    11  /* bit indicates that OL is tested atleast once since diagnosis is enabled */

#define DEVLIB_PSDIAG_SCB_MSK      0x01
#define DEVLIB_PSDIAG_SCG_MSK      0x02
#define DEVLIB_PSDIAG_OT_MSK       0x04
#define DEVLIB_PSDIAG_OL_MSK       0x20


#define DEVLIB_PSDIAG_NO_TSTIMP           0x00
#define DEVLIB_PSDIAG_TSTIMP_EVERYRASTER  0x02
#define DEVLIB_PSDIAG_TSTIMP_OTERR        0x04
#define DEVLIB_PSDIAG_TSTIMP_SCBSCGOLERR  0x08
#define DEVLIB_PSDIAG_TSTIMPREQ_BP        0


#define DEVLIB_PSDIAG_SCB_TSTFLG_ERR_MSK    (PMD_GEI_TF_SCB_MSK|PMD_GEI_ERR_SCB_MSK) /* 0x00010001ul is the Mask for SCB tested flag and SCB error bit */
#define DEVLIB_PSDIAG_SCG_TSTFLG_ERR_MSK    (PMD_GEI_TF_SCG_MSK|PMD_GEI_ERR_SCG_MSK) /* 0x00020002ul is the Mask for SCG tested flag and SCG error bit */
#define DEVLIB_PSDIAG_OL_TSTFLG_ERR_MSK     (PMD_GEI_TF_OL_MSK|PMD_GEI_ERR_OL_MSK)   /* 0x00080020ul is the Mask for OL tested flag and OL error bit */
#define DEVLIB_PSDIAG_OT_TSTFLG_ERR_MSK     (PMD_GEI_TF_OT_MSK|PMD_GEI_ERR_OT_MSK)   /* 0x00040004ul is the Mask for OT tested flag and OT error bit */

#define DEVLIB_PSDIAG_ALL_TSTFLG_ERR_MSK    (DEVLIB_PSDIAG_SCB_TSTFLG_ERR_MSK | DEVLIB_PSDIAG_SCG_TSTFLG_ERR_MSK | DEVLIB_PSDIAG_OL_TSTFLG_ERR_MSK | DEVLIB_PSDIAG_OT_TSTFLG_ERR_MSK) /* Mask for all the 4 errors bits and their tested flags */

#define DEVLIB_DGK_ACTV    0x01   /* Define to indicate Dignostic ground keying is active         */
#define DEVLIB_DGK_NOTACTV 0x00   /* Define to indicate Dignostic ground keying is not active     */

/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */


/* Structure through which the parameters are sent to DevLib_PsDiag() function */
typedef struct
{
    SrvB_SWTmrS16 *tmrTBtwTst;        /* Pointer to static variable required for the
                                         timer for time between successive tests. */
    uint16        *ctTstDne;          /* Pointer to counter for number of test impulses sent. */
    uint16        *stPrevTstRslt;     /* Pointer to previous test result */
    sint16        tiBtwTstSCB_C;      /* Time between successive testing (request for test impulses)
                                         in case of an SCB/SCG/OL error */
    sint16        tiBtwTstOT_C;       /* Time between successive testing (request for test impulses)
                                         in case of an OT error. */
    uint16        numTstMax_C;        /* Maximum number of test impulses that can be sent in a
                                         driving cycle in permanent error (any error) state.
                                         If the value is 0xFFFF, there is no limit for the number
                                         of test impulses. */
    uint32        stError;             /* powerstage error info from HWE */
    bool          stPsDiaDisbl;        /* Powerstage diagnosis disable status */
    bool          stDGKActv;           /* Diagnostic Ground keying active status */
    uint8         stTstImp;            /* Bit 0, if SET, test impulse is to be requested in this
                                         raster by DevLib_PWMOutErrHndlr/DevLib_DigOutErrHndlr.
                                         Bit 1, if SET, indicates that the test impulse
                                         is requested in every process raster.
                                         Bit 2, if SET, indicates that the test impulse
                                         is requested once in XXX_PWMOut.tiBtwTstOT_C.
                                         Bit 3, if SET, indicates that the test impulse
                                         is requested once in XXX_PWMOut.tiBtwTstSCB _C. */
    uint8         swtTstPls;           /* Switch-Interface for DE to Enable/Disable sending of test-pulse */
    uint          stAttrbt_DFC_OL;     /* optional information for fault report OL */
    uint          stAttrbt_DFC_SCB;    /* optional information for fault report SCB */
    uint          stAttrbt_DFC_SCG;    /* optional information for fault report SCG */
    uint          stAttrbt_DFC_OT;     /* optional information for fault report OT */
}DevLib_PsDiag_t;





/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__devlib__HighSpeed__START
void DevLib_PsDiag
(  DSM_DFCType          DFC_SCB      /* DFC for short circuit to battery error */
  ,DSM_DFCType          DFC_SCG      /* DFC for short circuit to ground error*/
  ,DSM_DFCType          DFC_OL       /* DFC for open load error*/
  ,DSM_DFCType          DFC_OT       /* DFC for Over temperature error*/
  ,DevLib_PsDiag_t     *PsDiagStruct /* Pointer to structure containing the diagnosis parameters */
);
__PRAGMA_USE__CODE__devlib__HighSpeed__END

/* _DEVLIB_PSDIAG_PUB_H                                                                           */
#endif
