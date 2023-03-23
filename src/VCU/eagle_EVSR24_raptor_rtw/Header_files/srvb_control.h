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
 * $Filename__:srvb_control.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Basic Services
 *             Derived from B_SRVB.11.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NSL2COB$ 
 * $Date______:26.11.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_control$ 
 * $Variant___:1.22.0$ 
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
 * 1.22.0; 0     26.11.2014 NSL2COB
 *   -Rainflow counter comment change
 * 
 * 1.21.0; 4     08.10.2014 NSL2COB
 *   -Added Comment
 * 
 * 1.21.0; 3     08.10.2014 NSL2COB
 *   -ADDED SRVB_RAINFLOWCOUNTER CONFIGURATION Location
 * 
 * 1.21.0; 2     08.10.2014 NSL2COB
 *   -Added the configuration location
 * 
 * 1.21.0; 1     07.10.2014 NSL2COB
 *   -Closed Loop Cylcles Finder Block structure added
 * 
 * 1.21.0; 0     24.09.2014 NSL2COB
 *   -Added the structure for SrvB Rainflow Counter
 * 
 * 1.20.0; 0     25.08.2014 PIR5COB
 *   Hyteresis functionalities update
 * 
 * 1.15.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvB
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_CONTROL_H
#define _SRVB_CONTROL_H


/* Structure for Rainflow Counter functionalities */
typedef struct
{
sint32 *InputBuf_ps32;
uint8   BufPos_u8;
sint32 *OutputBuf_ps32; 
uint16  dt_u16;
bool   Process_end_b; 
bool   Input_off_b;   
}SrvB_RainFlowParam_t;
 
 
/*** SRVB_EDGEFALLING_B_LOCATION ***/
#if (SRVB_EDGEFALLING_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_EdgeFalling_B(bool Inp_b, bool* Old_pb);

#elif (SRVB_EDGEFALLING_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_EdgeFalling_B SrvB_EdgeFalling_B_inline

#elif (SRVB_EDGEFALLING_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_EdgeFalling_B(bool Inp_b, bool* Old_pb));

#else
    #error >>>> 'Configuration for SrvB_EdgeFalling_B is not supported'

/* SRVB_EDGEFALLING_B_LOCATION */
#endif

/*** SRVB_EDGERISING_B_LOCATION ***/
#if (SRVB_EDGERISING_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_EdgeRising_B(bool Inp_b, bool* Old_pb);

#elif (SRVB_EDGERISING_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_EdgeRising_B SrvB_EdgeRising_B_inline

#elif (SRVB_EDGERISING_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_EdgeRising_B(bool Inp_b, bool* Old_pb));

#else
    #error >>>> 'Configuration for SrvB_EdgeRising_B is not supported'

/* SRVB_EDGERISING_B_LOCATION */
#endif

/*** SRVB_EDGEBIPOL_B_LOCATION ***/
#if (SRVB_EDGEBIPOL_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_EdgeBipol_B(bool Inp_b, bool* Old_pb);

#elif (SRVB_EDGEBIPOL_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_EdgeBipol_B SrvB_EdgeBipol_B_inline

#elif (SRVB_EDGEBIPOL_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_EdgeBipol_B(bool Inp_b, bool* Old_pb));

#else
    #error >>>> 'Configuration for SrvB_EdgeBipol_B is not supported'

/* SRVB_EDGEBIPOL_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLR_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLR_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLR_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLR_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLR_U32_B SrvB_SwitchHystLR_U32_B_inline

#elif (SRVB_SWITCHHYSTLR_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLR_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLR_U32_B is not supported'

/* SRVB_SWITCHHYSTLR_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLR_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLR_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLR_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLR_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLR_S32_B SrvB_SwitchHystLR_S32_B_inline

#elif (SRVB_SWITCHHYSTLR_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLR_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLR_S32_B is not supported'

/* SRVB_SWITCHHYSTLR_S32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTDR_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTDR_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystDR_U32_B(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTDR_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystDR_U32_B SrvB_SwitchHystDR_U32_B_inline

#elif (SRVB_SWITCHHYSTDR_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystDR_U32_B(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystDR_U32_B is not supported'

/* SRVB_SWITCHHYSTDR_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTDR_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTDR_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystDR_S32_B(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTDR_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystDR_S32_B SrvB_SwitchHystDR_S32_B_inline

#elif (SRVB_SWITCHHYSTDR_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystDR_S32_B(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystDR_S32_B is not supported'

/* SRVB_SWITCHHYSTDR_S32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLD_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLD_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLD_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLD_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLD_U32_B SrvB_SwitchHystLD_U32_B_inline

#elif (SRVB_SWITCHHYSTLD_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLD_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLD_U32_B is not supported'

/* SRVB_SWITCHHYSTLD_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLD_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLD_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLD_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLD_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLD_S32_B SrvB_SwitchHystLD_S32_B_inline

#elif (SRVB_SWITCHHYSTLD_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLD_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLD_S32_B is not supported'

/* SRVB_SWITCHHYSTLD_S32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTCHD_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTCHD_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystCHD_U32_B(uint32 X_u32, uint32 Center_u32, uint32 HalfDelta_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTCHD_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystCHD_U32_B SrvB_SwitchHystCHD_U32_B_inline

#elif (SRVB_SWITCHHYSTCHD_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystCHD_U32_B(uint32 X_u32, uint32 Center_u32, uint32 HalfDelta_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystCHD_U32_B is not supported'

/* SRVB_SWITCHHYSTCHD_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTCHD_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTCHD_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystCHD_S32_B(sint32 X_s32, sint32 Center_s32, sint32 HalfDelta_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTCHD_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystCHD_S32_B SrvB_SwitchHystCHD_S32_B_inline

#elif (SRVB_SWITCHHYSTCHD_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystCHD_S32_B(sint32 X_s32, sint32 Center_s32, sint32 HalfDelta_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystCHD_S32_B is not supported'

/* SRVB_SWITCHHYSTCHD_S32_B_LOCATION */
#endif


/*** SRVB_RSFF_B_LOCATION ***/
#if (SRVB_RSFF_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_RSFF_B(bool R_b, bool S_b, bool* State_pb);

#elif (SRVB_RSFF_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_RSFF_B SrvB_RSFF_B_inline

#elif (SRVB_RSFF_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_RSFF_B(bool R_b, bool S_b, bool* State_pb));

#else
    #error >>>> 'Configuration for SrvB_RSFF_B is not supported'

/* SRVB_RSFF_B_LOCATION */
#endif


/* SRVB_COUNTERU8SET_LOCATION ************************************************/
#if   (SRVB_COUNTERU8SET_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_CounterU8Set(uint8* const Counter_cpu8, uint8 Val_u8);

#elif (SRVB_COUNTERU8SET_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_CounterU8Set SrvB_CounterU8Set_inline

#elif (SRVB_COUNTERU8SET_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_CounterU8Set(uint8* const Counter_cpu8, uint8 Val_u8));

#else
    #error >>>> 'Configuration for SrvB_CounterU8Set not supported'

/* SRVB_COUNTERU8SET_LOCATION */
#endif


/* SRVB_COUNTER_U8_LOCATION ************************************************/
#if   (SRVB_COUNTER_U8_LOCATION == SRVB_LOCATION_CACHED)

    extern uint8 SrvB_Counter_U8(uint8* const Counter_cpu8);

#elif (SRVB_COUNTER_U8_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Counter_U8 SrvB_Counter_U8_inline

#elif (SRVB_COUNTER_U8_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8 SrvB_Counter_U8(uint8* const Counter_cpu8));

#else

    #error >>>> 'Configuration for SrvB_Counter_U8 not supported'

/* SRVB_COUNTER_U8_LOCATION */
#endif


/* SRVB_COUNTERU16SET_LOCATION ************************************************/
#if   (SRVB_COUNTERU16SET_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_CounterU16Set(uint16* const Counter_cpu16, uint16 Val_u16);

#elif (SRVB_COUNTERU16SET_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_CounterU16Set SrvB_CounterU16Set_inline

#elif (SRVB_COUNTERU16SET_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_CounterU16Set(uint16* const Counter_cpu16, uint16 Val_u16));

#else
    #error >>>> 'Configuration for SrvB_CounterU16Set not supported'

/* SRVB_COUNTERU16SET_LOCATION */
#endif


/* SRVB_COUNTER_U16_LOCATION ************************************************/
#if   (SRVB_COUNTER_U16_LOCATION == SRVB_LOCATION_CACHED)

    extern uint16 SrvB_Counter_U16(uint16* const Counter_cpu16);

#elif (SRVB_COUNTER_U16_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Counter_U16 SrvB_Counter_U16_inline

#elif (SRVB_COUNTER_U16_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint16 SrvB_Counter_U16(uint16* const Counter_cpu16));

#else

    #error 'Configuration for SrvB_Counter_U16 not supported'

#endif  /* SRVB_COUNTER_U16_LOCATION */


/* SRVB_COUNTERU32SET_LOCATION ************************************************/
#if   (SRVB_COUNTERU32SET_LOCATION == SRVB_LOCATION_CACHED)

    extern void SrvB_CounterU32Set(uint32* const Counter_cpu32, uint32 Val_u32);

#elif (SRVB_COUNTERU32SET_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_CounterU32Set SrvB_CounterU32Set_inline

#elif (SRVB_COUNTERU32SET_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern void SrvB_CounterU32Set(uint32* const Counter_cpu32, uint32 Val_u32));

#else
    #error >>>> 'Configuration for SrvB_CounterU32Set not supported'

/* SRVB_COUNTERU32SET_LOCATION */
#endif


/* SRVB_COUNTER_U32_LOCATION ************************************************/
#if   (SRVB_COUNTER_U32_LOCATION == SRVB_LOCATION_CACHED)

    extern uint32 SrvB_Counter_U32(uint32* const Counter_cpu32);

#elif (SRVB_COUNTER_U32_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_Counter_U32 SrvB_Counter_U32_inline

#elif (SRVB_COUNTER_U32_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint32 SrvB_Counter_U32(uint32* const Counter_cpu32));

#else

    #error >>>>'Configuration for SrvB_Counter_U32 not supported'

 /* SRVB_COUNTER_U32_LOCATION */
#endif


/* SRVB_RAINFLOWCOUNTER_S32_B_LOCATION */
#if   (SRVB_RAINFLOWCOUNTER_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_RainFlowCounter_S32_B(sint32 Input_s32, SrvB_RainFlowParam_t *RfParam_pst);

#elif (SRVB_RAINFLOWCOUNTER_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #error >>>>'The function SrvB_RainFlowCounter_S32_B can\'t be inlined: Configuration not supported'

#elif (SRVB_RAINFLOWCOUNTER_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_RainFlowCounter_S32_B(sint32 Input_s32, SrvB_RainFlowParam_t *RfParam_pst));
#else
    #error >>>>'Configuration for SrvB_RainFlowCounter_S32_B not supported'

/* SRVB_RAINFLOWCOUNTER_S32_B_LOCATION */
#endif


/* Suzuki's SMC project specific hysteresis functionalities */

/* SRVB_SWITCHHYSTLRE_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLRE_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLRE_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLRE_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLRE_U32_B SrvB_SwitchHystLRE_U32_B_inline

#elif (SRVB_SWITCHHYSTLRE_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLRE_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLRE_U32_B is not supported'

/* SRVB_SWITCHHYSTLRE_U32_B_LOCATION */
#endif



/* SRVB_SWITCHHYSTLER_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLER_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLER_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLER_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLER_U32_B SrvB_SwitchHystLER_U32_B_inline

#elif (SRVB_SWITCHHYSTLER_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLER_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLER_U32_B is not supported'

/* SRVB_SWITCHHYSTLER_U32_B_LOCATION */
#endif

/* SRVB_SWITCHHYSTLERI_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLERI_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLERI_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLERI_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLERI_U32_B SrvB_SwitchHystLERI_U32_B_inline

#elif (SRVB_SWITCHHYSTLERI_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLERI_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLERI_U32_B is not supported'

/* SRVB_SWITCHHYSTLERI_U32_B_LOCATION */
#endif

/* SRVB_SWITCHHYSTLREI_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLREI_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLREI_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLREI_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLREI_U32_B SrvB_SwitchHystLREI_U32_B_inline

#elif (SRVB_SWITCHHYSTLREI_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLREI_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLREI_U32_B is not supported'

/* SRVB_SWITCHHYSTLREI_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLED_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLED_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLED_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLED_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLED_U32_B SrvB_SwitchHystLED_U32_B_inline

#elif (SRVB_SWITCHHYSTLED_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLED_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLED_U32_B is not supported'

/* SRVB_SWITCHHYSTLED_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLDE_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLDE_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLDE_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLDE_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLDE_U32_B SrvB_SwitchHystLDE_U32_B_inline

#elif (SRVB_SWITCHHYSTLDE_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLDE_U32_B(uint32 X_u32, uint32 Lsp_u32, uint32 Delta_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLDE_U32_B is not supported'

/* SRVB_SWITCHHYSTLDE_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTDER_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTDER_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystDER_U32_B(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTDER_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystDER_U32_B SrvB_SwitchHystDER_U32_B_inline

#elif (SRVB_SWITCHHYSTDER_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystDER_U32_B(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystDER_U32_B is not supported'

/* SRVB_SWITCHHYSTDER_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTDRE_U32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTDRE_U32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystDRE_U32_B(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb);

#elif (SRVB_SWITCHHYSTDRE_U32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystDRE_U32_B SrvB_SwitchHystDRE_U32_B_inline

#elif (SRVB_SWITCHHYSTDRE_U32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystDRE_U32_B(uint32 X_u32, uint32 Delta_u32, uint32 Rsp_u32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystDRE_U32_B is not supported'

/* SRVB_SWITCHHYSTDRE_U32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLRE_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLRE_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLRE_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLRE_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLRE_S32_B SrvB_SwitchHystLRE_S32_B_inline

#elif (SRVB_SWITCHHYSTLRE_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLRE_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLRE_S32_B is not supported'

/* SRVB_SWITCHHYSTLRE_S32_B_LOCATION */
#endif



/* SRVB_SWITCHHYSTLER_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLER_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLER_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLER_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLER_S32_B SrvB_SwitchHystLER_S32_B_inline

#elif (SRVB_SWITCHHYSTLER_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLER_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLER_S32_B is not supported'

/* SRVB_SWITCHHYSTLER_S32_B_LOCATION */
#endif

/* SRVB_SWITCHHYSTLERI_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLERI_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLERI_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLERI_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLERI_S32_B SrvB_SwitchHystLERI_S32_B_inline

#elif (SRVB_SWITCHHYSTLERI_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLERI_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLERI_S32_B is not supported'

/* SRVB_SWITCHHYSTLERI_S32_B_LOCATION */
#endif

/* SRVB_SWITCHHYSTLREI_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLREI_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLREI_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLREI_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLREI_S32_B SrvB_SwitchHystLREI_S32_B_inline

#elif (SRVB_SWITCHHYSTLREI_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLREI_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLREI_S32_B is not supported'

/* SRVB_SWITCHHYSTLREI_S32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLED_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLED_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLED_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLED_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLED_S32_B SrvB_SwitchHystLED_S32_B_inline

#elif (SRVB_SWITCHHYSTLED_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLED_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLED_S32_B is not supported'

/* SRVB_SWITCHHYSTLED_S32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTLDE_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTLDE_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystLDE_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTLDE_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystLDE_S32_B SrvB_SwitchHystLDE_S32_B_inline

#elif (SRVB_SWITCHHYSTLDE_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystLDE_S32_B(sint32 X_s32, sint32 Lsp_s32, sint32 Delta_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystLDE_S32_B is not supported'

/* SRVB_SWITCHHYSTLDE_S32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTDER_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTDER_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystDER_S32_B(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTDER_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystDER_S32_B SrvB_SwitchHystDER_S32_B_inline

#elif (SRVB_SWITCHHYSTDER_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystDER_S32_B(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystDER_S32_B is not supported'

/* SRVB_SWITCHHYSTDER_S32_B_LOCATION */
#endif


/* SRVB_SWITCHHYSTDRE_S32_B_LOCATION ************************************************/
#if (SRVB_SWITCHHYSTDRE_S32_B_LOCATION == SRVB_LOCATION_CACHED)

    extern bool SrvB_SwitchHystDRE_S32_B(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb);

#elif (SRVB_SWITCHHYSTDRE_S32_B_LOCATION == SRVB_LOCATION_INLINE)

    #define SrvB_SwitchHystDRE_S32_B SrvB_SwitchHystDRE_S32_B_inline

#elif (SRVB_SWITCHHYSTDRE_S32_B_LOCATION == SRVB_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvB_SwitchHystDRE_S32_B(sint32 X_s32, sint32 Delta_s32, sint32 Rsp_s32, bool * State_pb));

#else
    #error >>>> 'Configuration for SrvB_SwitchHystDRE_S32_B is not supported'

/* SRVB_SWITCHHYSTDRE_S32_B_LOCATION */
#endif


/* _SRVB_CONTROL_H */
#endif
