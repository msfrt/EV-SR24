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
 * $Filename__:fee_tprot.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:initial version (migrated from CC)$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:fee_tprot$ 
 * $Variant___:1.0.0$ 
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
 * 1.0.0; 0     25.06.2010 JWI2SI
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef FEE_TPROT_H_
#define FEE_TPROT_H_

/* this is a special Eep-Version for the TPROT module which is only able to read the 2 
   TprotBlocks remove this define for "normal" Fee-Deliveries */
//#define FEE_USED_FOR_TPROT  1   

#ifdef FEE_USED_FOR_TPROT
#define FEE_TPROT_NUM_SECTORS   2   /* number of sectors */
#define FEE_PAGE_USERDATA_LEN   122 /* number of user bytes in a page */

/* provided by TProt?*/
typedef struct
{
    uint32        adSect_au32[FEE_TPROT_NUM_SECTORS];
    uint32        adSectSize_u32;
} Eeptprot_Cfg_t;

/* required to interprete page content */

#define FEE_TPROT_PAGESIZE               128ul
typedef struct {
    uint16  FeeBlockID;
    uint16  PageCtr;
    uint8   xData[FEE_PAGE_USERDATA_LEN];
    uint16  xFeePgeCrc;
} Fee_PageBuffer_t;

/* required for CRC algorithm */
#define CHAR_BIT	            8
#define POLYTOPBITMASK_16       ((uint16)(1u<<(16-1)))
#define POLYNOMIAL              0x1021u
#define REFPOLYNOMIAL           0xEDB88320uL
#define CRC_XOR_VALUE32         0xFFFFFFFFuL

extern void Fee_TprotReadCertificate (Eeptprot_Cfg_t*, uint8*);
extern uint16 Crc_CalculateCRC16(uint8*, uint32, uint16);
#endif
#endif //FEE_TPROT_H_
