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
 * $Filename__:dio_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MTR1COB$ 
 * $Date______:16.05.2013$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:dio_template_conf$ 
 * $Variant___:1.18.0$ 
 * $Revision__:2$ 
 * $Type______:HT$ 
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
 * 1.18.0; 2     16.05.2013 MTR1COB
 *   review comment update
 * 
 * 1.18.0; 1     13.05.2013 MTR1COB
 *   Function name chaged for thd DIO OL dia
 * 
 * 1.18.0; 0     08.05.2013 MTR1COB
 *   OL diagnostic function implement for the CJ950 and R2S2
 * 
 * 1.9.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: dio_template_conf.ht
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DIO_AUTO_CONF_H
#define _DIO_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Automatically generated configuration headerfile of DIO module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include "bsp742.h"
#include "cj950.h"
#include "dsm.h"
#include "pmd.h"
#include "port.h"



/*
 ***************************************************************************************************
 * Defines for Dio_GetErrorInfo()
 ***************************************************************************************************
 */

#ifdef PMD_GEI_NEW_MSK
/* powerstage errors */
#define DIO_GEI_ERR_SCB_MSK      PMD_GEI_ERR_SCB_MSK      
#define DIO_GEI_ERR_SCG_MSK      PMD_GEI_ERR_SCG_MSK      
#define DIO_GEI_ERR_OT_MSK       PMD_GEI_ERR_OT_MSK       
#define DIO_GEI_ERR_SCBOT_MSK    PMD_GEI_ERR_SCBOT_MSK    
#define DIO_GEI_ERR_OV_MSK       PMD_GEI_ERR_OV_MSK       
#define DIO_GEI_ERR_OL_MSK       PMD_GEI_ERR_OL_MSK       
#define DIO_GEI_ERR_FD_MSK       PMD_GEI_ERR_FD_MSK       
#define DIO_GEI_ERR_MSK          PMD_GEI_ERR_MSK          

/* protokoll errors  */
#define DIO_GEI_ERR_COM_MSK      PMD_GEI_ERR_COM_MSK      
#define DIO_GEI_ERR_SPI_MSK      PMD_GEI_ERR_SPI_MSK      

/* tested flags  */
#define DIO_GEI_TF_SCB_MSK       PMD_GEI_TF_SCB_MSK       
#define DIO_GEI_TF_SCG_MSK       PMD_GEI_TF_SCG_MSK       
#define DIO_GEI_TF_OL_MSK        PMD_GEI_TF_OL_MSK        
#define DIO_GEI_TF_OT_MSK        PMD_GEI_TF_OT_MSK        
#define DIO_GEI_TF_FD_MSK        PMD_GEI_TF_FD_MSK        
#define DIO_GEI_TF_MSK           PMD_GEI_TF_MSK           
                                                          
/* general info bits */
#define DIO_GEI_INFO_CE_MSK      PMD_GEI_INFO_CE_MSK      
#define DIO_GEI_INFO_CO_MSK      PMD_GEI_INFO_CO_MSK      

/* testimpulse status */
#define DIO_GEI_TST_DRU_MSK      PMD_GEI_TST_DRU_MSK      
#define DIO_GEI_TST_DRQ_MSK      PMD_GEI_TST_DRQ_MSK      
#define DIO_GEI_TST_TRU_MSK      PMD_GEI_TST_TRU_MSK      
#define DIO_GEI_TST_TRQ_MSK      PMD_GEI_TST_TRQ_MSK      
#define DIO_GEI_TST_FIN_MSK      PMD_GEI_TST_FIN_MSK      
#define DIO_GEI_TST_RUN_MSK      PMD_GEI_TST_RUN_MSK      

#define DIO_GEI_NEW_MSK          PMD_GEI_NEW_MSK           

#endif

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */




/* Defines for 'INDEX' and 'INVPAR' */
#define Dio_swtCj950P2P17OUTInv_C 1  
#define Dio_swtCj950P1P10OUTInv_C 1  
#define Dio_swtPortP6P7INInv_C    0  
#define Dio_swtPortP7P0INInv_C    0  
#define Dio_swtCj950P1P13OUTInv_C 1  
#define Dio_swtPortP4P0OUTInv_C   0  
#define Dio_swtCj950P3P13OUTInv_C 1  
#define Dio_swtCj950P2P6OUTInv_C  1  
#define Dio_swtCj950P3P12OUTInv_C 1  
#define Dio_swtCj950P3P14OUTInv_C 1  
#define Dio_swtPortP7P2OUTInv_C   0  
#define Dio_swtCj950P2P18OUTInv_C 1  
#define Dio_swtCj950P1P15OUTInv_C 0  
#define Dio_swtPortP9P1INInv_C    0  
#define Dio_swtCj950P3P6OUTInv_C  1  
#define Dio_swtCj950P1P17OUTInv_C 1  
#define Dio_swtCj950P3P11OUTInv_C 1  
#define Dio_swtBsp742P1P1OUTInv_C 0  
#define Dio_swtPortP7P6OUTInv_C   0  
#define Dio_swtCj950P1P5OUTInv_C  1  
#define Dio_swtCj950P2P16OUTInv_C 1  
#define Dio_swtCj950P1P16OUTInv_C 1  
#define Dio_swtPortP7P1OUTInv_C   0  
#define Dio_swtPortP8P1INInv_C    0  
#define Dio_swtPortP8P3INInv_C    0  
#define Dio_swtCj950P2P11OUTInv_C 1  
#define Dio_swtCj950P2P13OUTInv_C 1  
#define Dio_swtPortP2P9INInv_C    0  
#define Dio_swtCj950P1P14OUTInv_C 1  
#define Dio_swtCj950P1P11OUTInv_C 1  
#define Dio_swtPortP2P15INInv_C   0  
#define Dio_swtPortP7P3OUTInv_C   0  
#define Dio_swtPortP7P4INInv_C    0  
#define Dio_swtCj950P2P15OUTInv_C 1  
#define Dio_swtCj950P3P8OUTInv_C  1  
#define Dio_swtCj950P3P5OUTInv_C  1  
#define Dio_swtPortP1P2INInv_C    0  
#define Dio_swtCj950P1P18OUTInv_C 1  
#define Dio_swtPortP8P2INInv_C    0  
#define Dio_swtCj950P2P8OUTInv_C  1  
#define Dio_swtPortP1P1INInv_C    0  
#define Dio_swtCj950P3P3OUTInv_C  1  
#define Dio_swtCj950P1P12OUTInv_C 1  
#define Dio_swtCj950P1P7OUTInv_C  1  
#define Dio_swtPortP8P0INInv_C    0  
#define Dio_swtCj950P1P6OUTInv_C  1  
#define Dio_swtCj950P1P8OUTInv_C  1  
#define Dio_swtCj950P3P7OUTInv_C  1  
#define Dio_idxOSK054_C           0  
#define Dio_idxOSK038_C           1  
#define Dio_idxOSK039_C           2  
#define Dio_idxIODBidirCj135Int_C 3  
#define Dio_idxOSA001_C           4  
#define Dio_idxOSK073_C           5  
#define Dio_idxOSA075_C           6  
#define Dio_idxOSA002_C           7  
#define Dio_idxCJ9502DISABLE_C    8  
#define Dio_idxOSK059_C           9  
#define Dio_idxOSK053_C           10 
#define Dio_idxOSA011_C           11 
#define Dio_idxASHFMSE_C          12 
#define Dio_idxOSA025_C           13 
#define Dio_idxOSK089_C           14 
#define Dio_idxKNDETMUXPORT_C     15 
#define Dio_idxOSK072_C           16 
#define Dio_idxOSK070_C           17 
#define Dio_idxOSK019_C           18 
#define Dio_idxCJ9501DISABLE_C    19 
#define Dio_idxOSK071_C           20 
#define Dio_idxOSK021_C           21 
#define Dio_idxOSK012_C           22 
#define Dio_idxOSK037_C           23 
#define Dio_idxCJ9503DISABLE_C    24 
#define Dio_idxOSK069_C           25 
#define Dio_idxOSA009_C           26 
#define Dio_idxOSA094_C           27 
#define Dio_idxASHFMSE2_C         28 
#define Dio_idxOSA033_C           29 
#define Dio_idxOSA004_C           30 
#define Dio_idxOSK056_C           31 
#define Dio_idxOSK036_C           32 
#define Dio_idxOSK020_C           33 
#define Dio_idxOSK055_C           34 
#define Dio_idxOSA031_C           35 



/* Enumeration of configured DIO input signal names */
enum
{
    I_S_K049 = 0x7FFF, 
    I_S_K017,                              
    I_S_K014,                              
    I_S_K016,                              
    I_S_K028,                              
    I_S_K033,                              
    RST5_I_D,                              
    PSPLPRLY_DIAG1,                        
    HEGO_adS2B2BiDirRi,                    
    I_S_K047,                              
    HEGO_adS2B1BiDirRi,                    
    I_S_A057
};


/* Re-defines for non-calibratable output signal names */
#define O_S_K054             Dio_idxOSK054_C           
#define O_S_K038             Dio_idxOSK038_C           
#define O_S_K039             Dio_idxOSK039_C           
#define IO_D_Bidir_Cj135_Int Dio_idxIODBidirCj135Int_C 
#define O_S_A001             Dio_idxOSA001_C           
#define O_S_K073             Dio_idxOSK073_C           
#define O_S_A075             Dio_idxOSA075_C           
#define O_S_A002             Dio_idxOSA002_C           
#define CJ950_2_DISABLE      Dio_idxCJ9502DISABLE_C    
#define O_S_K059             Dio_idxOSK059_C           
#define O_S_K053             Dio_idxOSK053_C           
#define O_S_A011             Dio_idxOSA011_C           
#define A_S_HFMSE            Dio_idxASHFMSE_C          
#define O_S_A025             Dio_idxOSA025_C           
#define O_S_K089             Dio_idxOSK089_C           
#define KNDET_MUX_PORT       Dio_idxKNDETMUXPORT_C     
#define O_S_K072             Dio_idxOSK072_C           
#define O_S_K070             Dio_idxOSK070_C           
#define O_S_K019             Dio_idxOSK019_C           
#define CJ950_1_DISABLE      Dio_idxCJ9501DISABLE_C    
#define O_S_K071             Dio_idxOSK071_C           
#define O_S_K021             Dio_idxOSK021_C           
#define O_S_K012             Dio_idxOSK012_C           
#define O_S_K037             Dio_idxOSK037_C           
#define CJ950_3_DISABLE      Dio_idxCJ9503DISABLE_C    
#define O_S_K069             Dio_idxOSK069_C           
#define O_S_A009             Dio_idxOSA009_C           
#define O_S_A094             Dio_idxOSA094_C           
#define A_S_HFMSE2           Dio_idxASHFMSE2_C         
#define O_S_A033             Dio_idxOSA033_C           
#define O_S_A004             Dio_idxOSA004_C           
#define O_S_K056             Dio_idxOSK056_C           
#define O_S_K036             Dio_idxOSK036_C           
#define O_S_K020             Dio_idxOSK020_C           
#define O_S_K055             Dio_idxOSK055_C           
#define O_S_A031             Dio_idxOSA031_C           




/**
 ***************************************************************************************************
 * User interface for DIO input function.
 *
 * Parameter 'signal' is equivalent to the signal name.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Returns the value (LOW or HIGH) of the pin resp. powerstage
 * \seealso         Dio_Get()
 ***************************************************************************************************
 */
#define Dio_Get(signal)                DIO_GET_##signal


/**
 ***************************************************************************************************
 * User interface for DIO output function.
 *
 * Parameter 'signal' is equivalent to the signal name.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Returns the value (LOW or HIGH) of the pin resp. powerstage
 * \seealso         Dio_Get()
 ***************************************************************************************************
 */
#define Dio_Set(signal, val)           DIO_SET_##signal(val)

/* Defines for standard I/O */
#define DIO_SET_O_S_K054(val)             Cj950_DioSet(2, 17, ((val) ^ Dio_swtCj950P2P17OUTInv_C)) 
#define DIO_SET_O_S_K038(val)             Cj950_DioSet(1, 10, ((val) ^ Dio_swtCj950P1P10OUTInv_C)) 
#define DIO_GET_I_S_K049                  (bool)(Dio_swtPortP6P7INInv_C ^ PORT_DIOGET_P6_P7)       
#define DIO_GET_I_S_K017                  (bool)(Dio_swtPortP7P0INInv_C ^ PORT_DIOGET_P7_P0)       
#define DIO_SET_O_S_K039(val)             Cj950_DioSet(1, 13, ((val) ^ Dio_swtCj950P1P13OUTInv_C)) 
#define DIO_SET_IO_D_Bidir_Cj135_Int(val) (PORT_DIOSET_P4_P0((val) ^ Dio_swtPortP4P0OUTInv_C))     
#define DIO_SET_O_S_A001(val)             Cj950_DioSet(3, 13, ((val) ^ Dio_swtCj950P3P13OUTInv_C)) 
#define DIO_SET_O_S_K073(val)             Cj950_DioSet(2, 6, ((val) ^ Dio_swtCj950P2P6OUTInv_C))   
#define DIO_SET_O_S_A075(val)             Cj950_DioSet(3, 12, ((val) ^ Dio_swtCj950P3P12OUTInv_C)) 
#define DIO_SET_O_S_A002(val)             Cj950_DioSet(3, 14, ((val) ^ Dio_swtCj950P3P14OUTInv_C)) 
#define DIO_SET_CJ950_2_DISABLE(val)      (PORT_DIOSET_P7_P2((val) ^ Dio_swtPortP7P2OUTInv_C))     
#define DIO_SET_O_S_K059(val)             Cj950_DioSet(2, 18, ((val) ^ Dio_swtCj950P2P18OUTInv_C)) 
#define DIO_SET_O_S_K053(val)             Cj950_DioSet(1, 15, ((val) ^ Dio_swtCj950P1P15OUTInv_C)) 
#define DIO_GET_I_S_K014                  (bool)(Dio_swtPortP9P1INInv_C ^ PORT_DIOGET_P9_P1)       
#define DIO_SET_O_S_A011(val)             Cj950_DioSet(3, 6, ((val) ^ Dio_swtCj950P3P6OUTInv_C))   
#define DIO_SET_A_S_HFMSE(val)            Cj950_DioSet(1, 17, ((val) ^ Dio_swtCj950P1P17OUTInv_C)) 
#define DIO_SET_O_S_A025(val)             Cj950_DioSet(3, 11, ((val) ^ Dio_swtCj950P3P11OUTInv_C)) 
#define DIO_SET_O_S_K089(val)             Bsp742_DioSet(1, 1, ((val) ^ Dio_swtBsp742P1P1OUTInv_C)) 
#define DIO_SET_KNDET_MUX_PORT(val)       (PORT_DIOSET_P7_P6((val) ^ Dio_swtPortP7P6OUTInv_C))     
#define DIO_SET_O_S_K072(val)             Cj950_DioSet(1, 5, ((val) ^ Dio_swtCj950P1P5OUTInv_C))   
#define DIO_SET_O_S_K070(val)             Cj950_DioSet(2, 16, ((val) ^ Dio_swtCj950P2P16OUTInv_C)) 
#define DIO_SET_O_S_K019(val)             Cj950_DioSet(1, 16, ((val) ^ Dio_swtCj950P1P16OUTInv_C)) 
#define DIO_SET_CJ950_1_DISABLE(val)      (PORT_DIOSET_P7_P1((val) ^ Dio_swtPortP7P1OUTInv_C))     
#define DIO_GET_I_S_K016                  (bool)(Dio_swtPortP8P1INInv_C ^ PORT_DIOGET_P8_P1)       
#define DIO_GET_I_S_K028                  (bool)(Dio_swtPortP8P3INInv_C ^ PORT_DIOGET_P8_P3)       
#define DIO_SET_O_S_K071(val)             Cj950_DioSet(2, 11, ((val) ^ Dio_swtCj950P2P11OUTInv_C)) 
#define DIO_SET_O_S_K021(val)             Cj950_DioSet(2, 13, ((val) ^ Dio_swtCj950P2P13OUTInv_C)) 
#define DIO_GET_I_S_K033                  (bool)(Dio_swtPortP2P9INInv_C ^ PORT_DIOGET_P2_P9)       
#define DIO_SET_O_S_K012(val)             Cj950_DioSet(1, 14, ((val) ^ Dio_swtCj950P1P14OUTInv_C)) 
#define DIO_SET_O_S_K037(val)             Cj950_DioSet(1, 11, ((val) ^ Dio_swtCj950P1P11OUTInv_C)) 
#define DIO_GET_RST5_I_D                  (bool)(Dio_swtPortP2P15INInv_C ^ PORT_DIOGET_P2_P15)     
#define DIO_SET_CJ950_3_DISABLE(val)      (PORT_DIOSET_P7_P3((val) ^ Dio_swtPortP7P3OUTInv_C))     
#define DIO_GET_PSPLPRLY_DIAG1            (bool)(Dio_swtPortP7P4INInv_C ^ PORT_DIOGET_P7_P4)       
#define DIO_SET_O_S_K069(val)             Cj950_DioSet(2, 15, ((val) ^ Dio_swtCj950P2P15OUTInv_C)) 
#define DIO_SET_O_S_A009(val)             Cj950_DioSet(3, 8, ((val) ^ Dio_swtCj950P3P8OUTInv_C))   
#define DIO_SET_O_S_A094(val)             Cj950_DioSet(3, 5, ((val) ^ Dio_swtCj950P3P5OUTInv_C))   
#define DIO_GET_HEGO_adS2B2BiDirRi        (bool)(Dio_swtPortP1P2INInv_C ^ PORT_DIOGET_P1_P2)       
#define DIO_SET_A_S_HFMSE2(val)           Cj950_DioSet(1, 18, ((val) ^ Dio_swtCj950P1P18OUTInv_C)) 
#define DIO_GET_I_S_K047                  (bool)(Dio_swtPortP8P2INInv_C ^ PORT_DIOGET_P8_P2)       
#define DIO_SET_O_S_A033(val)             Cj950_DioSet(2, 8, ((val) ^ Dio_swtCj950P2P8OUTInv_C))   
#define DIO_GET_HEGO_adS2B1BiDirRi        (bool)(Dio_swtPortP1P1INInv_C ^ PORT_DIOGET_P1_P1)       
#define DIO_SET_O_S_A004(val)             Cj950_DioSet(3, 3, ((val) ^ Dio_swtCj950P3P3OUTInv_C))   
#define DIO_SET_O_S_K056(val)             Cj950_DioSet(1, 12, ((val) ^ Dio_swtCj950P1P12OUTInv_C)) 
#define DIO_SET_O_S_K036(val)             Cj950_DioSet(1, 7, ((val) ^ Dio_swtCj950P1P7OUTInv_C))   
#define DIO_GET_I_S_A057                  (bool)(Dio_swtPortP8P0INInv_C ^ PORT_DIOGET_P8_P0)       
#define DIO_SET_O_S_K020(val)             Cj950_DioSet(1, 6, ((val) ^ Dio_swtCj950P1P6OUTInv_C))   
#define DIO_SET_O_S_K055(val)             Cj950_DioSet(1, 8, ((val) ^ Dio_swtCj950P1P8OUTInv_C))   
#define DIO_SET_O_S_A031(val)             Cj950_DioSet(3, 7, ((val) ^ Dio_swtCj950P3P7OUTInv_C))   




/**
 ***************************************************************************************************
 * Changes direction of a configured signal to 'OUTPUT' and reads value during runtime.
 *
 * User interface to swap direction of 'signal'. The function changes direction of a configured
 * output signal to 'INPUT' and reads the value during runtime. Parameter 'signal' is equivalent to
 * the signal name.
 * Configuration process allows configuring a signal as an output during "normal operation". In
 * such a case signal is defined as a 'BIDIR_OUT' signal. Configuration process knows that there is
 * a signal which shall be used as an output signal, but in 'BIDIR' mode corresponding counterpart
 * reading function is generated for this signal, named 'Dio_GetBiDir(signal)'.
 * To avoid wrong usage of function 'Dio_GetBiDir(signal)' is only generated for signals which are
 * configured as 'BIDIR_OUT'. A function 'Dio_SetBiDir(signal, val)' is not available for this
 * signal.
 * Function is also used to restore direction changes made by 'Dio_GetBiDir(signal)'. It resets
 * signal for use during "normal operation".
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Returns the value (LOW or HIGH) of the pin resp. powerstage
 * \seealso         Dio_Get()
 ***************************************************************************************************
 */
#define Dio_GetBiDir(signal)           DIO_GETBIDIR_##signal


/**
 ***************************************************************************************************
 * Changes direction of a configured signal to 'OUTPUT' and sets value during runtime.
 *
 * User interface to swap direction of 'signal'. The function changes direction of a configured
 * signal to 'OUTPUT' and sets the value during runtime. Parameter 'signal' is equivalent to the
 * signal name. The configured pin will be set to the value defined by parameter 'val'.
 * Configuration process allows configuring a signal as an input during "normal operation". In
 * such a case signal is defined as a 'BIDIR_IN' signal. Configuration process knows that there is
 * a signal which shall be used as an input signal, but in 'BIDIR' mode corresponding counterpart
 * setting function is generated for this signal, named 'Dio_SetBiDir(signal, val)'.
 * To avoid wrong usage of function 'Dio_SetBiDir(signal, val)' is only generated for signals which
 * are configured as 'BIDIR_IN'. A function 'Dio_GetBiDir(signal)' is not available for this
 * signal. Function is also used to restore direction changes made by 'Dio_SetBiDir(signal, val)'.
 * It resets signal for use during "normal operation".
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          none
 * \seealso         Dio_Set()
 ***************************************************************************************************
 */
#define Dio_SetBiDir(signal, val)      DIO_SETBIDIR_##signal(val)

/* Defines for bidirectional I/O */
#define DIO_SETBIDIR_IO_D_Bidir_Cj135_Int(val) (Dio_SetBidir_IO_D_Bidir_Cj135_Int(val)) 
#define DIO_GETBIDIR_IO_D_Bidir_Cj135_Int      Dio_GetBidir_IO_D_Bidir_Cj135_Int()      
#define DIO_SETBIDIR_HEGO_adS2B2BiDirRi(val)   (Dio_SetBidir_HEGO_adS2B2BiDirRi(val))   
#define DIO_GETBIDIR_HEGO_adS2B2BiDirRi        Dio_GetBidir_HEGO_adS2B2BiDirRi()        
#define DIO_SETBIDIR_HEGO_adS2B1BiDirRi(val)   (Dio_SetBidir_HEGO_adS2B1BiDirRi(val))   
#define DIO_GETBIDIR_HEGO_adS2B1BiDirRi        Dio_GetBidir_HEGO_adS2B1BiDirRi()        

/* List of inline functions used for bi-directional mode */
static inline void Dio_SetBidir_IO_D_Bidir_Cj135_Int (bool stValue_b) __attribute__ ((always_inline));
static inline void Dio_SetBidir_IO_D_Bidir_Cj135_Int (bool stValue_b)
{
    PORT_DIO_DIROUT_P4P0();
    PORT_DIOSET_P4_P0((stValue_b) ^ Dio_swtPortP4P0OUTInv_C);
}

static inline bool Dio_GetBidir_IO_D_Bidir_Cj135_Int (void) __attribute__ ((always_inline));
static inline bool Dio_GetBidir_IO_D_Bidir_Cj135_Int (void)
{
    PORT_DIO_DIRIN_P4P0();
    return (bool)(Dio_swtPortP4P0OUTInv_C ^ PORT_DIOGET_P4_P0);
}

/* List of inline functions used for bi-directional mode */
static inline void Dio_SetBidir_HEGO_adS2B2BiDirRi (bool stValue_b) __attribute__ ((always_inline));
static inline void Dio_SetBidir_HEGO_adS2B2BiDirRi (bool stValue_b)
{
    PORT_DIO_DIROUT_P1P2();
    PORT_DIOSET_P1_P2((stValue_b) ^ Dio_swtPortP1P2INInv_C);
}

static inline bool Dio_GetBidir_HEGO_adS2B2BiDirRi (void) __attribute__ ((always_inline));
static inline bool Dio_GetBidir_HEGO_adS2B2BiDirRi (void)
{
    PORT_DIO_DIRIN_P1P2();
    return (bool)(Dio_swtPortP1P2INInv_C ^ PORT_DIOGET_P1_P2);
}

/* List of inline functions used for bi-directional mode */
static inline void Dio_SetBidir_HEGO_adS2B1BiDirRi (bool stValue_b) __attribute__ ((always_inline));
static inline void Dio_SetBidir_HEGO_adS2B1BiDirRi (bool stValue_b)
{
    PORT_DIO_DIROUT_P1P1();
    PORT_DIOSET_P1_P1((stValue_b) ^ Dio_swtPortP1P1INInv_C);
}

static inline bool Dio_GetBidir_HEGO_adS2B1BiDirRi (void) __attribute__ ((always_inline));
static inline bool Dio_GetBidir_HEGO_adS2B1BiDirRi (void)
{
    PORT_DIO_DIRIN_P1P1();
    return (bool)(Dio_swtPortP1P1INInv_C ^ PORT_DIOGET_P1_P1);
}




/**
 ***************************************************************************************************
 * Returns the error information of the signal.
 *
 * The errors are summed up since the last call of the routine and cleared after read. The error
 * information is not directly from the hardware but from a RAM mirror which is updated in
 * background by a scheduled process. So the returned value is not the current value, but the last
 * updated value.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Returns error information of the signal. The return value is a uint32 which is
 *                  bit coded. Not used bits are filled with 0. The caller must map out the not
 *                  used bits to be future save.
 * \seealso         Dio_GetErrorInfoIndirect()
 ***************************************************************************************************
 */
#define Dio_GetErrorInfo(signal)       DIO_GETERRORINFO_##signal

/* Defines for Power Stage Diagnosis (Error Info) */
#define DIO_GETERRORINFO_O_S_K054             Cj950_GetErrorInfo(2, 17) 
#define DIO_GETERRORINFO_O_S_K038             Cj950_GetErrorInfo(1, 10) 
#define DIO_GETERRORINFO_I_S_K049             (uint32)(0)               
#define DIO_GETERRORINFO_I_S_K017             (uint32)(0)               
#define DIO_GETERRORINFO_O_S_K039             Cj950_GetErrorInfo(1, 13) 
#define DIO_GETERRORINFO_IO_D_Bidir_Cj135_Int (uint32)(0)               
#define DIO_GETERRORINFO_O_S_A001             Cj950_GetErrorInfo(3, 13) 
#define DIO_GETERRORINFO_O_S_K073             Cj950_GetErrorInfo(2, 6)  
#define DIO_GETERRORINFO_O_S_A075             Cj950_GetErrorInfo(3, 12) 
#define DIO_GETERRORINFO_O_S_A002             Cj950_GetErrorInfo(3, 14) 
#define DIO_GETERRORINFO_CJ950_2_DISABLE      (uint32)(0)               
#define DIO_GETERRORINFO_O_S_K059             Cj950_GetErrorInfo(2, 18) 
#define DIO_GETERRORINFO_O_S_K053             Cj950_GetErrorInfo(1, 15) 
#define DIO_GETERRORINFO_I_S_K014             (uint32)(0)               
#define DIO_GETERRORINFO_O_S_A011             Cj950_GetErrorInfo(3, 6)  
#define DIO_GETERRORINFO_A_S_HFMSE            Cj950_GetErrorInfo(1, 17) 
#define DIO_GETERRORINFO_O_S_A025             Cj950_GetErrorInfo(3, 11) 
#define DIO_GETERRORINFO_O_S_K089             Bsp742_GetErrorInfo(1, 1) 
#define DIO_GETERRORINFO_KNDET_MUX_PORT       (uint32)(0)               
#define DIO_GETERRORINFO_O_S_K072             Cj950_GetErrorInfo(1, 5)  
#define DIO_GETERRORINFO_O_S_K070             Cj950_GetErrorInfo(2, 16) 
#define DIO_GETERRORINFO_O_S_K019             Cj950_GetErrorInfo(1, 16) 
#define DIO_GETERRORINFO_CJ950_1_DISABLE      (uint32)(0)               
#define DIO_GETERRORINFO_I_S_K016             (uint32)(0)               
#define DIO_GETERRORINFO_I_S_K028             (uint32)(0)               
#define DIO_GETERRORINFO_O_S_K071             Cj950_GetErrorInfo(2, 11) 
#define DIO_GETERRORINFO_O_S_K021             Cj950_GetErrorInfo(2, 13) 
#define DIO_GETERRORINFO_I_S_K033             (uint32)(0)               
#define DIO_GETERRORINFO_O_S_K012             Cj950_GetErrorInfo(1, 14) 
#define DIO_GETERRORINFO_O_S_K037             Cj950_GetErrorInfo(1, 11) 
#define DIO_GETERRORINFO_RST5_I_D             (uint32)(0)               
#define DIO_GETERRORINFO_CJ950_3_DISABLE      (uint32)(0)               
#define DIO_GETERRORINFO_PSPLPRLY_DIAG1       (uint32)(0)               
#define DIO_GETERRORINFO_O_S_K069             Cj950_GetErrorInfo(2, 15) 
#define DIO_GETERRORINFO_O_S_A009             Cj950_GetErrorInfo(3, 8)  
#define DIO_GETERRORINFO_O_S_A094             Cj950_GetErrorInfo(3, 5)  
#define DIO_GETERRORINFO_HEGO_adS2B2BiDirRi   (uint32)(0)               
#define DIO_GETERRORINFO_A_S_HFMSE2           Cj950_GetErrorInfo(1, 18) 
#define DIO_GETERRORINFO_I_S_K047             (uint32)(0)               
#define DIO_GETERRORINFO_O_S_A033             Cj950_GetErrorInfo(2, 8)  
#define DIO_GETERRORINFO_HEGO_adS2B1BiDirRi   (uint32)(0)               
#define DIO_GETERRORINFO_O_S_A004             Cj950_GetErrorInfo(3, 3)  
#define DIO_GETERRORINFO_O_S_K056             Cj950_GetErrorInfo(1, 12) 
#define DIO_GETERRORINFO_O_S_K036             Cj950_GetErrorInfo(1, 7)  
#define DIO_GETERRORINFO_I_S_A057             (uint32)(0)               
#define DIO_GETERRORINFO_O_S_K020             Cj950_GetErrorInfo(1, 6)  
#define DIO_GETERRORINFO_O_S_K055             Cj950_GetErrorInfo(1, 8)  
#define DIO_GETERRORINFO_O_S_A031             Cj950_GetErrorInfo(3, 7)  




/**
 ***************************************************************************************************
 * Resets the internal buffered error information.
 *
 * The interface routine calls a ClearErr() function of the peripheral device layer (PDL). The name
 * and the parameter for the peripheral ClearErr() function is given by the configuration. Called
 * function in PDL resets the internal buffered error information.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          none
 * \seealso         Dio_ClearErrIndirect()
 ***************************************************************************************************
 */
#define Dio_ClearErr(signal)           DIO_CLEARERR_##signal

/* Defines for Power Stage Diagnosis (Clear Error) */
#define DIO_CLEARERR_O_S_K054             Cj950_ClearErr(2, 17) 
#define DIO_CLEARERR_O_S_K038             Cj950_ClearErr(1, 10) 
#define DIO_CLEARERR_I_S_K049             do{} while(0)         
#define DIO_CLEARERR_I_S_K017             do{} while(0)         
#define DIO_CLEARERR_O_S_K039             Cj950_ClearErr(1, 13) 
#define DIO_CLEARERR_IO_D_Bidir_Cj135_Int do{} while(0)         
#define DIO_CLEARERR_O_S_A001             Cj950_ClearErr(3, 13) 
#define DIO_CLEARERR_O_S_K073             Cj950_ClearErr(2, 6)  
#define DIO_CLEARERR_O_S_A075             Cj950_ClearErr(3, 12) 
#define DIO_CLEARERR_O_S_A002             Cj950_ClearErr(3, 14) 
#define DIO_CLEARERR_CJ950_2_DISABLE      do{} while(0)         
#define DIO_CLEARERR_O_S_K059             Cj950_ClearErr(2, 18) 
#define DIO_CLEARERR_O_S_K053             Cj950_ClearErr(1, 15) 
#define DIO_CLEARERR_I_S_K014             do{} while(0)         
#define DIO_CLEARERR_O_S_A011             Cj950_ClearErr(3, 6)  
#define DIO_CLEARERR_A_S_HFMSE            Cj950_ClearErr(1, 17) 
#define DIO_CLEARERR_O_S_A025             Cj950_ClearErr(3, 11) 
#define DIO_CLEARERR_O_S_K089             Bsp742_ClearErr(1, 1) 
#define DIO_CLEARERR_KNDET_MUX_PORT       do{} while(0)         
#define DIO_CLEARERR_O_S_K072             Cj950_ClearErr(1, 5)  
#define DIO_CLEARERR_O_S_K070             Cj950_ClearErr(2, 16) 
#define DIO_CLEARERR_O_S_K019             Cj950_ClearErr(1, 16) 
#define DIO_CLEARERR_CJ950_1_DISABLE      do{} while(0)         
#define DIO_CLEARERR_I_S_K016             do{} while(0)         
#define DIO_CLEARERR_I_S_K028             do{} while(0)         
#define DIO_CLEARERR_O_S_K071             Cj950_ClearErr(2, 11) 
#define DIO_CLEARERR_O_S_K021             Cj950_ClearErr(2, 13) 
#define DIO_CLEARERR_I_S_K033             do{} while(0)         
#define DIO_CLEARERR_O_S_K012             Cj950_ClearErr(1, 14) 
#define DIO_CLEARERR_O_S_K037             Cj950_ClearErr(1, 11) 
#define DIO_CLEARERR_RST5_I_D             do{} while(0)         
#define DIO_CLEARERR_CJ950_3_DISABLE      do{} while(0)         
#define DIO_CLEARERR_PSPLPRLY_DIAG1       do{} while(0)         
#define DIO_CLEARERR_O_S_K069             Cj950_ClearErr(2, 15) 
#define DIO_CLEARERR_O_S_A009             Cj950_ClearErr(3, 8)  
#define DIO_CLEARERR_O_S_A094             Cj950_ClearErr(3, 5)  
#define DIO_CLEARERR_HEGO_adS2B2BiDirRi   do{} while(0)         
#define DIO_CLEARERR_A_S_HFMSE2           Cj950_ClearErr(1, 18) 
#define DIO_CLEARERR_I_S_K047             do{} while(0)         
#define DIO_CLEARERR_O_S_A033             Cj950_ClearErr(2, 8)  
#define DIO_CLEARERR_HEGO_adS2B1BiDirRi   do{} while(0)         
#define DIO_CLEARERR_O_S_A004             Cj950_ClearErr(3, 3)  
#define DIO_CLEARERR_O_S_K056             Cj950_ClearErr(1, 12) 
#define DIO_CLEARERR_O_S_K036             Cj950_ClearErr(1, 7)  
#define DIO_CLEARERR_I_S_A057             do{} while(0)         
#define DIO_CLEARERR_O_S_K020             Cj950_ClearErr(1, 6)  
#define DIO_CLEARERR_O_S_K055             Cj950_ClearErr(1, 8)  
#define DIO_CLEARERR_O_S_A031             Cj950_ClearErr(3, 7)  




/**
 ***************************************************************************************************
 * Sets a request for the test impulse generation.
 *
 * The execution of the request is done in back-ground by a scheduled process of the peripheral
 * device layer. If the testimpulse can be handled by the next schedule of the background process
 * the result is successful. The interface routine calls a TstImp() function of the peripheral
 * device layer. The name and the parameter for the peripheral TstImp() function is given by the
 * configuration.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Returns error information of the signal. The return value is a uint32 which is
 *                  bit coded. Not used bits are filled with 0. The caller must map out the not
 *                  used bits to be future save.
 * \seealso         Dio_TstImpIndirect()
 ***************************************************************************************************
 */
#define Dio_TstImp(signal)             DIO_TSTIMP_##signal

/* Defines for Power Stage Diagnosis (Test Impulse) */
#define DIO_TSTIMP_O_S_K054             Cj950_TstImp(2, 17) 
#define DIO_TSTIMP_O_S_K038             Cj950_TstImp(1, 10) 
#define DIO_TSTIMP_I_S_K049             (uint32)(0)         
#define DIO_TSTIMP_I_S_K017             (uint32)(0)         
#define DIO_TSTIMP_O_S_K039             Cj950_TstImp(1, 13) 
#define DIO_TSTIMP_IO_D_Bidir_Cj135_Int (uint32)(0)         
#define DIO_TSTIMP_O_S_A001             Cj950_TstImp(3, 13) 
#define DIO_TSTIMP_O_S_K073             Cj950_TstImp(2, 6)  
#define DIO_TSTIMP_O_S_A075             Cj950_TstImp(3, 12) 
#define DIO_TSTIMP_O_S_A002             Cj950_TstImp(3, 14) 
#define DIO_TSTIMP_CJ950_2_DISABLE      (uint32)(0)         
#define DIO_TSTIMP_O_S_K059             Cj950_TstImp(2, 18) 
#define DIO_TSTIMP_O_S_K053             Cj950_TstImp(1, 15) 
#define DIO_TSTIMP_I_S_K014             (uint32)(0)         
#define DIO_TSTIMP_O_S_A011             Cj950_TstImp(3, 6)  
#define DIO_TSTIMP_A_S_HFMSE            Cj950_TstImp(1, 17) 
#define DIO_TSTIMP_O_S_A025             Cj950_TstImp(3, 11) 
#define DIO_TSTIMP_O_S_K089             Bsp742_TstImp(1, 1) 
#define DIO_TSTIMP_KNDET_MUX_PORT       (uint32)(0)         
#define DIO_TSTIMP_O_S_K072             Cj950_TstImp(1, 5)  
#define DIO_TSTIMP_O_S_K070             Cj950_TstImp(2, 16) 
#define DIO_TSTIMP_O_S_K019             Cj950_TstImp(1, 16) 
#define DIO_TSTIMP_CJ950_1_DISABLE      (uint32)(0)         
#define DIO_TSTIMP_I_S_K016             (uint32)(0)         
#define DIO_TSTIMP_I_S_K028             (uint32)(0)         
#define DIO_TSTIMP_O_S_K071             Cj950_TstImp(2, 11) 
#define DIO_TSTIMP_O_S_K021             Cj950_TstImp(2, 13) 
#define DIO_TSTIMP_I_S_K033             (uint32)(0)         
#define DIO_TSTIMP_O_S_K012             Cj950_TstImp(1, 14) 
#define DIO_TSTIMP_O_S_K037             Cj950_TstImp(1, 11) 
#define DIO_TSTIMP_RST5_I_D             (uint32)(0)         
#define DIO_TSTIMP_CJ950_3_DISABLE      (uint32)(0)         
#define DIO_TSTIMP_PSPLPRLY_DIAG1       (uint32)(0)         
#define DIO_TSTIMP_O_S_K069             Cj950_TstImp(2, 15) 
#define DIO_TSTIMP_O_S_A009             Cj950_TstImp(3, 8)  
#define DIO_TSTIMP_O_S_A094             Cj950_TstImp(3, 5)  
#define DIO_TSTIMP_HEGO_adS2B2BiDirRi   (uint32)(0)         
#define DIO_TSTIMP_A_S_HFMSE2           Cj950_TstImp(1, 18) 
#define DIO_TSTIMP_I_S_K047             (uint32)(0)         
#define DIO_TSTIMP_O_S_A033             Cj950_TstImp(2, 8)  
#define DIO_TSTIMP_HEGO_adS2B1BiDirRi   (uint32)(0)         
#define DIO_TSTIMP_O_S_A004             Cj950_TstImp(3, 3)  
#define DIO_TSTIMP_O_S_K056             Cj950_TstImp(1, 12) 
#define DIO_TSTIMP_O_S_K036             Cj950_TstImp(1, 7)  
#define DIO_TSTIMP_I_S_A057             (uint32)(0)         
#define DIO_TSTIMP_O_S_K020             Cj950_TstImp(1, 6)  
#define DIO_TSTIMP_O_S_K055             Cj950_TstImp(1, 8)  
#define DIO_TSTIMP_O_S_A031             Cj950_TstImp(3, 7)  




/**
 ***************************************************************************************************
 *  Returns the FId for requesting general DIO fault information from DSM.
 *
 *  If any DIO driver detects a general (i.e. not signal-specific) fault of the DIO encapsulated
 *  by this driver, it reports this defect to DSM. There might be more than one source of
 *  possible faults for a particular DIO device perhaps resulting in more than one DFCs
 *  (diagnostic fault checks) per device. As a user of DIO functionality, however, one is usually
 *  only interested in the more general information "may I expect that the DIO that converts the
 *  signal of interest still works (no matter what the particular reason for any possible
 *  malfunction actually is) and therefore returns plausible data?". This information can be
 *  retrieved from DSM by invoking the DSM_GetDscPermission() service which expects a function
 *  identifier (FId) as an argument. The FId required for answering the DIO user's question
 *  mentioned above is returned by the Dio_GetFId() function.
 *
 *  Depending on signal-specific configuration, this task is performed either by a
 *  macro technique (which simply replaces the call to Dio_GetFId() with a call of the
 *  corresponding driver function of the device which converts this signal) or by calling the
 *  implementation as a function (Dio_GetFIdIndirect()). The latter implementation is used only
 *  if calibratable routing is selected for the corresponding signal to provide maximum code
 *  efficiency for the standard case of non-calibratable routing.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          The returned FId gathers the results of all diagnostic fault checks carried out
 *                  for the DIO which converts the selected signal.
 * \seealso         Dio_GetFIdIndirect() DSM_GetDscPermission()
 ***************************************************************************************************
 */
#define Dio_GetFId(signal)             DIO_GETFID_##signal

/* Defines for 'GetFId' function */
#define DIO_GETFID_O_S_K054             FId_InhibitNever 
#define DIO_GETFID_O_S_K038             FId_InhibitNever 
#define DIO_GETFID_I_S_K049             FId_InhibitNever 
#define DIO_GETFID_I_S_K017             FId_InhibitNever 
#define DIO_GETFID_O_S_K039             FId_InhibitNever 
#define DIO_GETFID_IO_D_Bidir_Cj135_Int FId_InhibitNever 
#define DIO_GETFID_O_S_A001             FId_InhibitNever 
#define DIO_GETFID_O_S_K073             FId_InhibitNever 
#define DIO_GETFID_O_S_A075             FId_InhibitNever 
#define DIO_GETFID_O_S_A002             FId_InhibitNever 
#define DIO_GETFID_CJ950_2_DISABLE      FId_InhibitNever 
#define DIO_GETFID_O_S_K059             FId_InhibitNever 
#define DIO_GETFID_O_S_K053             FId_InhibitNever 
#define DIO_GETFID_I_S_K014             FId_InhibitNever 
#define DIO_GETFID_O_S_A011             FId_InhibitNever 
#define DIO_GETFID_A_S_HFMSE            FId_InhibitNever 
#define DIO_GETFID_O_S_A025             FId_InhibitNever 
#define DIO_GETFID_O_S_K089             FId_InhibitNever 
#define DIO_GETFID_KNDET_MUX_PORT       FId_InhibitNever 
#define DIO_GETFID_O_S_K072             FId_InhibitNever 
#define DIO_GETFID_O_S_K070             FId_InhibitNever 
#define DIO_GETFID_O_S_K019             FId_InhibitNever 
#define DIO_GETFID_CJ950_1_DISABLE      FId_InhibitNever 
#define DIO_GETFID_I_S_K016             FId_InhibitNever 
#define DIO_GETFID_I_S_K028             FId_InhibitNever 
#define DIO_GETFID_O_S_K071             FId_InhibitNever 
#define DIO_GETFID_O_S_K021             FId_InhibitNever 
#define DIO_GETFID_I_S_K033             FId_InhibitNever 
#define DIO_GETFID_O_S_K012             FId_InhibitNever 
#define DIO_GETFID_O_S_K037             FId_InhibitNever 
#define DIO_GETFID_RST5_I_D             FId_InhibitNever 
#define DIO_GETFID_CJ950_3_DISABLE      FId_InhibitNever 
#define DIO_GETFID_PSPLPRLY_DIAG1       FId_InhibitNever 
#define DIO_GETFID_O_S_K069             FId_InhibitNever 
#define DIO_GETFID_O_S_A009             FId_InhibitNever 
#define DIO_GETFID_O_S_A094             FId_InhibitNever 
#define DIO_GETFID_HEGO_adS2B2BiDirRi   FId_InhibitNever 
#define DIO_GETFID_A_S_HFMSE2           FId_InhibitNever 
#define DIO_GETFID_I_S_K047             FId_InhibitNever 
#define DIO_GETFID_O_S_A033             FId_InhibitNever 
#define DIO_GETFID_HEGO_adS2B1BiDirRi   FId_InhibitNever 
#define DIO_GETFID_O_S_A004             FId_InhibitNever 
#define DIO_GETFID_O_S_K056             FId_InhibitNever 
#define DIO_GETFID_O_S_K036             FId_InhibitNever 
#define DIO_GETFID_I_S_A057             FId_InhibitNever 
#define DIO_GETFID_O_S_K020             FId_InhibitNever 
#define DIO_GETFID_O_S_K055             FId_InhibitNever 
#define DIO_GETFID_O_S_A031             FId_InhibitNever 




/**
 ***************************************************************************************************
 * Gets number of used port resp. chip id.
 *
 * Gets number of used port resp. chip id.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Number of used port resp. chip id. This information can be used calling PORT
 *                  services returning adress information about PORT registers.
 * \seealso         Dio_GetNumPin(), PORT_GETOUTREGADR(), PORT_GETOMRREGADR()
 ***************************************************************************************************
 */
#define Dio_GetNumPort(signal)             DIO_GETNUMPORT_##signal

/* Defines for 'GetNumPort' function */
#define DIO_GETNUMPORT_O_S_K054             2 
#define DIO_GETNUMPORT_O_S_K038             1 
#define DIO_GETNUMPORT_I_S_K049             6 
#define DIO_GETNUMPORT_I_S_K017             7 
#define DIO_GETNUMPORT_O_S_K039             1 
#define DIO_GETNUMPORT_IO_D_Bidir_Cj135_Int 4 
#define DIO_GETNUMPORT_O_S_A001             3 
#define DIO_GETNUMPORT_O_S_K073             2 
#define DIO_GETNUMPORT_O_S_A075             3 
#define DIO_GETNUMPORT_O_S_A002             3 
#define DIO_GETNUMPORT_CJ950_2_DISABLE      7 
#define DIO_GETNUMPORT_O_S_K059             2 
#define DIO_GETNUMPORT_O_S_K053             1 
#define DIO_GETNUMPORT_I_S_K014             9 
#define DIO_GETNUMPORT_O_S_A011             3 
#define DIO_GETNUMPORT_A_S_HFMSE            1 
#define DIO_GETNUMPORT_O_S_A025             3 
#define DIO_GETNUMPORT_O_S_K089             1 
#define DIO_GETNUMPORT_KNDET_MUX_PORT       7 
#define DIO_GETNUMPORT_O_S_K072             1 
#define DIO_GETNUMPORT_O_S_K070             2 
#define DIO_GETNUMPORT_O_S_K019             1 
#define DIO_GETNUMPORT_CJ950_1_DISABLE      7 
#define DIO_GETNUMPORT_I_S_K016             8 
#define DIO_GETNUMPORT_I_S_K028             8 
#define DIO_GETNUMPORT_O_S_K071             2 
#define DIO_GETNUMPORT_O_S_K021             2 
#define DIO_GETNUMPORT_I_S_K033             2 
#define DIO_GETNUMPORT_O_S_K012             1 
#define DIO_GETNUMPORT_O_S_K037             1 
#define DIO_GETNUMPORT_RST5_I_D             2 
#define DIO_GETNUMPORT_CJ950_3_DISABLE      7 
#define DIO_GETNUMPORT_PSPLPRLY_DIAG1       7 
#define DIO_GETNUMPORT_O_S_K069             2 
#define DIO_GETNUMPORT_O_S_A009             3 
#define DIO_GETNUMPORT_O_S_A094             3 
#define DIO_GETNUMPORT_HEGO_adS2B2BiDirRi   1 
#define DIO_GETNUMPORT_A_S_HFMSE2           1 
#define DIO_GETNUMPORT_I_S_K047             8 
#define DIO_GETNUMPORT_O_S_A033             2 
#define DIO_GETNUMPORT_HEGO_adS2B1BiDirRi   1 
#define DIO_GETNUMPORT_O_S_A004             3 
#define DIO_GETNUMPORT_O_S_K056             1 
#define DIO_GETNUMPORT_O_S_K036             1 
#define DIO_GETNUMPORT_I_S_A057             8 
#define DIO_GETNUMPORT_O_S_K020             1 
#define DIO_GETNUMPORT_O_S_K055             1 
#define DIO_GETNUMPORT_O_S_A031             3 




/**
 ***************************************************************************************************
 * Gets number of used pin resp. power stage.
 *
 * Gets number of used pin resp. power stage.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Number of used pin resp. power stage. This information can be used calling PORT
 *                  services returning adress information about PORT registers.
 * \seealso         Dio_GetNumPort(), PORT_GETOUTREGADR(), PORT_GETOMRREGADR()
 ***************************************************************************************************
 */
#define Dio_GetNumPin(signal)             DIO_GETNUMPIN_##signal

/* Defines for 'GetNumPin' function */
#define DIO_GETNUMPIN_O_S_K054             17 
#define DIO_GETNUMPIN_O_S_K038             10 
#define DIO_GETNUMPIN_I_S_K049             7  
#define DIO_GETNUMPIN_I_S_K017             0  
#define DIO_GETNUMPIN_O_S_K039             13 
#define DIO_GETNUMPIN_IO_D_Bidir_Cj135_Int 0  
#define DIO_GETNUMPIN_O_S_A001             13 
#define DIO_GETNUMPIN_O_S_K073             6  
#define DIO_GETNUMPIN_O_S_A075             12 
#define DIO_GETNUMPIN_O_S_A002             14 
#define DIO_GETNUMPIN_CJ950_2_DISABLE      2  
#define DIO_GETNUMPIN_O_S_K059             18 
#define DIO_GETNUMPIN_O_S_K053             15 
#define DIO_GETNUMPIN_I_S_K014             1  
#define DIO_GETNUMPIN_O_S_A011             6  
#define DIO_GETNUMPIN_A_S_HFMSE            17 
#define DIO_GETNUMPIN_O_S_A025             11 
#define DIO_GETNUMPIN_O_S_K089             1  
#define DIO_GETNUMPIN_KNDET_MUX_PORT       6  
#define DIO_GETNUMPIN_O_S_K072             5  
#define DIO_GETNUMPIN_O_S_K070             16 
#define DIO_GETNUMPIN_O_S_K019             16 
#define DIO_GETNUMPIN_CJ950_1_DISABLE      1  
#define DIO_GETNUMPIN_I_S_K016             1  
#define DIO_GETNUMPIN_I_S_K028             3  
#define DIO_GETNUMPIN_O_S_K071             11 
#define DIO_GETNUMPIN_O_S_K021             13 
#define DIO_GETNUMPIN_I_S_K033             9  
#define DIO_GETNUMPIN_O_S_K012             14 
#define DIO_GETNUMPIN_O_S_K037             11 
#define DIO_GETNUMPIN_RST5_I_D             15 
#define DIO_GETNUMPIN_CJ950_3_DISABLE      3  
#define DIO_GETNUMPIN_PSPLPRLY_DIAG1       4  
#define DIO_GETNUMPIN_O_S_K069             15 
#define DIO_GETNUMPIN_O_S_A009             8  
#define DIO_GETNUMPIN_O_S_A094             5  
#define DIO_GETNUMPIN_HEGO_adS2B2BiDirRi   2  
#define DIO_GETNUMPIN_A_S_HFMSE2           18 
#define DIO_GETNUMPIN_I_S_K047             2  
#define DIO_GETNUMPIN_O_S_A033             8  
#define DIO_GETNUMPIN_HEGO_adS2B1BiDirRi   1  
#define DIO_GETNUMPIN_O_S_A004             3  
#define DIO_GETNUMPIN_O_S_K056             12 
#define DIO_GETNUMPIN_O_S_K036             7  
#define DIO_GETNUMPIN_I_S_A057             0  
#define DIO_GETNUMPIN_O_S_K020             6  
#define DIO_GETNUMPIN_O_S_K055             8  
#define DIO_GETNUMPIN_O_S_A031             7  




/**
 ***************************************************************************************************
 * Gets location info for every single signal.
 *
 * Gets location info for every single signal.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Location info.
 ***************************************************************************************************
 */

/* Defines for MasterSlave */
#define O_S_K054_MSLOC             ANY 
#define O_S_K038_MSLOC             ANY 
#define I_S_K049_MSLOC             ANY 
#define I_S_K017_MSLOC             ANY 
#define O_S_K039_MSLOC             ANY 
#define IO_D_Bidir_Cj135_Int_MSLOC ANY 
#define O_S_A001_MSLOC             ANY 
#define O_S_K073_MSLOC             ANY 
#define O_S_A075_MSLOC             ANY 
#define O_S_A002_MSLOC             ANY 
#define CJ950_2_DISABLE_MSLOC      ANY 
#define O_S_K059_MSLOC             ANY 
#define O_S_K053_MSLOC             ANY 
#define I_S_K014_MSLOC             ANY 
#define O_S_A011_MSLOC             ANY 
#define A_S_HFMSE_MSLOC            ANY 
#define O_S_A025_MSLOC             ANY 
#define O_S_K089_MSLOC             ANY 
#define KNDET_MUX_PORT_MSLOC       ANY 
#define O_S_K072_MSLOC             ANY 
#define O_S_K070_MSLOC             ANY 
#define O_S_K019_MSLOC             ANY 
#define CJ950_1_DISABLE_MSLOC      ANY 
#define I_S_K016_MSLOC             ANY 
#define I_S_K028_MSLOC             ANY 
#define O_S_K071_MSLOC             ANY 
#define O_S_K021_MSLOC             ANY 
#define I_S_K033_MSLOC             ANY 
#define O_S_K012_MSLOC             ANY 
#define O_S_K037_MSLOC             ANY 
#define RST5_I_D_MSLOC             ANY 
#define CJ950_3_DISABLE_MSLOC      ANY 
#define PSPLPRLY_DIAG1_MSLOC       ANY 
#define O_S_K069_MSLOC             ANY 
#define O_S_A009_MSLOC             ANY 
#define O_S_A094_MSLOC             ANY 
#define HEGO_adS2B2BiDirRi_MSLOC   ANY 
#define A_S_HFMSE2_MSLOC           ANY 
#define I_S_K047_MSLOC             ANY 
#define O_S_A033_MSLOC             ANY 
#define HEGO_adS2B1BiDirRi_MSLOC   ANY 
#define O_S_A004_MSLOC             ANY 
#define O_S_K056_MSLOC             ANY 
#define O_S_K036_MSLOC             ANY 
#define I_S_A057_MSLOC             ANY 
#define O_S_K020_MSLOC             ANY 
#define O_S_K055_MSLOC             ANY 
#define O_S_A031_MSLOC             ANY 



/**
 ***************************************************************************************************
 * Sets a request for the OL diagnostic Switch OFF interface.
 *
 * The execution of the request is done in back-ground by a scheduled process of the peripheral
 * device layer. If the OL diagnostic Switch OFF interface can be handled by the next schedule of 
 * the background process the result is successful. The interface routine calls a <moduel>_Diag_OLcurr_SwOff() 
 * function  of the peripheral device layer. The name and the parameter for the peripheral Dio_OLcurr_SwOff() 
 * function is given by the configuration.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Returns information of the signal. The return value is a uint8 which is
 *                  bit coded. 
 *                                   0x00   - Request implemented successfully 
 *                                   0x01   - Request failed due to communication error 
 *                                   0x02   - This feature is not supported for the power stage requested. 
 * \seealso         Dio_OLcurr_SwOffIndirect()
 ***************************************************************************************************
 */
#define Dio_OLcurr_SwOff(signal)             DIO_OLCURRSWOFF_##signal 

/* Defines for Power Stage Diagnosis (SwitchOLDiag Off) */
#define DIO_OLCURRSWOFF_O_S_K054             Cj950_Diag_OLcurr_SwOff(2, 17) 
#define DIO_OLCURRSWOFF_O_S_K038             Cj950_Diag_OLcurr_SwOff(1, 10) 
#define DIO_OLCURRSWOFF_I_S_K049             (uint8)(2)                     
#define DIO_OLCURRSWOFF_I_S_K017             (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_K039             Cj950_Diag_OLcurr_SwOff(1, 13) 
#define DIO_OLCURRSWOFF_IO_D_Bidir_Cj135_Int (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_A001             Cj950_Diag_OLcurr_SwOff(3, 13) 
#define DIO_OLCURRSWOFF_O_S_K073             Cj950_Diag_OLcurr_SwOff(2, 6)  
#define DIO_OLCURRSWOFF_O_S_A075             Cj950_Diag_OLcurr_SwOff(3, 12) 
#define DIO_OLCURRSWOFF_O_S_A002             Cj950_Diag_OLcurr_SwOff(3, 14) 
#define DIO_OLCURRSWOFF_CJ950_2_DISABLE      (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_K059             Cj950_Diag_OLcurr_SwOff(2, 18) 
#define DIO_OLCURRSWOFF_O_S_K053             Cj950_Diag_OLcurr_SwOff(1, 15) 
#define DIO_OLCURRSWOFF_I_S_K014             (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_A011             Cj950_Diag_OLcurr_SwOff(3, 6)  
#define DIO_OLCURRSWOFF_A_S_HFMSE            Cj950_Diag_OLcurr_SwOff(1, 17) 
#define DIO_OLCURRSWOFF_O_S_A025             Cj950_Diag_OLcurr_SwOff(3, 11) 
#define DIO_OLCURRSWOFF_O_S_K089             (uint8)(2)                     
#define DIO_OLCURRSWOFF_KNDET_MUX_PORT       (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_K072             Cj950_Diag_OLcurr_SwOff(1, 5)  
#define DIO_OLCURRSWOFF_O_S_K070             Cj950_Diag_OLcurr_SwOff(2, 16) 
#define DIO_OLCURRSWOFF_O_S_K019             Cj950_Diag_OLcurr_SwOff(1, 16) 
#define DIO_OLCURRSWOFF_CJ950_1_DISABLE      (uint8)(2)                     
#define DIO_OLCURRSWOFF_I_S_K016             (uint8)(2)                     
#define DIO_OLCURRSWOFF_I_S_K028             (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_K071             Cj950_Diag_OLcurr_SwOff(2, 11) 
#define DIO_OLCURRSWOFF_O_S_K021             Cj950_Diag_OLcurr_SwOff(2, 13) 
#define DIO_OLCURRSWOFF_I_S_K033             (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_K012             Cj950_Diag_OLcurr_SwOff(1, 14) 
#define DIO_OLCURRSWOFF_O_S_K037             Cj950_Diag_OLcurr_SwOff(1, 11) 
#define DIO_OLCURRSWOFF_RST5_I_D             (uint8)(2)                     
#define DIO_OLCURRSWOFF_CJ950_3_DISABLE      (uint8)(2)                     
#define DIO_OLCURRSWOFF_PSPLPRLY_DIAG1       (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_K069             Cj950_Diag_OLcurr_SwOff(2, 15) 
#define DIO_OLCURRSWOFF_O_S_A009             Cj950_Diag_OLcurr_SwOff(3, 8)  
#define DIO_OLCURRSWOFF_O_S_A094             Cj950_Diag_OLcurr_SwOff(3, 5)  
#define DIO_OLCURRSWOFF_HEGO_adS2B2BiDirRi   (uint8)(2)                     
#define DIO_OLCURRSWOFF_A_S_HFMSE2           Cj950_Diag_OLcurr_SwOff(1, 18) 
#define DIO_OLCURRSWOFF_I_S_K047             (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_A033             Cj950_Diag_OLcurr_SwOff(2, 8)  
#define DIO_OLCURRSWOFF_HEGO_adS2B1BiDirRi   (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_A004             Cj950_Diag_OLcurr_SwOff(3, 3)  
#define DIO_OLCURRSWOFF_O_S_K056             Cj950_Diag_OLcurr_SwOff(1, 12) 
#define DIO_OLCURRSWOFF_O_S_K036             Cj950_Diag_OLcurr_SwOff(1, 7)  
#define DIO_OLCURRSWOFF_I_S_A057             (uint8)(2)                     
#define DIO_OLCURRSWOFF_O_S_K020             Cj950_Diag_OLcurr_SwOff(1, 6)  
#define DIO_OLCURRSWOFF_O_S_K055             Cj950_Diag_OLcurr_SwOff(1, 8)  
#define DIO_OLCURRSWOFF_O_S_A031             Cj950_Diag_OLcurr_SwOff(3, 7)  




/**
 ***************************************************************************************************
 * Sets a request for the OL diagnostic Switch ON interface.
 *
 * The execution of the request is done in back-ground by a scheduled process of the peripheral
 * device layer. If the OL diagnostic Switch OFF interface can be handled by the next schedule of 
 * the background process the result is successful. The interface routine calls a <module>_Diag_OLcurr_SwOn() 
 * function of the peripheral device layer. The name and the parameter for the peripheral Dio_OLcurr_SwOn()
 *  function  is given by the configuration.
 *
 * \param           signal    Name of signal used for text expansion and routing
 * \return          Returns  information of the signal. The return value is a uint8 which is
 *                  bit coded. 
 *                                   0x00   - Request implemented successfully 
 *                                   0x01   - Request failed due to communication error 
 *                                   0x02   - This feature is not supported for the power stage requested. 
 *									
 *                  used bits to be future save.
 * \seealso         Dio_OLcurr_SwOnIndirect()
 ***************************************************************************************************
 */
#define Dio_OLcurr_SwOn(signal)             DIO_OLCURRSWON_##signal

/* Defines for Power Stage Diagnosis (SwitchOLDiag On) */
#define DIO_OLCURRSWON_O_S_K054             Cj950_Diag_OLcurr_SwOn(2, 17) 
#define DIO_OLCURRSWON_O_S_K038             Cj950_Diag_OLcurr_SwOn(1, 10) 
#define DIO_OLCURRSWON_I_S_K049             (uint8)(2)                    
#define DIO_OLCURRSWON_I_S_K017             (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_K039             Cj950_Diag_OLcurr_SwOn(1, 13) 
#define DIO_OLCURRSWON_IO_D_Bidir_Cj135_Int (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_A001             Cj950_Diag_OLcurr_SwOn(3, 13) 
#define DIO_OLCURRSWON_O_S_K073             Cj950_Diag_OLcurr_SwOn(2, 6)  
#define DIO_OLCURRSWON_O_S_A075             Cj950_Diag_OLcurr_SwOn(3, 12) 
#define DIO_OLCURRSWON_O_S_A002             Cj950_Diag_OLcurr_SwOn(3, 14) 
#define DIO_OLCURRSWON_CJ950_2_DISABLE      (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_K059             Cj950_Diag_OLcurr_SwOn(2, 18) 
#define DIO_OLCURRSWON_O_S_K053             Cj950_Diag_OLcurr_SwOn(1, 15) 
#define DIO_OLCURRSWON_I_S_K014             (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_A011             Cj950_Diag_OLcurr_SwOn(3, 6)  
#define DIO_OLCURRSWON_A_S_HFMSE            Cj950_Diag_OLcurr_SwOn(1, 17) 
#define DIO_OLCURRSWON_O_S_A025             Cj950_Diag_OLcurr_SwOn(3, 11) 
#define DIO_OLCURRSWON_O_S_K089             (uint8)(2)                    
#define DIO_OLCURRSWON_KNDET_MUX_PORT       (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_K072             Cj950_Diag_OLcurr_SwOn(1, 5)  
#define DIO_OLCURRSWON_O_S_K070             Cj950_Diag_OLcurr_SwOn(2, 16) 
#define DIO_OLCURRSWON_O_S_K019             Cj950_Diag_OLcurr_SwOn(1, 16) 
#define DIO_OLCURRSWON_CJ950_1_DISABLE      (uint8)(2)                    
#define DIO_OLCURRSWON_I_S_K016             (uint8)(2)                    
#define DIO_OLCURRSWON_I_S_K028             (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_K071             Cj950_Diag_OLcurr_SwOn(2, 11) 
#define DIO_OLCURRSWON_O_S_K021             Cj950_Diag_OLcurr_SwOn(2, 13) 
#define DIO_OLCURRSWON_I_S_K033             (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_K012             Cj950_Diag_OLcurr_SwOn(1, 14) 
#define DIO_OLCURRSWON_O_S_K037             Cj950_Diag_OLcurr_SwOn(1, 11) 
#define DIO_OLCURRSWON_RST5_I_D             (uint8)(2)                    
#define DIO_OLCURRSWON_CJ950_3_DISABLE      (uint8)(2)                    
#define DIO_OLCURRSWON_PSPLPRLY_DIAG1       (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_K069             Cj950_Diag_OLcurr_SwOn(2, 15) 
#define DIO_OLCURRSWON_O_S_A009             Cj950_Diag_OLcurr_SwOn(3, 8)  
#define DIO_OLCURRSWON_O_S_A094             Cj950_Diag_OLcurr_SwOn(3, 5)  
#define DIO_OLCURRSWON_HEGO_adS2B2BiDirRi   (uint8)(2)                    
#define DIO_OLCURRSWON_A_S_HFMSE2           Cj950_Diag_OLcurr_SwOn(1, 18) 
#define DIO_OLCURRSWON_I_S_K047             (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_A033             Cj950_Diag_OLcurr_SwOn(2, 8)  
#define DIO_OLCURRSWON_HEGO_adS2B1BiDirRi   (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_A004             Cj950_Diag_OLcurr_SwOn(3, 3)  
#define DIO_OLCURRSWON_O_S_K056             Cj950_Diag_OLcurr_SwOn(1, 12) 
#define DIO_OLCURRSWON_O_S_K036             Cj950_Diag_OLcurr_SwOn(1, 7)  
#define DIO_OLCURRSWON_I_S_A057             (uint8)(2)                    
#define DIO_OLCURRSWON_O_S_K020             Cj950_Diag_OLcurr_SwOn(1, 6)  
#define DIO_OLCURRSWON_O_S_K055             Cj950_Diag_OLcurr_SwOn(1, 8)  
#define DIO_OLCURRSWON_O_S_A031             Cj950_Diag_OLcurr_SwOn(3, 7)  







/* _LIBRARYABILITY_H */
#endif

/* _DIO_AUTO_CONF_H */
#endif
