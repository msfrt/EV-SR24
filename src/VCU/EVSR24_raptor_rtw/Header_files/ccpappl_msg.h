/********************************************************************************
FILE:         ccpappl_msg.h
DESCRIPTION:  Component wise header file for Copy process.
              DAMOS V5.8.3 WinServer 2008 R2
              Format N_MsgH
              Message Concept Version V2.3.1
              Do not edit this file

COPYRIGHT:    All rights reserved by ROBERT BOSCH GMBH, STUTTGART


*********************************************************************************/
#ifndef _CCPAPPL_MSG_H
#define _CCPAPPL_MSG_H
/* --------------extern Declaration of Original Messages--------------------*/


#ifndef __SYC_STMN_EXT__
#define __SYC_STMN_EXT__
extern uint8                    SyC_stMn;
#endif /* __SYC_STMN_EXT__ */

/* -------------- macro defintion of messages --------------------*/


#ifndef SET_SyC_stMn 
#define SET_SyC_stMn (SyC_stMn=TRUE)
#endif
#ifndef CLR_SyC_stMn 
#define CLR_SyC_stMn (SyC_stMn=FALSE)
#endif
#ifndef GET_SyC_stMn 
#define GET_SyC_stMn (SyC_stMn)
#endif
#ifndef PUT_SyC_stMn 
#define PUT_SyC_stMn(val) ((val) ? SET_SyC_stMn : CLR_SyC_stMn)
#endif

#endif
