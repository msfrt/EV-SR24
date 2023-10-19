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
 * $Filename__:epmcas_seg_pub.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:restructuring of FC for improved diagnosis documentation and 
 *             maintenance$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:02.03.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcas_seg_pub$ 
 * $Variant___:1.31.0$ 
 * $Revision__:1$ 
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
 * 1.31.0; 1     02.03.2011 TUC2SI
 *   changes for CAS_ANGLE_SY == 0
 * 
 * 1.31.0; 0     18.02.2011 TUC2SI
 *   new interface for the camshaft control
 * 
 * 1.26.0; 0     27.05.2010 TUC2SI
 *   added interface between EpmCaS_Diag and EpmCaS_Seg for faster activation of
 *    pattern matching in case of signal problems
 * 
 * 1.23.0; 0     27.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _EPMCAS_SEG_PUB_H                                    /* protect multiple includes             */
#define _EPMCAS_SEG_PUB_H




/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
#define EPMCAS_STAGINVALID  0
#define EPMCAS_STAGFROZEN 1
#define EPMCAS_STAGLIMITED 2
#define EPMCAS_STAGVALID 3


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */
//order of the variables should not be changed, it is adapted to ASCET model of camshaft control 
typedef struct
{
    sint16 agPhaDeAdpnToRefAdpn; //angle between ref adaptation and current adaptation
    sint16 agPhaShiftRel; //shift angle of the camshaft
    uint8  stAgPhaShift;  //status of the calculation of shift angle 
	EpmCaS_stAdap_t  stPhaAdpn;  //adaptation status copy for the camshaft
	EpmCaS_stAdap_t  stPhaRefAdpn; //reference adaptation status for the camshaft
	sint32 tiDifAgPhaLstEdge; //time [us] from the last equidistant edge to the calculation
	sint32 tiDifAgPhaLstTwoEdges; //time [us] between two last equidistant edges
} EpmCaS_Ifc_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCaS_Seg_Proc_IniEnd(void);
extern void EpmCaS_Seg_10ms_Proc(void);
extern void EpmCaS_getPos(enum EpmHCaS_numCaS_t numCaS, EpmCaS_Ifc_t* CaSPos);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCaS_Seg_Proc_SyncIni(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__LowSpeed__START
extern void EpmCaS_SegTempCor_Proc_1000ms(void);
__PRAGMA_USE__CODE__epm__LowSpeed__END

#endif
