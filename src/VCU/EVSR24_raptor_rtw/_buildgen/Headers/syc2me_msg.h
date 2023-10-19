/********************************************************************************
FILE:         syc2me_msg.h
DESCRIPTION:  Component wise header file for Copy process.
              DAMOS V5.8.3 WinServer 2008 R2
              Format N_MsgH
              Message Concept Version V2.3.1
              Do not edit this file

COPYRIGHT:    All rights reserved by ROBERT BOSCH GMBH, STUTTGART


*********************************************************************************/
#ifndef _SYC2ME_MSG_H
#define _SYC2ME_MSG_H
/* --------------extern Declaration of Original Messages--------------------*/


#ifndef __SYC_STSUB_EXT__
#define __SYC_STSUB_EXT__
extern uint8                    SyC_stSub;
#endif /* __SYC_STSUB_EXT__ */

#ifndef __T15_ST_EXT__
#define __T15_ST_EXT__
extern bool                     T15_st;
#endif /* __T15_ST_EXT__ */

/* -------------- macro defintion of messages --------------------*/


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


#ifndef SET_T15_st 
#define SET_T15_st (T15_st=TRUE)
#endif
#ifndef CLR_T15_st 
#define CLR_T15_st (T15_st=FALSE)
#endif
#ifndef GET_T15_st 
#define GET_T15_st (T15_st)
#endif
#ifndef PUT_T15_st 
#define PUT_T15_st(val) ((val) ? SET_T15_st : CLR_T15_st)
#endif

#endif
