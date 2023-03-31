/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *                    - for headerfiles only -                           *
 *************************************************************************
 * Administrative Information (automatically filled in by [N]estor)  *
 *************************************************************************
 *
 * $Filename__:dekon.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This file has to be adapted if more than one powerstage
 *             will be diagnosed in one module!$
 *
 *************************************************************************
 * $Repository:SDOM$
 * $User______:RKR5KOR$
 * $Date______:30.11.2016$
 * $Class_____:SWHDR$
 * $Name______:dekon$
 * $Variant___:1.2.0_NEW_EAGLE_0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 *************************************************************************
 * Points to be taken into consideration when/if the module is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 *
 * 1.2.0_NEW_EAGLE_0; 0     30.11.2016 RKR5KOR
 *    Diagnosis configured .
 *
 * 1.1.0_NEW_EAGLE_0; 0     31.03.2015 RKR5KOR
 *   Diagnosis configred.
 *
 * 1.0.0_NEW_EAGLE_0; 0     20.03.2014 RRH2KOR
 *   For New Eagle software sharing
 *   Prototype
 *
 * 1.0.0_MED1735_69; 0     22.11.2011 ZIC2SI
 *   initial version
 *
 * 1.0.0_69; 6     21.10.2011 ZIC2SI
 *   gconf_sy.d changed to common.h
 *
 * 1.0.0_69; 5     26.05.2011 ZIC2SI
 *   changes due to EKP fct. for Ferrari
 *
 * 1.0.0_69; 4     14.04.2011 ZIC2SI
 *   added DPS_KPE3
 *
 * 1.0.0_69; 3     04.04.2011 ZIC2SI
 *   added SY_STERVK
 *
 * 1.0.0_69; 2     08.02.2011 ZIC2SI
 *   added EKP2
 *
 * 1.0.0_69; 1     08.11.2010 ZIC2SI
 *   changes due to new HEGO-package
 *
 * $
 *
 *************************************************************************
</RBHead>*/


#ifndef _DEKON_H_
#define _DEKON_H_

#include "common.h"

/************************************************************************/
#ifndef SY_NWS
  #error >>>> 'SY_NWS' undefined!
#endif

#ifndef SY_NWSA
  #error >>>> 'SY_NWSA' undefined!
#endif

#ifndef SY_NWGE2
  #error >>>> 'SY_NWGE2' undefined!
#endif

#ifndef SY_NWGA2
  #error >>>> 'SY_NWGA2' undefined!
#endif

#ifndef SY_STERHK
  #error >>>> 'SY_STERHK' undefined!
#endif

#ifndef SY_AUFLAD2
  #error >>>> 'SY_AUFLAD2' undefined!
#endif

#ifndef SY_SLVEST
  #error >>>> 'SY_SLVEST' undefined!
#endif

#ifndef SY_SLPANZ
  #error >>>> 'SY_SLPANZ' undefined!
#endif

#ifndef SY_BUKLSU
  #error >>>> 'SY_BUKLSU' undefined!
#endif

#ifndef SY_STERVK
  #error >>>> 'SY_STERVK' undefined!
#endif

#ifndef SY_ANZEKP
  #error >>>> 'SY_ANZEKP' undefined!
#endif

#ifndef PSPG_PSPPWMCTRL_SC
  #error >>>> 'PSPG_PSPPWMCTRL_SC' undefined!
#endif

#ifndef UEGO_CMNHEATRPSDIAG_SC
  #error >>>> 'UEGO_CMNHEATRPSDIAG_SC' undefined!
#endif

#ifndef SY_2TEV
  #error >>>> 'SY_2TEV' undefined!
#endif



#if ((SY_BUKLSU == 0) && (UEGO_CMNHEATRPSDIAG_SC == 0))
/* LSU */
/***********************************************************************/
#ifdef UEGO_HtrPSDia_ModId
	#if (SY_STERVK > 0)
	  #define DPS_COUNT		2
	#else
	  #define DPS_COUNT		1
	#endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_UEGOHeatrPsS1B1_PMD
   		#if (DPS_COUNT > 1)
          ,DPS_UEGOHeatrPsS1B2_PMD
		#endif
    };

	#define DPS_UEGOHeatrPsS1B1		0
	#if (DPS_COUNT > 1)
	  #define DPS_UEGOHeatrPsS1B2	1
	#endif

#endif
#endif /* SY_BUKLSU */


/* LSF */
/**********************************************************************/
#ifdef HEGO_OBDHtrPs_ModId

	#ifdef HEGOS2B1PSID_SY
        #if ( HEGOS2B1PSID_SY != 0 )
            #error >>>>  'HEGOS2B1PSID_SY != 0 not allowed here'
        #endif
	#endif
	#ifdef HEGOS2B2PSID_SY
        #if ( (HEGOS2B2PSID_SY != 0) && (HEGOS2B2PSID_SY != 1) )
            #error >>>>  'for HEGOS2B2PSID_SY only 0 or 1 are allowed here'
        #endif
	#endif

	#ifdef HEGOS1B1PSID_SY
        #if ( HEGOS1B1PSID_SY != 0 )
            #error >>>>  'HEGOS1B1PSID_SY != 0 not allowed here'
        #endif
	#endif
	#ifdef HEGOS1B2PSID_SY
        #if ( HEGOS1B2PSID_SY != 0 )
            #error >>>>  'HEGOS1B2PSID_SY != 0 not allowed here'
        #endif
	#endif

	#ifdef HEGOS3B1PSID_SY
        #if ( HEGOS3B1PSID_SY != 0 )
            #error >>>>  'HEGOS3B1PSID_SY != 0 not allowed here'
        #endif
	#endif
	#ifdef HEGOS3B2PSID_SY
        #if ( HEGOS3B2PSID_SY != 0 )
            #error >>>>  'HEGOS3B2PSID_SY != 0 not allowed here'
        #endif
	#endif


	#if (SY_STERHK > 0)
	  #define DPS_COUNT		2
	#else
	  #define DPS_COUNT		1
	#endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_HSHE_PMD
   		#if (DPS_COUNT > 1)
        ,DPS_HSHE2_PMD
		#endif
    };

	#define DPS_HSHE		HEGOS2B1PSID_SY
	#if (DPS_COUNT > 1)
	  #define DPS_HSHE2		HEGOS2B2PSID_SY
	#endif

#endif


/* DSLVE */
/**********************************************************************/
#ifdef DSLVE_ModId
	#define DPS_COUNT   SY_SLVEST

	static const uint8 DPS_INDEX[DPS_COUNT] =
	{
	     DPS_SLVE_PMD
	#if (SY_SLVEST == 2)
	    ,DPS_SLVE2_PMD
	#endif
	};

		#define  DPS_SLVE	0
	#if (SY_SLVEST == 2)
		#define  DPS_SLVE2	1
	#endif

#endif


/* DSLPE */
/**********************************************************************/
#ifdef DSLPE_ModId
	#define DPS_COUNT   SY_SLPANZ

	static const uint8 DPS_INDEX[DPS_COUNT] =
	{
	     DPS_SLPE_PMD
	#if (SY_SLPANZ == 2)
	    ,DPS_SLPE2_PMD
	#endif
	};

		#define  DPS_SLPE	0
	#if (SY_SLPANZ == 2)
		#define  DPS_SLPE2	1
	#endif

#endif


/* DMTL */
/***********************************************************************/
#ifdef DDMTLHWE_ModId
    #define DPS_COUNT		3

    static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_DMTLH_PMD,
        DPS_DMTLM_PMD,
        DPS_DMTLP_PMD
    };

    #define DPS_DHDMTE      0
    #define DPS_DMMVE       1
    #define DPS_DPMEE       2

#endif


/* TEV */
/***********************************************************************/
#ifdef DTEVE_ModId
	#if (SY_2TEV > 0)
	  #define DPS_COUNT		2
	#else
	  #define DPS_COUNT		1
	#endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_TEVE_PMD
    #if (SY_2TEV > 0)
        ,DPS_TEVE2_PMD
    #endif
    };

	#define DPS_TEVE		0
    #if (SY_2TEV > 0)
	  #define DPS_TEVE2		1
    #endif
#endif


/* Oil Pump Control Valve */
/***********************************************************************/
#ifdef DOUVE_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_OUVE_PMD
    };

	#define DPS_OUVE		0

#endif

#if (SY_ANZEKP == 0)
/* EKP */
/***********************************************************************/
#ifdef DEKPE_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_KPE_PMD
    };

	#define DPS_KPE		0

#endif


/* EKP2 */
/***********************************************************************/
#ifdef DEKP2E_ModId
	#define DPS_COUNT       2

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_KPE2_PMD,
        DPS_KPE3_PMD
    };

	#define DPS_KPE2	0
	#define DPS_KPE3	1

#endif
#endif /* SY_ANZEKP */

#if ((SY_ANZEKP == 2) && (PSPG_PSPPWMCTRL_SC == 0))
/* EKP´s */
/***********************************************************************/
#ifdef DEKPE_ModId
	#define DPS_COUNT       4

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_KPE1_PMD,
        DPS_KPE2_PMD/*,
        DPS_KPE1PWM_PMD,		not used in MED17.3.5
        DPS_KPE2PWM_PMD			not used in MED17.3.5 */
    };

	#define DPS_KPE1	0
	#define DPS_KPE2	1
	#define DPS_KPE1PWM	2
	#define DPS_KPE2PWM	3

#endif
#elif ((SY_ANZEKP == 2) && (PSPG_PSPPWMCTRL_SC == 2))
/* EKP´s */
/***********************************************************************/
#ifdef DEKPE_ModId
	#define DPS_COUNT       4

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_KPE1_PMD/*,
        DPS_KPE2_PMD,			not used with LIN-EKP
        DPS_KPE1PWM_PMD,		not used in MED17.3.5
        DPS_KPE2PWM_PMD			not used in MED17.3.5 */
    };

	#define DPS_KPE1	0
	#define DPS_KPE2	1
	#define DPS_KPE1PWM	2
	#define DPS_KPE2PWM	3

#endif

#endif /* SY_ANZEKP */









#ifdef DEVE_ModId
	#define DPS_COUNT       8

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_EV1E_PMD,
		DPS_EV2E_PMD,
		DPS_EV3E_PMD,
		DPS_EV4E_PMD,
		DPS_EV5E_PMD,
		DPS_EV6E_PMD,
		DPS_EV7E_PMD,
		DPS_EV8E_PMD


    };

	#define DPS_EV1E	0
	#define DPS_EV2E	1
	#define DPS_EV3E	2
	#define DPS_EV4E	3
	#define DPS_EV5E	4
	#define DPS_EV6E	5
	#define DPS_EV7E	6
	#define DPS_EV8E	7


#endif

/*O_F_ECUA046* ********************************************/

#ifdef DA046_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA046_PMD


    };

	#define DPS_ECUA046 	0

#endif

/*******************O_F_ECUK088* ******************************/

#ifdef DK088_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK088_PMD


    };

	#define DPS_ECUK088 	0

#endif

/*******************O_F_ECUA010* ******************************/

#ifdef DA010_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA010_PMD


    };

	#define DPS_ECUA010 	0

#endif

    /*******************O_F_ECUA023* ******************************/

#ifdef DA023_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA023_PMD


    };

	#define DPS_ECUA023	0

#endif

/*******************O_F_ECUA093* ******************************/

#ifdef DA093_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA093_PMD


    };

	#define DPS_ECUA093	0

#endif
/*******************O_F_ECUK084* ******************************/

#ifdef DK084_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK084_PMD


    };

	#define DPS_ECUK084	0

#endif

/*******************O_F_ECUA054* ******************************/

#ifdef DA054_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA054_PMD


    };

	#define DPS_ECUA054	0

#endif



  /*******************out_ECUK053* ******************************/
#ifdef DK053_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK053_PMD


    };

	#define DPS_ECUK053	0

#endif

 /*******************out_ECUK072* ******************************/
#ifdef DK072_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK072_PMD


    };

	#define DPS_ECUK072	0

#endif

	/*******************out_ECUK020* ******************************/
#ifdef DK020_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK020_PMD


    };

	#define DPS_ECUK020	0

#endif

		/*******************out_ECUK036* ******************************/
#ifdef DK036_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK036_PMD


    };

	#define DPS_ECUK036	0

#endif

/*******************out_ECUK055* ******************************/
#ifdef DK055_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK055_PMD


    };

	#define DPS_ECUK055	0

#endif

/*******************out_ECUK038* ******************************/
#ifdef DK038_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK038_PMD


    };

	#define DPS_ECUK038	0

#endif
/*******************out_ECUK037* ******************************/
#ifdef DK037_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK037_PMD


    };

	#define DPS_ECUK037	0

#endif

/*******************out_ECUK056* ******************************/
#ifdef DK056_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK056_PMD


    };

	#define DPS_ECUK056	0

#endif

/*******************out_ECUK039* ******************************/
#ifdef DK039_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK039_PMD


    };

	#define DPS_ECUK039	0

#endif
/*******************out_ECUK012* ******************************/
#ifdef DK012_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK012_PMD


    };

	#define DPS_ECUK012	0

#endif

/*******************out_ECUA033* ******************************/
#ifdef DA033_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA033_PMD


    };

	#define DPS_ECUA033	0

#endif


/*******************out_ECUK073* ******************************/
#ifdef DK073_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK073_PMD


    };

	#define DPS_ECUK073	0

#endif


/*******************out_ECUK071* ******************************/
#ifdef DK071_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK071_PMD


    };

	#define DPS_ECUK071	 0

#endif


/*******************out_ECUK021* ******************************/
#ifdef DK021_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK021_PMD


    };

	#define DPS_ECUK021	 0

#endif

/*******************out_ECUK069* ******************************/
#ifdef DK069_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK069_PMD


    };

	#define DPS_ECUK069	 0

#endif

 /*******************out_ECUK070* ******************************/
#ifdef DK070_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK070_PMD


    };

	#define DPS_ECUK070	 0

#endif


 /*******************out_ECUK054* ******************************/
#ifdef DK054_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK054_PMD


    };

	#define DPS_ECUK054	 0

#endif


/*******************out_ECUK059* ******************************/
#ifdef DK059_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK059_PMD


    };

	#define DPS_ECUK059 0

#endif

/*******************out_ECUA004* ******************************/
#ifdef DA004_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA004_PMD


    };

	#define DPS_ECUA004 0

#endif

/*******************out_ECUA094* ******************************/
#ifdef DA094_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA094_PMD


    };

	#define DPS_ECUA094 0

#endif



	 /*******************out_ECUA011* ******************************/
#ifdef DA011_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA011_PMD


    };

	#define DPS_ECUA011 0

#endif

	 /*******************out_ECUK054* ******************************/
#ifdef DA031_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA031_PMD


    };

	#define DPS_ECUA031 0

#endif


	 /*******************out_ECUA009* ******************************/
#ifdef DA009_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA009_PMD


    };

	#define DPS_ECUA009 0

#endif



/*******************out_ECUA075* ******************************/
#ifdef DA075_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA075_PMD


    };

	#define DPS_ECUA075 0

#endif


   /*******************out_ECUA001* ******************************/
#ifdef DA001_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA001_PMD


    };

	#define DPS_ECUA001 0

#endif

 /*******************out_ECUA002* ******************************/
#ifdef DA002_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA002_PMD


    };

	#define DPS_ECUA002 0

#endif
/*******************out_ECUK019* ******************************/
#ifdef DK019_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK019_PMD


    };

	#define DPS_ECUK019  0

#endif
/*******************out_ECUK053* ******************************/
#ifdef DK053_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK053_PMD


    };

	#define DPS_ECUK053  0

#endif
/*******************out_ECUA045* ******************************/
#ifdef DA045_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA045_PMD


    };

	#define DPS_ECUA045  0

#endif
/*******************out_ECUK057* ******************************/
#ifdef DK057_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUK057_PMD


    };

	#define DPS_ECUK057  0

#endif
/*******************out_ECUA025* ******************************/
#ifdef DA025_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA025_PMD


    };

	#define DPS_ECUA025  0

#endif
/*******************out_ECUA024* ******************************/
#ifdef DA024_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA024_PMD


    };

	#define DPS_ECUA024  0

#endif
/*******************out_ECUA003* ******************************/
#ifdef DA003_ModId
	#define DPS_COUNT       1

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_ECUA003_PMD


    };

	#define DPS_ECUA003  0

#endif
	/*******************out_ECUK089* ******************************/
#ifdef DK089_ModId
	 #define DPS_COUNT       1

	 static const uint8 DPS_INDEX[DPS_COUNT] =
	 {
	     DPS_ECUK089_PMD


	 };

	  #define DPS_ECUK089 0
#endif
















/* waste gate */
/**********************************************************************/
#ifdef DLDE_ModId
	#if (SY_AUFLAD2 > 0)
	  #define DPS_COUNT		2
	#else
	  #define DPS_COUNT		1
	#endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_LDE_PMD
   		#if (DPS_COUNT > 1)
        ,DPS_LDE2_PMD
		#endif
    };

	#define DPS_LDE			0
	#if (DPS_COUNT > 1)
	  #define DPS_LDE2		1
	#endif

#endif


/* dump valve */
/**********************************************************************/
#ifdef DLDUVSE_ModId
	#if (SY_AUFLAD2 > 0)
	  #define DPS_COUNT		2
	#else
	  #define DPS_COUNT		1
	#endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
    {
        DPS_UVSE_PMD
   		#if (DPS_COUNT > 1)
        ,DPS_UVSE2_PMD
		#endif
    };

	#define DPS_UVSE		0
	#if (DPS_COUNT > 1)
	  #define DPS_UVSE2		1
	#endif

#endif

/* NWS */
/************************************************************************/
#ifdef DNWSE_ModId

 #if (SY_NWS>0 && SY_NWSA==0)
   #if (SY_NWGE2>0)
    #define DPS_COUNT 2
   #else
    #define DPS_COUNT 1
   #endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
	{
		DPS_ENWSE_PMD
		#if (DPS_COUNT > 1)
		,DPS_ENWSE2_PMD
		#endif
	};

  #define DPS_ENWSE 0
  #if (DPS_COUNT > 1)
   #define DPS_ENWSE2 1
  #endif

 #endif

 #if (SY_NWSA>0 && SY_NWS==0)
   #if (SY_NWGA2>0)
    #define DPS_COUNT 2
   #else
    #define DPS_COUNT 1
   #endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
	{
		DPS_ANWSE_PMD
		#if (DPS_COUNT > 1)
		,DPS_ANWSE2_PMD
		#endif
	};

  #define DPS_ANWSE 0
  #if (DPS_COUNT > 1)
   #define DPS_ANWSE2 1
  #endif

 #endif

 #if (SY_NWS>0 && SY_NWSA>0)
   #if (SY_NWGE2>0)
    #define DPS_COUNT 4
   #else
    #define DPS_COUNT 2
   #endif

	static const uint8 DPS_INDEX[DPS_COUNT] =
	{
		DPS_ENWSE_PMD
		,DPS_ANWSE_PMD
		#if (DPS_COUNT == 4)
		,DPS_ENWSE2_PMD
		,DPS_ANWSE2_PMD
		#endif
	};

  #define DPS_ENWSE 0
  #define DPS_ANWSE 1
  #if (DPS_COUNT == 4)
   #define DPS_ENWSE2 2
   #define DPS_ANWSE2 3
  #endif

 #endif

#endif


/************************************************************************/


#endif /* _DEKON_H_ */




/*** end of file ******************************************************/
