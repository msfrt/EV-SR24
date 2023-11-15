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
 * Administrative Information (automatically filled in by [N]estor)      *
 *************************************************************************
 *
 * $Filename__:injhpfi_template_conf.ht$
 *
 * $Author____:VEH1KOR$
 *
 * $Function__: Introdution of Perl script  to generated config
 *               header files                                  $
 *
 *************************************************************************
 * $Repository:SDOM$
 * $User______:VEH1KOR$
 * $Date______:16.03.2011$
 * $Class_____:CONFTPLHDR$
 * $Name______:injhpfi_template_conf$
 * $Variant___:2.11.0$
 * $Revision__:1$
 * $Type______:HT$
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
 * 2.11.0; 1     16.03.2011 VEH1KOR
 *   Review Changes
 * 
 * 2.11.0; 0     16.03.2011 VEH1KOR
 *   CRQ 342359 : Perl Script for Injection Package
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef INJHPFI_AUTO_CONF_H
#define INJHPFI_AUTO_CONF_H


#ifndef SY_ZYLZA
  #error >>>> 'SY_ZYLZA' undefined!
#endif

    /******************************************************************************************** */
	/*Number of injection channels. In general you are free to define the number of channels. In most 
      * cases the Number of injection channels is equal to the number of cylinders.  */
	/* ******************************************************************************************* */ 	                                                                                            
	#define INJHPFI_NR_CHLS   (SY_ZYLZA)
			
	
	/** MinOffTime: typ 300us - 500us. */
	#define INJHPFI_MIN_OFF_TIME_US 300
   
   /** Angle distance towards the abort angle where no more after 
   dribble is allowed. Note that your calibration here can be
   overwritten by result=Max(INJHPFI_MIN_ANGLE_AD_GRD, VAL1, Val2) 
   where 
   VAL1 = angle which passes during INJHPFI_MIN_OFF_TIME_US at 10000rpm
   VAL2 = angle which passes during the runtime 1500/MACHINE_TICKS_PER_US [us]
          at a theoretical engine speed of 73242 rpm (angle clock burst).  
   */
    #define INJHPFI_MIN_ANGLE_AD_GRD 33
#endif

