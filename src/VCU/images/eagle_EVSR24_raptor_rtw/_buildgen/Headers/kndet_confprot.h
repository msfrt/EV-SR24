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
 * $Filename__:kndet_confprot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:central protected header for KnDet$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KHC2ST$ 
 * $Date______:17.03.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:kndet_confprot$ 
 * $Variant___:2.5.0$ 
 * $Revision__:3$ 
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
 * 2.5.0; 3     17.03.2011 KHC2ST
 *   warning removed
 * 
 * 2.5.0; 2     04.03.2011 KHC2ST
 *   warnings removed
 * 
 * 2.5.0; 1     02.03.2011 KHC2ST
 *   changes after code review
 * 
 * 2.5.0; 0     22.02.2011 KHC2ST
 *   support of external multiplexer
 * 
 * 2.4.0; 0     24.08.2010 KHC2ST
 *   further developement new configuration concept and interfaces
 * 
 * 2.3.0; 0     03.03.2010 KHC2ST
 *   new configuration concept
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   a
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef KNDET_CONFPROT_H                             /* protect multiple includes              */
#define KNDET_CONFPROT_H


#if (KNDET_CELL_GPTA != 0)
    #error >>>>> GPTA1 cannot be used for knock control, only GPTA0 is possible
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *                      {!Description MUST start in this line - replace text inclusive brackets!}
 *
 ***************************************************************************************************
 */

/***************************************************************************************************/
									  /*  Address configuration */
/***************************************************************************************************/


#define FADC_BASE      &FADC
#define DMA_BASE  	   &DMA
#define GPTA0_BASE     &GPTA0

/***************************************************************************************************/
									  /*  Address configuration */
/***************************************************************************************************/

/***************************************************************************************************/
									  /*  FADC configuration */
/***************************************************************************************************/



#define  FADC_ADDLFCR0             0x3				  // Addition length for filter	0
#define  FADC_ADDLFCR1             0x3				  // Addition length for filter	1
#define  FADC_MAVLFCR0             0x3				  // Moving Average length for filter 0
#define  FADC_MAVLFCR1             0x0				  // Moving Average length for filter	1




//hidden configuration data (not to be set by normal user):
//---------------------------------------------------------

/* reset filter 0
 arg 1  : reset contents of filter 0 to zero for next measure gate
 arg 0  : contents of filter not changed */
#define RSTF0_GCR 0

/* reset filter 1
arg 1  : reset contents of filter 1 to zero for next measure gate
arg 0  : contents of filter not changed */
#define RSTF1_GCR 0






/***************************************************************************************************/
									  /*  FADC configuration End */
/***************************************************************************************************/



/***************************************************************************************************/
									  /*  DMA and ERU configuration */
/***************************************************************************************************/
/* Circular buffer configuration for DMA - For Signal Evaluation*/
#define     SIGEVALMEMCONF       0x9				         /* Ciruclar Buffer(for FADC data) length for DMA configuration*/


#define  DMATIMEOUT_FPITTICKS    4		   /* timeout in terms of  number of FPI ticks for DMA channel reset*/



/**number of DMA transfers of FADC data for Teilblock processing. Must fit to circ buffer length!
 number of transfers (here 1 transfer := 1 move := 16bit), e.g. 117moves á 16bit = 234byte
*/

#define KNDET_TREL_CHCR 85


			
/**for resetting an interrupted FADC data transaction:
// similar for error status register and clear error register
*/

#ifndef DMA_CHCR_PRSEL_POS

#define DMA_CHCR_PRSEL_POS       DMA_CHCR00_PRSEL_POS
#define DMA_CHCR_CHMODE_POS      DMA_CHCR00_CHMODE_POS
#define DMA_CHCR_CHDW_POS        DMA_CHCR00_CHDW_POS
#define DMA_CHCR_CHPRIO_POS      DMA_CHCR00_CHPRIO_POS
#define DMA_CHCR_DMAPRIO_POS     DMA_CHCR00_DMAPRIO_POS
#define DMA_CHCR_TREL_POS        DMA_CHCR00_TREL_POS
#define DMA_ADRCR_INCD_POS       DMA_ADRCR00_INCD_POS
#define DMA_ADRCR_CBLD_POS       DMA_ADRCR00_CBLD_POS
#define DMA_CHICR_INTCT_POS      DMA_CHICR00_INTCT_POS
#define DMA_CHICR_INTP_POS       DMA_CHICR00_INTP_POS
#define DMA_CHICR_IRDV_POS       DMA_CHICR00_IRDV_POS
#endif




/***************************************************************************************************/
									  /*  Measurment window data */
/***************************************************************************************************/
/* Threshold for Measurement window monitor */

#define KNDET_PLAUS_THRESH 3  /*plausibility threshold of number of monitor function processed
                              within time task without MFInthandler having been processed.*/


/*
//Summary of elsewhere made settings to BE AWARE of:
//(For reasons of lean handling not everything is made configurable; emphasis was put on being
//able to distinguish METIS-Platform and LedaLight-PRINCE projects. Thus some settings are hard
//coded and summarized here.)
//===============================================================================================
// 1) PORTS:
//    ------
//    see xml configuration within Core domain:
//    for METIS only P4.x ports allowed according to Port distribution by CarPU:D.Thoss
//    for LedaLight also see port table by CarPU:D.Thoss
//
// 2) GPTA:
//    -----
//    GTCs: see xml configuration within Core domain: only timer group 3 (and according ports)
//          allowed according to port distribution by CarPU:D.Thoss.
//
// 3) Operating System (OS):
//    ----------------------
//    the interrupt tasks, which are requested within xml (Core domain) are >>>not enabled<<<
//    by OS! Thus this is done (so far) within the LLD init driver. For DMA the service request
//    nodes are channel independent and thus hard coded within the LLD init driver according to
//    the controller specific distribution list as documented in intranet:
//    platform -> core -> hwe -> dma !
//
//
// 5) DMA:
//    ----
//    request input SELECTION value hard coded according to table "DMA Request Assignment" of controller
//    manual (same for all known projects; although different request input NAMEs):
//    PRSEL=2 for FADC data
//
//===============================================================================================*/




/** data struct for configurating initialize setting of the FADC and DMA
*/
struct KnDet_LldConf_s
{
 

    /**DMA destination start address for the FADC results.
    >>> Must be aligned to a multiple integer of circ buffer size !
    Be aware that the chosen address selects the bus taken (RPB or SPB for METIS).
    \arg 0xXXXXXXXXh : 32bit-address specifying the begin of destination buffer
    */
    uint32 DADRForFRR1Data;


    /**length of DMA destination circular buffer for FADC results  :=  2^value [bytes]
    \arg  0 : 1 byte length (thus no change of address)
    \arg  1 : 2 byte length
    \arg  2 : 4 byte length
    \arg  3 : 8 byte length
    \arg ...
    \arg 12 : 4k byte length
    \arg 13 : 8k byte length
    \arg 14 : 16k byte length
    \arg 15 : 32k byte length
    */
    bit8 CBLD_ADRCRForFRR1Data;

};



/** data struct holding data for generating measuring window:
*/
struct KnDet_measWinData_s
{
    /**measuring window start angle
    measuring window start angle with resolution for using epm services
    \arg 0xXXXXXXXXh : epm conform sint32 value holding angle referred to BM with resolution so far 720/2^15
    */
    sint32 measWinStart;


    /**measuring window length angle
    measuring window length angle with resolution for using epm services
    \arg 0xXXXXXXXXh : epm conform sint32 value holding angle with resolution so far 720/2^15
    */
    sint32 measWinLength;
};


	/*very first meas.wind. START angle: first value is angle 5°KW plus angle from BM (to which
	the cylinder table is referenced to) to TDC. Rest is conversion to epm resolution:*/
	#define DUMMY_MW_START   ( (sint32) ( ((20)*EPM_PHIMAX_SY)/720) )

	/*very first meas.window LENGTH angle: first value is angle in °KW:*/
	#define DUMMY_MW_LENGTH ( (sint32) ((40 * EPM_PHIMAX_SY)/720) )

	/*this is the threshold angle, beyond which we conclude, that what epm returned is not the desired
	angle (it already passed within the actual work cycle (due to run time problems)):*/
	#define PLAUS_THRESHOLD_ANGLE 700



/***************************************************************************************************/
									  /*  Measurment window data */
/***************************************************************************************************/


/* -------------------------------------------------------------------- */
/* ------------ Defines for KnDetSigEval ------------------------------ */
/* -------------------------------------------------------------------- */
	#define MAXMWVALUE  950					/* maximum window value */

	#define     SIGEVALMEMLEN        (1<< (SIGEVALMEMCONF -1))	 /* Circular Buffer configuration for Signal Evaluation*/
	#define		LAENGE_RINGPUFFER	(SIGEVALMEMLEN*2)
	#define 	LAENGE_RINGPUFFER_1 (LAENGE_RINGPUFFER - 1)     /* length circular buffer -1 */
	#define 	LAENGE_RINGPUFFER_32BIT  (LAENGE_RINGPUFFER << 16) /* shift left 16 LAENGE_RINGPUFFER */
	#define  	KEKOEFFANZ          (0x1C)           			/* taps KE-Filter (28) */
	#define		KEKOEFIDX           (2*KEKOEFFANZ)  			/* taps KE-Filter (56) */
	#define 	MASKFILSEL          (0x0F)        /* mask filter selection (lim num fil in data base) */

	#if (SY_KSENCHN > 0)
	    #define SHFILTERS	(0x04)          	  /* shift filter */
	#endif

/* -------------------------------------------------------------------- */
/* ------------ End Defines for KnDetSigEval -------------------------- */
/* -------------------------------------------------------------------- */

    #if (LAENGE_RINGPUFFER < (2*KNDET_TREL_CHCR + 76)  )
	       #error >>>> Buffer for Circular Buffer to small! Please check in KnDet_confprot.h.
	#endif

/* ------------------------------------------------------------------------------------- */
/* ------------ Defines GTC_WO - this will make sure that WO is always activated ------- */
/* ------------------------------------------------------------------------------------- */
#define TC1796_GTC_WO 



#ifndef SY_KS1
  #error >>>> 'SY_KS1' undefined!
#endif

#ifndef SY_KS2
  #error >>>> 'SY_KS2' undefined!
#endif

#ifndef SY_KS3
  #error >>>> 'SY_KS3' undefined!
#endif

#ifndef SY_KS4
  #error >>>> 'SY_KS4' undefined!
#endif

#ifndef SY_KSZA
  #error >>>> 'SY_KSZA' undefined!
#endif

#ifndef KNKMUXPORTACTVD_SC
  #error >>>> 'KNKMUXPORTACTVD_SC' undefined!
#endif

/*Break if more than two SY_KSx are identical in case of KNKMUXPORTACTVD_SC > 0 && KNKMUXPORTACTVD_SC < 16*/
#if  (SY_KSZA == 3 && KNKMUXPORTACTVD_SC > 0 && KNKMUXPORTACTVD_SC < 16 && (SY_KS1 == SY_KS2)&&( SY_KS1 == SY_KS3))
	#error >>>> more than two SY_KSx identical!
#endif

#if (SY_KSZA == 4 && KNKMUXPORTACTVD_SC > 0 && KNKMUXPORTACTVD_SC < 16)
	#if ((SY_KS1!=SY_KS2)&& (SY_KS3!=SY_KS4)) || ((SY_KS1!=SY_KS3)&& (SY_KS2!=SY_KS4))
	#else
		#error >>>> more than two SY_KSx identical!
	#endif
#endif

/*Break if more than two SY_KSx are identical in case of KNKMUXPORTACTVD_SC >=16*/

#if  (SY_KSZA == 2 && KNKMUXPORTACTVD_SC >=16  && (SY_KS1 == SY_KS2))
	#error >>>> two or more SY_KSx identical!
#endif
#if (SY_KSZA == 3 && KNKMUXPORTACTVD_SC >=16 )
	#if ((SY_KS1 != SY_KS2)&&( SY_KS1 != SY_KS3)&& (SY_KS2 != SY_KS3))
	#else
		#error >>>> two or more SY_KSx identical!
	#endif
#endif
#if  (SY_KSZA == 4 && KNKMUXPORTACTVD_SC >=16  && (((1 << SY_KS1)|( 1 << SY_KS2)|( 1 << SY_KS3)|(1<<SY_KS4)) != 0x0F))
	#error >>>> two or more SY_KSx identical!
#endif


/* _COMP<x>_CONFPROT_H                                                                            */
#endif









