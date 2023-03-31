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
 * $Filename__:i14229_rdbi_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:19.12.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_rdbi_pub$ 
 * $Variant___:6.7.0$ 
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
 * 6.7.0; 0     19.12.2008 MXA2SI
 *   Migrated from Clearcase :
 *   B_BASSVR.7.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _I14229_RDBI_PUB_H
#define _I14229_RDBI_PUB_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                  Public header file for the service Read data by identifier
 *
 * \scope               [API]
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Status of I14229_RDBI: */
#define I14229_RDBI_READY           0      /* Ready to receive new message  */
#define I14229_RDBI_WAIT            1      /* Waiting for data              */
#define I14229_RDBI_AGAIN           2      /* Data segmentation             */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Type of on entry in table of Data identifiers: */
/* VERY IMP : If this structure changes please change the structure type of I14229_Dddi_RdbiTable_t
also in i14229_dddi_pub.h file */

typedef struct
{
    uint16  RecordDID_u16;      /* record Data identifier            */
    uint16  DIDEndRange_u16;    /* DID End range                     */
    uint8   IdxFunc_u8;         /* Index of corresponding function   */
    uint32  Config_u32;         /* Configuration of function         */

} I14229_Rdbi_DIdTable_t;

/* Structure for ststic variable for RDBI internal use */
typedef struct
{
    uint16 DId_u16;             /* Copy of Data Identifier */
    uint16 IdxTable_u16;        /* index to table of Data identifiers - I14229_Rdbi_DIdTable_t */

} I14229_Rdbi_VarStatic_t;

/* Summary of configuration constants: */
typedef struct
{
    I14229_Rdbi_DIdTable_t const *DIdTable_pcs; /* Pointer to table of Data identifiers    */
    UAcc_StaticPara_t *UAccStatics_ps;    /* Pointer to static variables used by UACC */

    uint8  (* Dddi_SearchDid_pf)(uint16 Did_u16); /* DDDI search function */
    uint16 (* Dddi_ReadByDefMode_pf)(void *Config_pv, uint8 stMode_u8); /* DDDI read by definition
                                mode function */
    I14229_Rdbi_VarStatic_t *VarDId_ps; /* RAM array to store the DID's in a single request */
    uint16   MaxDIds_u16;                       /* Number of supported Record Ids (size of table)*/
    uint8    MaxDIdArray_u8;         /* Max number of simultanious DId's supported in a request */
    uint8    numMaxReadDID_u8;       /* Max number of DId's can be read in one session call */
    uint16  (*GetMoreParamsForNegResp)(uint8*);/* Fct. writes additional bytes to location of     */
                                                /* uint8*, and returns No of written bytes        */

} I14229_Rdbi_Config_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__bassvr__10ms__RAM__x8__START
extern uint8 I14229_Rdbi_State_u8;      /* Status of service */
__PRAGMA_USE__bassvr__10ms__RAM__x8__END

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void I14229_Rdbi_Ini(void);
extern void I14229_Rdbi(const void *Config_pv, DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

#endif   /* _I14229_RDBI_PUB_H */
