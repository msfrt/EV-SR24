#ifndef     OEM_H                                          
#define     OEM_H                /* module identifier */   
#include "core_env.h"                                      
/* extern definitions of OEM processes*/						   

#define _terminate_customer_SwTask NULL
/******* Definition of variables only local to OEM schduler module. That is, not to ********/
/******* be exported to other modules and not relevant for calibration.     ********/

typedef void                 (T_process) (void);    /* type process                          */
typedef T_process*           T_processPtr ;         /* type pointer to process               */
typedef const T_processPtr*  T_processPtrPtr;
typedef const T_processPtr*  T_processPtrTabPtr;    /* type pointer to process pointer table */
typedef T_process* const     T_processPtrTab[];     /* type array of process pointer         */
typedef T_processPtrTab*     T_processTabTabPtr;
extern uint8 NewEagle_SeedKey(uint8* seed, uint8* TstrKey, uint8 length);
extern bool NewEagle_PreCond (void);

																		   
#endif
