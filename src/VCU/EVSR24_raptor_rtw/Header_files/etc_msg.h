/********************************************************************************
FILE:         etc_msg.h
DESCRIPTION:  Component wise header file for Copy process.
              DAMOS V5.8.3 WinServer 2008 R2
              Format N_MsgH
              Message Concept Version V2.3.1
              Do not edit this file

COPYRIGHT:    All rights reserved by ROBERT BOSCH GMBH, STUTTGART


*********************************************************************************/
#ifndef _ETC_MSG_H
#define _ETC_MSG_H
/* --------------extern Declaration of Original Messages--------------------*/


#ifndef __ETC_CTCURRUNTST_EXT__
#define __ETC_CTCURRUNTST_EXT__
extern uint8                    Etc_ctCurRunTst;
#endif /* __ETC_CTCURRUNTST_EXT__ */

/* -------------- macro defintion of messages --------------------*/


#ifndef SET_Etc_ctCurRunTst 
#define SET_Etc_ctCurRunTst (Etc_ctCurRunTst=TRUE)
#endif
#ifndef CLR_Etc_ctCurRunTst 
#define CLR_Etc_ctCurRunTst (Etc_ctCurRunTst=FALSE)
#endif
#ifndef GET_Etc_ctCurRunTst 
#define GET_Etc_ctCurRunTst (Etc_ctCurRunTst)
#endif
#ifndef PUT_Etc_ctCurRunTst 
#define PUT_Etc_ctCurRunTst(val) ((val) ? SET_Etc_ctCurRunTst : CLR_Etc_ctCurRunTst)
#endif

#endif
