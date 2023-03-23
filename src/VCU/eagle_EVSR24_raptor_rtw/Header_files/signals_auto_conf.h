
#ifndef _SIGNALS_AUTO_CONF_H
#define _SIGNALS_AUTO_CONF_H


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef uint8 Signals_BitCombine_Struct_t;

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Maximum used external signal number */
#define SIGNALS_MAXUSEDSIGNUMEXT 49

/* Verbal conversions of signal name to internal signal numbers                                   */
#define SIGNALS_Signals_Default       0  
#define SIGNALS_EpmCaS_phiOfsCorr     1  
#define SIGNALS_Epm_nEng              2  
#define SIGNALS_Epm_stOpMode          3  
#define SIGNALS_Epm_stSync            4  
#define SIGNALS_PID01h                5  
#define SIGNALS_PID21h                6  
#define SIGNALS_PID30h                7  
#define SIGNALS_PID31h                8  
#define SIGNALS_Signals_FillSig_1Bit  9  
#define SIGNALS_Signals_FillSig_1Byte 10 
#define SIGNALS_Signals_FillSig_2Bit  11 
#define SIGNALS_Signals_FillSig_2Byte 12 
#define SIGNALS_Signals_FillSig_3Bit  13 
#define SIGNALS_Signals_FillSig_4Bit  14 
#define SIGNALS_Signals_FillSig_4Byte 15 
#define SIGNALS_Signals_FillSig_5Bit  16 
#define SIGNALS_Signals_FillSig_6Bit  17 
#define SIGNALS_Signals_FillSig_7Bit  18 
#define SIGNALS_T15_stRaw             19 
#define SIGNALS_UAcc_Sig_Ctrl_st      20 

/* Verbal conversions for pid numbers to internal signal numbers                                  */
#define SIGNALS_PID_1_0  SIGNALS_PID01h   
#define SIGNALS_PID_12_0 SIGNALS_Epm_nEng 
#define SIGNALS_PID_33_0 SIGNALS_PID21h   
#define SIGNALS_PID_48_0 SIGNALS_PID30h   
#define SIGNALS_PID_49_0 SIGNALS_PID31h   

/* Verbal conversion external signal number to internal signal numbers                            */
#define SIGNALS_EXT_1  5 
#define SIGNALS_EXT_33 6 
#define SIGNALS_EXT_49 8 

/* Verbal conversion of internal signal number to external signal number                          */
#define SIGNALS_INT2EXT_5 1  
#define SIGNALS_INT2EXT_6 33 
#define SIGNALS_INT2EXT_8 49 

/* Length of all Signals for DIA and CAN                                                          */
#define SIGNALS_LENGTH_Signals_Default_DIA       0  
#define SIGNALS_LENGTH_Signals_Default_CAN       0  
#define SIGNALS_LENGTH_EpmCaS_phiOfsCorr_DIA     16 
#define SIGNALS_LENGTH_EpmCaS_phiOfsCorr_CAN     16 
#define SIGNALS_LENGTH_Epm_nEng_DIA              16 
#define SIGNALS_LENGTH_Epm_nEng_CAN              16 
#define SIGNALS_LENGTH_Epm_stOpMode_DIA          8  
#define SIGNALS_LENGTH_Epm_stOpMode_CAN          8  
#define SIGNALS_LENGTH_Epm_stSync_DIA            8  
#define SIGNALS_LENGTH_Epm_stSync_CAN            8  
#define SIGNALS_LENGTH_PID01h_DIA                32 
#define SIGNALS_LENGTH_PID01h_CAN                32 
#define SIGNALS_LENGTH_PID21h_DIA                16 
#define SIGNALS_LENGTH_PID21h_CAN                16 
#define SIGNALS_LENGTH_PID30h_DIA                8  
#define SIGNALS_LENGTH_PID30h_CAN                8  
#define SIGNALS_LENGTH_PID31h_DIA                16 
#define SIGNALS_LENGTH_PID31h_CAN                16 
#define SIGNALS_LENGTH_Signals_FillSig_1Bit_DIA  1  
#define SIGNALS_LENGTH_Signals_FillSig_1Bit_CAN  1  
#define SIGNALS_LENGTH_Signals_FillSig_1Byte_DIA 8  
#define SIGNALS_LENGTH_Signals_FillSig_1Byte_CAN 8  
#define SIGNALS_LENGTH_Signals_FillSig_2Bit_DIA  2  
#define SIGNALS_LENGTH_Signals_FillSig_2Bit_CAN  2  
#define SIGNALS_LENGTH_Signals_FillSig_2Byte_DIA 16 
#define SIGNALS_LENGTH_Signals_FillSig_2Byte_CAN 16 
#define SIGNALS_LENGTH_Signals_FillSig_3Bit_DIA  3  
#define SIGNALS_LENGTH_Signals_FillSig_3Bit_CAN  3  
#define SIGNALS_LENGTH_Signals_FillSig_4Bit_DIA  4  
#define SIGNALS_LENGTH_Signals_FillSig_4Bit_CAN  4  
#define SIGNALS_LENGTH_Signals_FillSig_4Byte_DIA 32 
#define SIGNALS_LENGTH_Signals_FillSig_4Byte_CAN 32 
#define SIGNALS_LENGTH_Signals_FillSig_5Bit_DIA  5  
#define SIGNALS_LENGTH_Signals_FillSig_5Bit_CAN  5  
#define SIGNALS_LENGTH_Signals_FillSig_6Bit_DIA  6  
#define SIGNALS_LENGTH_Signals_FillSig_6Bit_CAN  6  
#define SIGNALS_LENGTH_Signals_FillSig_7Bit_DIA  7  
#define SIGNALS_LENGTH_Signals_FillSig_7Bit_CAN  7  
#define SIGNALS_LENGTH_T15_stRaw_DIA             8  
#define SIGNALS_LENGTH_T15_stRaw_CAN             8  
#define SIGNALS_LENGTH_UAcc_Sig_Ctrl_st_DIA      8  
#define SIGNALS_LENGTH_UAcc_Sig_Ctrl_st_CAN      8  






/*
 ***************************************************************************************************
 * External declarations
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Access macros for BC Signal attributes
 ***************************************************************************************************
 */
#define Signals_GetBCLength(SigNum) Signals_BitCombine_tab[((SigNum) - Signals_MaxUsedSigNum - 1)]


/*_SIGNALS_AUTO_CONF_H */
#endif
