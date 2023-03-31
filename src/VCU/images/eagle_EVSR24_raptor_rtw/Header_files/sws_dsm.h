
/* The BSW diagnostic error reading by New Eagle ASW is done by the following function*/
 
extern uint32 swsh_Read_DFC_EID(uint16 DFCNumber);

/* Interface for the New Eagle ASW to clear the errors*/

extern void swsh_ClearBSWDFC(void);

/*Interface to acquire the DIO related error information of CJ950*/
extern uint32 swsh_DIOGetErrorInfo (uint16 DIOsignumber);

/*Interface to acquire the PWM related error information of CJ950*/
extern uint32 swsh_PWMGetErrorInfo (uint16 PWMsignumber);

/*Clear the DIO errors of CJ950*/
extern void swsh_DIOClrError (uint16 DIOsignumber);

/*Clear the PWM errors of CJ950*/
extern void swsh_PWMClrError (uint16 PWMsignumber);

extern uint32 swsh_Cj135_Err (uint8 *adr_pu8, uint32 Chipnumber);

extern uint32 swsh_Cj135Htr_Err (uint16 Chipnumber);

extern void swsh_Cj135_ClearHtrErr(uint16 Chipnumber);




