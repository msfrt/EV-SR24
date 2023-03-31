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
 * $Filename__:ignclpsdd_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:ignclpsdd_priv$ 
 * $Variant___:1.3.0$ 
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
 * 1.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef IGNCLPSDD_PRIV_H
#define IGNCLPSDD_PRIV_H

#include "spi.h"
/* Debug switch to be removed */
//#define IGNCLPSDD_DEBUG
/* definitions used common to both the Devices */
#define IGNCLPS_SPI_ERROR_MSK 0x3E00
#define IGNCLPS_SPI_VAL_OK 0x2A00

/* Mask for identification number */
#define IGNCLPS_IDENT_MSK 0xFF

/**************************************************************************************************/
/* Variable definitions for CK240																  */
/**************************************************************************************************/

/* SPI Bus sequence definitions */
#if (defined (SY_CK240) && (SY_CK240 > 0))

  /* Shift values for diagnosis register */
    #define CK240_CHx_SHIFT    0x02

  /* Number of Read commands in the sequence definition */
	#define IGNCLPS_RD_DIAG_SEQ_LEN 3

  /* Static variable for SPI sequence status */
     static Spi_SeqSt_t IgnClPs_stDiagSeq[SY_CK240];

  /* Storage for time stamp */
     static uint32 IgnClPs_tiStamp_u32[SY_CK240];

  /* Tx Buffer Diagnosis Sequence of SPI commands */
     static SPI_TXFLASH_16_BIT IgnClPs_diagSeqTxBuf_au16[SY_CK240][IGNCLPS_RD_DIAG_SEQ_LEN]=
     {

        {
            0x4100,  /* RD_IDENT */
            0x4700,  /* Read Revision*/
            0x4D00   /* Read failure condition from DIAG_REG */
        }
        #if (SY_CK240 > 1)
       ,{
            0x4100,  /* RD_IDENT */
            0x4700,  /* Read Revision*/
            0x4D00   /* Read failure condition from DIAG_REG */
        }
        #endif
     };
   /* Rx Buffer Diagnosis Sequence of SPI commands */
      static       SPI_RXRAM_16_BIT IgnClPs_diagSeqRxBuf_au16[SY_CK240][IGNCLPS_RD_DIAG_SEQ_LEN];

      const Spi_SeqDef_t IgnClPs_DiagSeqDef_cs[SY_CK240]=
       {
          {
            IGNCLPS_DIAGSEQ_1_DEF_CS_SEQ_DEF
          }
          #if (SY_CK240 > 1)
        ,{
            IGNCLPS_DIAGSEQ_2_DEF_CS_SEQ_DEF
         }
         #endif
       };

 #endif /*ifdef SY_CK240 */


/**************************************************************************************************/
/* Variable definitions for CK200																  */
/**************************************************************************************************/


#if(  defined(SY_CK200) && (SY_CK200>0))

/* Init register bits */


/*configure initialization data*/

  /* SPI commands */
	#define CK200_RD_IDENT 0x4700
	#define CK200_RD_DIAG  0x4D00
	#define CK200_RD_INIT  0x4B00

/*init data to be evaluated*/
	#define CK200_WR_INIT  0x4A01		/*SPI command code + hardware reset bit set*/
	#define CK200_DEFAULT_INIT 0xDA13

	#define CK200_WR_CLOCK 0x7600
	#define CK200_DEFAULT_CLOCK 0x0020

	#define CK200_DUMMY_TRANSMIT 0x0000

  /* Shift values for diagnosis register */
    #define CK200_CHx_SHIFT    0x04
/**************************************************************************************************/
/* SPI Sequence definitions groups for CK200											  */
/* GROUP 1 : SPI Sequence Definition for RD_IDENT										  */
/* GROUP 2 : SPI Sequence Definition for RD_DIAG										  */
/* GROUP 3 : SPI Sequence Definition for WR_INIT/RD_INIT or for RD_INIT/RD_INIT			  */
/* GROUP 4 : SPI Sequence Definition for WR_CLOCK 										  */
/* GROUP 5 : SPI Sequence Definition for WR_SWRST										  */
/**************************************************************************************************/

/**************************************************************************************************/
/* GROUP 1 : SPI Sequence Definition for RD_IDENT										  */
/**************************************************************************************************/

  /* Static variable for SPI sequence status */
     static Spi_SeqSt_t IgnClPs_stIdentSeq[SY_CK200];

  /* Storage for time stamp */
     static uint32 IgnClPs_tiIdentStamp_u32[SY_CK200];

  /* Tx Buffer for transmitting Read Ident register command */
     static SPI_TXFLASH_16_BIT IgnClPs_IdentSeqTxBuf_au16[SY_CK200][IGNCLPS_IDENTSEQDEF_CS_0_0_SEQ_LEN]=
     {
	    {
            CK200_RD_IDENT,  /* RD_IDENT */
            CK200_DUMMY_TRANSMIT  /* */
        }
        #if (SY_CK200 > 1)
       ,{
            CK200_RD_IDENT,  /* RD_IDENT */
            CK200_DUMMY_TRANSMIT  /* */
        }
        #endif
     };

   /* Rx Buffer for receiving Ident register contents(RD_IDENT response) */
      static       SPI_RXRAM_16_BIT IgnClPs_IdentSeqRxBuf_au16[SY_CK200][IGNCLPS_IDENTSEQDEF_CS_0_0_SEQ_LEN];

      const Spi_SeqDef_t IgnClPs_IdentSeqDef_cs[SY_CK200][1]=
       {
	      {
		   { IGNCLPS_IDENTSEQDEF_CS_0_0_SEQ_DEF }
		  }
		#if( SY_CK200>1)
		  ,{
		     { IGNCLPS_IDENTSEQDEF_CS_1_0_SEQ_DEF }
		   }
		#endif
	   };


/**************************************************************************************************/
/* GROUP 2 : SPI Sequence Definition for RD_DIAG										  */
/**************************************************************************************************/

  /* Static variable for SPI sequence status */
     static Spi_SeqSt_t IgnClPs_stDiagSeq[SY_CK200];

  /* Storage for time stamp */
     static uint32 IgnClPs_tiDiagStamp_u32[SY_CK200];


  /* Tx Buffer for transmitting Read Diag register command */

     static SPI_TXFLASH_16_BIT IgnClPs_DiagSeqTxBuf_au16[SY_CK200][IGNCLPS_DIAGSEQDEF_CS_0_0_SEQ_LEN]=
     {

        {
            CK200_RD_DIAG,  /* RD_DIAG */
            CK200_DUMMY_TRANSMIT  /* */
        }
        #if (SY_CK200 > 1)
       ,{
            CK200_RD_DIAG,  /* RD_DIAG */
            CK200_DUMMY_TRANSMIT  /* */
        }
        #endif
     };


   /* Rx Buffer for receiving Diag register contents(RD_DIAG response) */
      static    SPI_RXRAM_16_BIT IgnClPs_DiagSeqRxBuf_au16[SY_CK200][IGNCLPS_DIAGSEQDEF_CS_0_0_SEQ_LEN];

      const Spi_SeqDef_t IgnClPs_DiagSeqDef_cs[SY_CK200][1]=
       {
	      {
		   { IGNCLPS_DIAGSEQDEF_CS_0_0_SEQ_DEF }
		  }
		#if( SY_CK200>1)
		  ,{
		     { IGNCLPS_DIAGSEQDEF_CS_1_0_SEQ_DEF }
		   }
		#endif
	   };

/**************************************************************************************************/
/* GROUP 2 : SPI Sequence Definition for WR_INIT/RD_INIT or for RD_INIT/RD_INIT				      */
/**************************************************************************************************/
  /* Tx Buffer for transmitting Read Init/Write Init register command */
  /* ATTENTION : The contents of the INIT register can be changed by calibration
     when using the WR_INIT SPI commands. Hence the following Tramsnit Buffer has to be located
     in RAM and not in FLASH !!!!! */

  /* Static variable for SPI sequence status */
     static Spi_SeqSt_t IgnClPs_stInitSeq[SY_CK200];

  /* Storage for time stamp */
     static uint32 IgnClPs_tiInitStamp_u32[SY_CK200];

	 static SPI_TXRAM_16_BIT IgnClPs_WrInitSeqTxBuf_au16[SY_CK200][IGNCLPS_INITSEQDEF_CS_0_0_SEQ_LEN]=
     {

        {
            CK200_WR_INIT,  /* WR_INIT */
            CK200_DEFAULT_INIT  /* */
        }
        #if (SY_CK200 > 1)
       ,{
            CK200_WR_INIT,  /* WR_INIT */
            CK200_DEFAULT_INIT  /* */
        }
        #endif
     };

  /* Tx Buffer for transmitting Read Init register command */
	 static SPI_TXRAM_16_BIT IgnClPs_RdInitSeqTxBuf_au16[SY_CK200][IGNCLPS_INITSEQDEF_CS_0_0_SEQ_LEN]=
     {

        {
            CK200_RD_INIT,  /* RD_INIT */
            CK200_DUMMY_TRANSMIT  /* */
        }
        #if (SY_CK200 > 1)
       ,{
            CK200_RD_INIT,  /* RD_INIT */
            CK200_DUMMY_TRANSMIT  /* */
        }
        #endif
     };

   /* Rx Buffer for receiving Write Init (WR_INIT) response */
         static    SPI_RXRAM_16_BIT IgnClPs_WrInitSeqRxBuf_au16[SY_CK200][IGNCLPS_INITSEQDEF_CS_0_0_SEQ_LEN];

   /* Rx Buffer for receiving init register contents (RD_INIT response) */
         static    SPI_RXRAM_16_BIT IgnClPs_RdInitSeqRxBuf_au16[SY_CK200][IGNCLPS_INITSEQDEF_CS_0_0_SEQ_LEN];


      const Spi_SeqDef_t IgnClPs_InitSeqDef_cs[SY_CK200][2]=
       {
		   {
 		    { IGNCLPS_INITSEQDEF_CS_0_0_SEQ_DEF },
          	{ IGNCLPS_INITSEQDEF_CS_0_1_SEQ_DEF }
		   }
		#if( SY_CK200>1)
		   ,{
 		     { IGNCLPS_INITSEQDEF_CS_1_0_SEQ_DEF },
          	 { IGNCLPS_INITSEQDEF_CS_1_1_SEQ_DEF }
          	}
		#endif
	    };

/**************************************************************************************************/
/* GROUP 3 : SPI Sequence Definition for WR_CLOCK											      */
/**************************************************************************************************/
  /* Static variable for SPI sequence status */
     static Spi_SeqSt_t IgnClPs_stClkSeq[SY_CK200];

  /* Storage for time stamp */
     static uint32 IgnClPs_tiClkStamp_u32[SY_CK200];

	 static SPI_TXRAM_16_BIT IgnClPs_SetClkSeqTxBuf_au16[SY_CK200][IGNCLPS_SETCLKSEQDEF_CS_0_0_SEQ_LEN]=
     {

        {
            CK200_WR_CLOCK,  /* WR_CLOCK */
            CK200_DEFAULT_CLOCK  /* */
        }
        #if (SY_CK200 > 1)
       ,{
            CK200_WR_CLOCK,  /* WR_CLOCK */
            CK200_DEFAULT_CLOCK  /* */
        }
        #endif
     };

   /* Rx Buffer for Setting Clock Register */
      static    SPI_RXRAM_16_BIT IgnClPs_SetClkSeqRxBuf_au16[SY_CK200][IGNCLPS_SETCLKSEQDEF_CS_0_0_SEQ_LEN];

      const Spi_SeqDef_t IgnClPs_SetClkSeqDef_cs[SY_CK200][1]=
       {
		  {
		   { IGNCLPS_SETCLKSEQDEF_CS_0_0_SEQ_DEF }
          }
		#if( SY_CK200>1)
		 ,{
		   { IGNCLPS_SETCLKSEQDEF_CS_1_0_SEQ_DEF }
          }
		#endif
	   };
#ifdef IGNCLPSDD_DEBUG
/**************************************************************************************************/
/* GROUP 4 : SPI Sequence Definition for SW_SRESET											      */
/**************************************************************************************************/
  /* Static variable for SPI sequence status */
     static Spi_SeqSt_t IgnClPs_stResetSeq[SY_CK200];

  /* Storage for time stamp */
     static uint32 IgnClPs_tiResetStamp_u32[SY_CK200];

	 static SPI_TXRAM_16_BIT IgnClPs_ResetSeqTxBuf_au16[SY_CK200][IGNCLPS_RESETSEQDEF_CS_0_0_SEQ_LEN]=
     {

        {
            0x7A02,  /* WR_SRESET */
            0x9655  /* */
        }
        #if (SY_CK200 > 1)
       ,{
            0x7A02,  /* WR_SRESET */
            0x9655  /* */
        }
        #endif
     };

   /* Rx Buffer for Setting Clock Register */
      static    SPI_RXRAM_16_BIT IgnClPs_ResetSeqRxBuf_au16[SY_CK200][IGNCLPS_RESETSEQDEF_CS_0_0_SEQ_LEN];

      const Spi_SeqDef_t IgnClPs_ResetSeqDef_cs[SY_CK200][1]=
       {
		  {
		   { IGNCLPS_RESETSEQDEF_CS_0_0_SEQ_DEF }
          }
		#if( SY_CK200>1)
		 ,{
		   { IGNCLPS_RESETSEQDEF_CS_1_0_SEQ_DEF }
          }
		#endif
	   };
 #endif

 #endif /*ifdef SY_CK200 */

#endif /* #ifndef IGNCLPSDD_PRIV_H */
