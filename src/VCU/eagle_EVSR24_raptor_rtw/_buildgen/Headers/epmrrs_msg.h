/********************************************************************************
FILE:         epmrrs_msg.h
DESCRIPTION:  Component wise header file for Copy process.
              DAMOS V5.8.3 WinServer 2008 R2
              Format N_MsgH
              Message Concept Version V2.3.1
              Do not edit this file

COPYRIGHT:    All rights reserved by ROBERT BOSCH GMBH, STUTTGART


*********************************************************************************/
#ifndef _EPMRRS_MSG_H
#define _EPMRRS_MSG_H
/* --------------extern Declaration of Original Messages--------------------*/


#ifndef __EPMRRS_PHIENGPOS_EXT__
#define __EPMRRS_PHIENGPOS_EXT__
extern sint16 EpmRRS_phiEngPos;
#endif /* __EPMRRS_PHIENGPOS_EXT__ */

#ifndef __EPMRRS_PHIENGSTOP_EXT__
#define __EPMRRS_PHIENGSTOP_EXT__
extern sint16 EpmRRS_phiEngStop;
#endif /* __EPMRRS_PHIENGSTOP_EXT__ */

#ifndef __EPMRRS_PHISTOPPOS_EXT__
#define __EPMRRS_PHISTOPPOS_EXT__
extern sint16 EpmRRS_phiStopPos;
#endif /* __EPMRRS_PHISTOPPOS_EXT__ */

#ifndef __EPMRRS_PHISTOPPOSCYL_EXT__
#define __EPMRRS_PHISTOPPOSCYL_EXT__
extern sint16 EpmRRS_phiStopPosCyl;
#endif /* __EPMRRS_PHISTOPPOSCYL_EXT__ */

#ifndef __EPM_NENG10MS_EXT__
#define __EPM_NENG10MS_EXT__
extern sint16 Epm_nEng10ms;
#endif /* __EPM_NENG10MS_EXT__ */

#ifndef __EPMCRS_STSIGMODE_EXT__
#define __EPMCRS_STSIGMODE_EXT__
extern uint8                    EpmCrS_stSigMode;
#endif /* __EPMCRS_STSIGMODE_EXT__ */

#ifndef __EPMRRS_BENGSTOPAG_EXT__
#define __EPMRRS_BENGSTOPAG_EXT__
extern uint8                    EpmRRS_bEngStopAg;
#endif /* __EPMRRS_BENGSTOPAG_EXT__ */

#ifndef __EPMRRS_BENGSWOFF_EXT__
#define __EPMRRS_BENGSWOFF_EXT__
extern uint8                    EpmRRS_bEngSwOff;
#endif /* __EPMRRS_BENGSWOFF_EXT__ */

#ifndef __EPMRRS_STENGPOS_EXT__
#define __EPMRRS_STENGPOS_EXT__
extern uint8                    EpmRRS_stEngPos;
#endif /* __EPMRRS_STENGPOS_EXT__ */

#ifndef __EPMRRS_STROTDIR_EXT__
#define __EPMRRS_STROTDIR_EXT__
extern uint8                    EpmRRS_stRotDir;
#endif /* __EPMRRS_STROTDIR_EXT__ */

#ifndef __EPMSYN_STRR_EXT__
#define __EPMSYN_STRR_EXT__
extern uint8 EpmSyn_stRR[];
#endif /* __EPMSYN_STRR_EXT__ */

#ifndef __EPM_STOPMODE_EXT__
#define __EPM_STOPMODE_EXT__
extern uint8                    Epm_stOpMode;
#endif /* __EPM_STOPMODE_EXT__ */

#ifndef __SYC_STSUB_EXT__
#define __SYC_STSUB_EXT__
extern uint8                    SyC_stSub;
#endif /* __SYC_STSUB_EXT__ */

/* -------------- macro defintion of messages --------------------*/


#ifndef SET_EpmCrS_stSigMode 
#define SET_EpmCrS_stSigMode (EpmCrS_stSigMode=TRUE)
#endif
#ifndef CLR_EpmCrS_stSigMode 
#define CLR_EpmCrS_stSigMode (EpmCrS_stSigMode=FALSE)
#endif
#ifndef GET_EpmCrS_stSigMode 
#define GET_EpmCrS_stSigMode (EpmCrS_stSigMode)
#endif
#ifndef PUT_EpmCrS_stSigMode 
#define PUT_EpmCrS_stSigMode(val) ((val) ? SET_EpmCrS_stSigMode : CLR_EpmCrS_stSigMode)
#endif


#ifndef SET_EpmRRS_bEngStopAg 
#define SET_EpmRRS_bEngStopAg (EpmRRS_bEngStopAg=TRUE)
#endif
#ifndef CLR_EpmRRS_bEngStopAg 
#define CLR_EpmRRS_bEngStopAg (EpmRRS_bEngStopAg=FALSE)
#endif
#ifndef GET_EpmRRS_bEngStopAg 
#define GET_EpmRRS_bEngStopAg (EpmRRS_bEngStopAg)
#endif
#ifndef PUT_EpmRRS_bEngStopAg 
#define PUT_EpmRRS_bEngStopAg(val) ((val) ? SET_EpmRRS_bEngStopAg : CLR_EpmRRS_bEngStopAg)
#endif


#ifndef SET_EpmRRS_bEngSwOff 
#define SET_EpmRRS_bEngSwOff (EpmRRS_bEngSwOff=TRUE)
#endif
#ifndef CLR_EpmRRS_bEngSwOff 
#define CLR_EpmRRS_bEngSwOff (EpmRRS_bEngSwOff=FALSE)
#endif
#ifndef GET_EpmRRS_bEngSwOff 
#define GET_EpmRRS_bEngSwOff (EpmRRS_bEngSwOff)
#endif
#ifndef PUT_EpmRRS_bEngSwOff 
#define PUT_EpmRRS_bEngSwOff(val) ((val) ? SET_EpmRRS_bEngSwOff : CLR_EpmRRS_bEngSwOff)
#endif


#ifndef SET_EpmRRS_stEngPos 
#define SET_EpmRRS_stEngPos (EpmRRS_stEngPos=TRUE)
#endif
#ifndef CLR_EpmRRS_stEngPos 
#define CLR_EpmRRS_stEngPos (EpmRRS_stEngPos=FALSE)
#endif
#ifndef GET_EpmRRS_stEngPos 
#define GET_EpmRRS_stEngPos (EpmRRS_stEngPos)
#endif
#ifndef PUT_EpmRRS_stEngPos 
#define PUT_EpmRRS_stEngPos(val) ((val) ? SET_EpmRRS_stEngPos : CLR_EpmRRS_stEngPos)
#endif


#ifndef SET_EpmRRS_stRotDir 
#define SET_EpmRRS_stRotDir (EpmRRS_stRotDir=TRUE)
#endif
#ifndef CLR_EpmRRS_stRotDir 
#define CLR_EpmRRS_stRotDir (EpmRRS_stRotDir=FALSE)
#endif
#ifndef GET_EpmRRS_stRotDir 
#define GET_EpmRRS_stRotDir (EpmRRS_stRotDir)
#endif
#ifndef PUT_EpmRRS_stRotDir 
#define PUT_EpmRRS_stRotDir(val) ((val) ? SET_EpmRRS_stRotDir : CLR_EpmRRS_stRotDir)
#endif


#ifndef SET_Epm_stOpMode 
#define SET_Epm_stOpMode (Epm_stOpMode=TRUE)
#endif
#ifndef CLR_Epm_stOpMode 
#define CLR_Epm_stOpMode (Epm_stOpMode=FALSE)
#endif
#ifndef GET_Epm_stOpMode 
#define GET_Epm_stOpMode (Epm_stOpMode)
#endif
#ifndef PUT_Epm_stOpMode 
#define PUT_Epm_stOpMode(val) ((val) ? SET_Epm_stOpMode : CLR_Epm_stOpMode)
#endif


#ifndef SET_SyC_stSub 
#define SET_SyC_stSub (SyC_stSub=TRUE)
#endif
#ifndef CLR_SyC_stSub 
#define CLR_SyC_stSub (SyC_stSub=FALSE)
#endif
#ifndef GET_SyC_stSub 
#define GET_SyC_stSub (SyC_stSub)
#endif
#ifndef PUT_SyC_stSub 
#define PUT_SyC_stSub(val) ((val) ? SET_SyC_stSub : CLR_SyC_stSub)
#endif

#endif
