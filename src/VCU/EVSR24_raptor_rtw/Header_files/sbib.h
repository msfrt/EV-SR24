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
 * $Filename__:sbib.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:27.01.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:sbib$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     27.01.2009 KLMEYER
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SBIB_H
#define _SBIB_H

/*--------------------------------------------------------------------------------------------------
 * Includes
 *--------------------------------------------------------------------------------------------------
 */
/* -/- */

/*--------------------------------------------------------------------------------------------------
 * Defines
 *--------------------------------------------------------------------------------------------------
 */


/* -------------------------------------------------------------------------------------------------
 * 1. section: version number for this info block structure
 *
 *             please note that this number is NOT check internally in ECU  - BUT
 *             the external checksum-tool (K5/ESQ) *will use it*
 *             So if you like to change that number, double check with ESQ, otherwise
 *             you wound be lucky at all!!
 *             DO *NOT* USE THIS SYMBOL
 * -------------------------------------------------------------------------------------------------
 */
#define IB_VERSION_SUBID    0x00              /* Info Block Version                           */


 /* -------------------------------------------------------------------------------------------------
 * 2. section: status flags for SUB-ID's
 *
 *             for each infoblock some statusflags can be assigned.
 *             DO *NOT* USE THIS SYMBOL
 * -------------------------------------------------------------------------------------------------
 */
/* Shift of 8 necessary to get correct bit position */
#define IB_FLAG_NONE        0x0000                 /* No specific status is used                   */
#define IB_FLAG_OTP        (0x8000 << 8)           /* Status OTP (one time programmable)           */


/* -------------------------------------------------------------------------------------------------
 * 3. section: Sub-ID's for Infoblocks
 *             plaese note that these ID are the superset of all projects and NOT project specific
 *             Note: Range 0x10 to 0xF0, lower nibble MUST be zero, higher nibble > 0
 *             DO *NOT* USE THIS SYMBOL
 * -------------------------------------------------------------------------------------------------
 */
#define IB_SB_SUBID         0x10              /* Info Block Startup Block ID                  */
#define IB_TP_SUBID         0x20              /* Info Block Tuning protection ID              */
#define IB_CB_SUBID         0x30              /* Info Block customer Block ID                 */
#define IB_ASW0_SUBID       0x40              /* Info Block Application software ID#0         */
#define IB_ASW1_SUBID       0x50              /* Info Block Application software ID#1         */
#define IB_DS0_SUBID        0x60              /* Info Block Dataset #0 ID                     */
#define IB_DS1_SUBID        0x70              /* Info Block Dataset #1 ID                     */
#define IB_VDS_SUBID        0x80              /* Info Block Variant dataset ID                */
#define IB_CTP_SUBID        0x90              /* Info Block Customer Tuning protection ID     */
#define IB_ASW2_SUBID       0xA0              /* Info Block Application software ID#2         */
#define IB_ASW3_SUBID       0xB0              /* Info Block Application software ID#3         */
#define IB_ABS0_SUBID       0xC0              /* Info Block Absolute constants #0             */
#define IB_EEC_SUBID        0xD0              /* Info Block Emulation extension chip          */
#define IB_CUST_SUBID       0xE0              /* Info Block Customer specific ID              */
#define IB_RL_SUBID         0xF0              /* Info Block Ramloader ID                      */
#define IB_AA_SUBID         0xF1              /* Application Attestation ID                   */



/* -------------------------------------------------------------------------------------------------
 * 4. section: Sub-ID's for Checksum areas
 *             plaese note that these ID are the superset of all projects and NOT project specific
 *             Note: Range 0x00 to 0x0F, higher nibble MUST be zero
 *             DO *NOT* USE THIS SYMBOL
 * -------------------------------------------------------------------------------------------------
 */
#define IB_CS0_SUBID        0x00              /* Checksum #0 ID                               */
#define IB_CS1_SUBID        0x01              /* Checksum #1 ID                               */
#define IB_CS2_SUBID        0x02              /* Checksum #2 ID                               */
#define IB_CS3_SUBID        0x03              /* Checksum #3 ID                               */
#define IB_CS4_SUBID        0x04              /* Checksum #4 ID                               */
#define IB_CS5_SUBID        0x05              /* Checksum #5 ID                               */
#define IB_CS6_SUBID        0x06              /* Checksum #6 ID                               */
#define IB_CS7_SUBID        0x07              /* Checksum #7 ID                               */
#define IB_CS8_SUBID        0x08              /* Checksum #8 ID                               */
#define IB_CS9_SUBID        0x09              /* Checksum #9 ID                               */


/* -------------------------------------------------------------------------------------------------
 * 5. section: ID's for Infoblocks
 *             plaese note that these ID are the superset of all projects and NOT project specific
 * -------------------------------------------------------------------------------------------------
 */
#define IB_SB_ID   ((IB_VERSION_SUBID<<24)+IB_SB_SUBID)     /* Info Block Startup Block           */
#define IB_TP_ID   ((IB_VERSION_SUBID<<24)+IB_TP_SUBID)     /* Info Block Tuning protection       */
#define IB_CB_ID   ((IB_VERSION_SUBID<<24)+IB_CB_SUBID)     /* Info Block Customer Block          */
#define IB_ASW0_ID ((IB_VERSION_SUBID<<24)+IB_ASW0_SUBID)   /* Info Block Application software#0  */
#define IB_ASW1_ID ((IB_VERSION_SUBID<<24)+IB_ASW1_SUBID)   /* Info Block Application software#1  */
#define IB_ASW2_ID ((IB_VERSION_SUBID<<24)+IB_ASW2_SUBID)   /* Info Block Application software#2  */
#define IB_ASW3_ID ((IB_VERSION_SUBID<<24)+IB_ASW3_SUBID)   /* Info Block Application software#3  */
#define IB_ABS0_ID ((IB_VERSION_SUBID<<24)+IB_ABS0_SUBID)   /* Info Block Absolute constants #0   */
#define IB_EEC_ID  ((IB_VERSION_SUBID<<24)+IB_EEC_SUBID)    /* Info Block Emulation extension chip*/
#define IB_DS0_ID  ((IB_VERSION_SUBID<<24)+IB_DS0_SUBID)    /* Info Block Dataset#0               */
#define IB_DS1_ID  ((IB_VERSION_SUBID<<24)+IB_DS1_SUBID)    /* Info Block Dataset#1               */
#define IB_VDS_ID  ((IB_VERSION_SUBID<<24)+IB_VDS_SUBID)    /* Info Block Variant dataset         */
#define IB_CTP_ID  ((IB_VERSION_SUBID<<24)+IB_CTP_SUBID)    /* Info Block Customer Tuning prot.   */
#define IB_CUST_ID ((IB_VERSION_SUBID<<24)+IB_CUST_SUBID)   /* Info Block Customer specific       */
#define IB_RL_ID   ((IB_VERSION_SUBID<<24)+IB_RL_SUBID)     /* Info Block Ramloader               */
#define IB_AA_ID   ((IB_VERSION_SUBID<<24)+IB_AA_SUBID)     /* Application Attestation            */

/* -------------------------------------------------------------------------------------------------
 * 6. section: ID's for Checksum entries
 *             plaese note that these ID are the superset of all projects and NOT project specific
 * -------------------------------------------------------------------------------------------------
 */
#define IB_SB_CS0_ID   (IB_CS0_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #0   */
#define IB_SB_CS1_ID   (IB_CS1_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #1   */
#define IB_SB_CS2_ID   (IB_CS2_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #2   */
#define IB_SB_CS3_ID   (IB_CS3_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #3   */
#define IB_SB_CS4_ID   (IB_CS4_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #4   */
#define IB_SB_CS5_ID   (IB_CS5_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #5   */
#define IB_SB_CS6_ID   (IB_CS6_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #6   */
#define IB_SB_CS7_ID   (IB_CS7_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #7   */
#define IB_SB_CS8_ID   (IB_CS8_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #8   */
#define IB_SB_CS9_ID   (IB_CS9_SUBID | IB_SB_SUBID)  /* Checksum ID for SB block #9   */

#define IB_TP_CS0_ID   (IB_CS0_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #0   */
#define IB_TP_CS1_ID   (IB_CS1_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #1   */
#define IB_TP_CS2_ID   (IB_CS2_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #2   */
#define IB_TP_CS3_ID   (IB_CS3_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #3   */
#define IB_TP_CS4_ID   (IB_CS4_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #4   */
#define IB_TP_CS5_ID   (IB_CS5_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #5   */
#define IB_TP_CS6_ID   (IB_CS6_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #6   */
#define IB_TP_CS7_ID   (IB_CS7_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #7   */
#define IB_TP_CS8_ID   (IB_CS8_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #8   */
#define IB_TP_CS9_ID   (IB_CS9_SUBID | IB_TP_SUBID)  /* Checksum ID for TP block #9   */

#define IB_CB_CS0_ID   (IB_CS0_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #0   */
#define IB_CB_CS1_ID   (IB_CS1_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #1   */
#define IB_CB_CS2_ID   (IB_CS2_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #2   */
#define IB_CB_CS3_ID   (IB_CS3_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #3   */
#define IB_CB_CS4_ID   (IB_CS4_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #4   */
#define IB_CB_CS5_ID   (IB_CS5_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #5   */
#define IB_CB_CS6_ID   (IB_CS6_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #6   */
#define IB_CB_CS7_ID   (IB_CS7_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #7   */
#define IB_CB_CS8_ID   (IB_CS8_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #8   */
#define IB_CB_CS9_ID   (IB_CS9_SUBID | IB_CB_SUBID)  /* Checksum ID for CB block #9   */

#define IB_ASW0_CS0_ID   (IB_CS0_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #0   */
#define IB_ASW0_CS1_ID   (IB_CS1_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #1   */
#define IB_ASW0_CS2_ID   (IB_CS2_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #2   */
#define IB_ASW0_CS3_ID   (IB_CS3_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #3   */
#define IB_ASW0_CS4_ID   (IB_CS4_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #4   */
#define IB_ASW0_CS5_ID   (IB_CS5_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #5   */
#define IB_ASW0_CS6_ID   (IB_CS6_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #6   */
#define IB_ASW0_CS7_ID   (IB_CS7_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #7   */
#define IB_ASW0_CS8_ID   (IB_CS8_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #8   */
#define IB_ASW0_CS9_ID   (IB_CS9_SUBID | IB_ASW0_SUBID)  /* Checksum ID for ASW0 block #9   */

#define IB_ASW1_CS0_ID   (IB_CS0_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #0   */
#define IB_ASW1_CS1_ID   (IB_CS1_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #1   */
#define IB_ASW1_CS2_ID   (IB_CS2_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #2   */
#define IB_ASW1_CS3_ID   (IB_CS3_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #3   */
#define IB_ASW1_CS4_ID   (IB_CS4_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #4   */
#define IB_ASW1_CS5_ID   (IB_CS5_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #5   */
#define IB_ASW1_CS6_ID   (IB_CS6_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #6   */
#define IB_ASW1_CS7_ID   (IB_CS7_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #7   */
#define IB_ASW1_CS8_ID   (IB_CS8_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #8   */
#define IB_ASW1_CS9_ID   (IB_CS9_SUBID | IB_ASW1_SUBID)  /* Checksum ID for ASW1 block #9   */

#define IB_ASW2_CS0_ID   (IB_CS0_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #0   */
#define IB_ASW2_CS1_ID   (IB_CS1_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #1   */
#define IB_ASW2_CS2_ID   (IB_CS2_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #2   */
#define IB_ASW2_CS3_ID   (IB_CS3_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #3   */
#define IB_ASW2_CS4_ID   (IB_CS4_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #4   */
#define IB_ASW2_CS5_ID   (IB_CS5_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #5   */
#define IB_ASW2_CS6_ID   (IB_CS6_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #6   */
#define IB_ASW2_CS7_ID   (IB_CS7_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #7   */
#define IB_ASW2_CS8_ID   (IB_CS8_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #8   */
#define IB_ASW2_CS9_ID   (IB_CS9_SUBID | IB_ASW2_SUBID)  /* Checksum ID for ASW2 block #9   */

#define IB_ASW3_CS0_ID   (IB_CS0_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #0   */
#define IB_ASW3_CS1_ID   (IB_CS1_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #1   */
#define IB_ASW3_CS2_ID   (IB_CS2_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #2   */
#define IB_ASW3_CS3_ID   (IB_CS3_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #3   */
#define IB_ASW3_CS4_ID   (IB_CS4_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #4   */
#define IB_ASW3_CS5_ID   (IB_CS5_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #5   */
#define IB_ASW3_CS6_ID   (IB_CS6_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #6   */
#define IB_ASW3_CS7_ID   (IB_CS7_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #7   */
#define IB_ASW3_CS8_ID   (IB_CS8_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #8   */
#define IB_ASW3_CS9_ID   (IB_CS9_SUBID | IB_ASW3_SUBID)  /* Checksum ID for ASW3 block #9   */

#define IB_ABS0_CS0_ID   (IB_CS0_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #0   */
#define IB_ABS0_CS1_ID   (IB_CS1_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #1   */
#define IB_ABS0_CS2_ID   (IB_CS2_SUBID | IB_ABs0_SUBID)  /* Checksum ID for ABS0 block #2   */
#define IB_ABS0_CS3_ID   (IB_CS3_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #3   */
#define IB_ABS0_CS4_ID   (IB_CS4_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #4   */
#define IB_ABS0_CS5_ID   (IB_CS5_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #5   */
#define IB_ABS0_CS6_ID   (IB_CS6_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #6   */
#define IB_ABS0_CS7_ID   (IB_CS7_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #7   */
#define IB_ABS0_CS8_ID   (IB_CS8_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #8   */
#define IB_ABS0_CS9_ID   (IB_CS9_SUBID | IB_ABS0_SUBID)  /* Checksum ID for ABS0 block #9   */

#define IB_EEC_CS0_ID    (IB_CS0_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #0   */
#define IB_EEC_CS1_ID    (IB_CS1_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #1   */
#define IB_EEC_CS2_ID    (IB_CS2_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #2   */
#define IB_EEC_CS3_ID    (IB_CS3_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #3   */
#define IB_EEC_CS4_ID    (IB_CS4_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #4   */
#define IB_EEC_CS5_ID    (IB_CS5_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #5   */
#define IB_EEC_CS6_ID    (IB_CS6_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #6   */
#define IB_EEC_CS7_ID    (IB_CS7_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #7   */
#define IB_EEC_CS8_ID    (IB_CS8_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #8   */
#define IB_EEC_CS9_ID    (IB_CS9_SUBID | IB_EEC_SUBID)   /* Checksum ID for EEEC block #9   */

#define IB_DS0_CS0_ID   (IB_CS0_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #0   */
#define IB_DS0_CS1_ID   (IB_CS1_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #1   */
#define IB_DS0_CS2_ID   (IB_CS2_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #2   */
#define IB_DS0_CS3_ID   (IB_CS3_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #3   */
#define IB_DS0_CS4_ID   (IB_CS4_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #4   */
#define IB_DS0_CS5_ID   (IB_CS5_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #5   */
#define IB_DS0_CS6_ID   (IB_CS6_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #6   */
#define IB_DS0_CS7_ID   (IB_CS7_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #7   */
#define IB_DS0_CS8_ID   (IB_CS8_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #8   */
#define IB_DS0_CS9_ID   (IB_CS9_SUBID | IB_DS0_SUBID)  /* Checksum ID for DS0 block #9   */

#define IB_DS1_CS0_ID   (IB_CS0_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #0   */
#define IB_DS1_CS1_ID   (IB_CS1_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #1   */
#define IB_DS1_CS2_ID   (IB_CS2_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #2   */
#define IB_DS1_CS3_ID   (IB_CS3_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #3   */
#define IB_DS1_CS4_ID   (IB_CS4_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #4   */
#define IB_DS1_CS5_ID   (IB_CS5_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #5   */
#define IB_DS1_CS6_ID   (IB_CS6_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #6   */
#define IB_DS1_CS7_ID   (IB_CS7_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #7   */
#define IB_DS1_CS8_ID   (IB_CS8_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #8   */
#define IB_DS1_CS9_ID   (IB_CS9_SUBID | IB_DS1_SUBID)  /* Checksum ID for DS1 block #9   */

#define IB_VDS_CS0_ID   (IB_CS0_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #0   */
#define IB_VDS_CS1_ID   (IB_CS1_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #1   */
#define IB_VDS_CS2_ID   (IB_CS2_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #2   */
#define IB_VDS_CS3_ID   (IB_CS3_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #3   */
#define IB_VDS_CS4_ID   (IB_CS4_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #4   */
#define IB_VDS_CS5_ID   (IB_CS5_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #5   */
#define IB_VDS_CS6_ID   (IB_CS6_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #6   */
#define IB_VDS_CS7_ID   (IB_CS7_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #7   */
#define IB_VDS_CS8_ID   (IB_CS8_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #8   */
#define IB_VDS_CS9_ID   (IB_CS9_SUBID | IB_VDS_SUBID)  /* Checksum ID for VDS block #9   */

#define IB_CTP_CS0_ID   (IB_CS0_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #0   */
#define IB_CTP_CS1_ID   (IB_CS1_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #1   */
#define IB_CTP_CS2_ID   (IB_CS2_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #2   */
#define IB_CTP_CS3_ID   (IB_CS3_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #3   */
#define IB_CTP_CS4_ID   (IB_CS4_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #4   */
#define IB_CTP_CS5_ID   (IB_CS5_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #5   */
#define IB_CTP_CS6_ID   (IB_CS6_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #6   */
#define IB_CTP_CS7_ID   (IB_CS7_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #7   */
#define IB_CTP_CS8_ID   (IB_CS8_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #8   */
#define IB_CTP_CS9_ID   (IB_CS9_SUBID | IB_CTP_SUBID)  /* Checksum ID for CTP block #9   */

#define IB_CUST_CS0_ID  (IB_CS0_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #0  */
#define IB_CUST_CS1_ID  (IB_CS1_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #1  */
#define IB_CUST_CS2_ID  (IB_CS2_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #2  */
#define IB_CUST_CS3_ID  (IB_CS3_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #3  */
#define IB_CUST_CS4_ID  (IB_CS4_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #4  */
#define IB_CUST_CS5_ID  (IB_CS5_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #5  */
#define IB_CUST_CS6_ID  (IB_CS6_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #6  */
#define IB_CUST_CS7_ID  (IB_CS7_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #7  */
#define IB_CUST_CS8_ID  (IB_CS8_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #8  */
#define IB_CUST_CS9_ID  (IB_CS9_SUBID | IB_CUST_SUBID) /* Checksum ID for CUST block #9  */


/* -------------------------------------------------------------------------------------------------
 * 7. section: Global Definitions
 * -------------------------------------------------------------------------------------------------
 */
/* Definition of flags for handling CS areas */
#define IB_NO_FLAG_SET           0x00         /* No flag is set                                       */
#define IB_AREA_EMPTY_ALLOWED    0x01         /* Bit0: "CS-area is empty" is allowed at power-up      */
#define IB_CHECK_AT_POWERON      0x02         /* Bit1: Check checksum at power-up-test                */
#define IB_CHECK_AT_RUNTIME      0x04         /* Bit2: Check checksum at runtime                      */
#define IB_CONT_ON_ERROR         0x08         /* Bit3: Continue if check of actual block fails        */
#define IB_CHECK_IN_SB           0x10         /* Bit4: Check checksum area during power-on test of SB */


/* Start value of checksum calculation */
#define IB_CKSUM_STARTVAL          0xFADECAFEUL

/* Expected value of checksum calculation */
#define IB_CKSUM_EXPECTEDVAL       0xCAFEAFFEUL

/* Value of end id */
#define IB_ENDID_VAL          0xDEADBEEFUL

/* Size of end pattern */
#define IB_ENDID_SIZE          0x04

/* Pattern for validation correct address before modify hex file (32Bit value) */
#define IB_VALID_PATTERN           0xAFAFAFAFUL

/* Pattern for validation correct address before modify hex file (8Bit value) */
#define  IB_VALID8       0xAF

/* Dummy values for TTNR and FSW id */
#define  IB_DUMMY_TTNR  IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8
#define  IB_DUMMY_FSWID IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8

/* Dummy values for signature */
#define  IB_DUMMY_SIGNATURE IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, \
                            IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8, IB_VALID8

/*--------------------------------------------------------------------------------------------------
 * Type definitions
 *--------------------------------------------------------------------------------------------------
 */

/* Define an epilog */
typedef struct
{
    uint32 dCompRef;                     /* Copy of comp id from the last block                        */
    uint32 dCompId;                      /* Comp Id from actual block                                  */
    uint8 dSignatur[128];                /* Signature                                                  */
    uint32 dCSAdjust;                    /* Checksum adjust value for complete cs area                 */
    uint32 dEndPattern;                  /* End pattern of actual block                                */
}IB_Epilog_t;

/* Define a ID for an infotab entry */
struct IB_InfoTabId_def
{
    uint8  index;                        /* Index of info tab                                          */
    uint8  id;                           /* ID of infoblock                                            */
} __attribute__((packed));
typedef struct IB_InfoTabId_def IB_InfoTabId_t;

/* Define a type for checksum-data */
struct IB_CSBlkTab_def {
    uint8           dCSBlkID;            /* Identifier of checksum-area-block                          */
    uint8           numBlkIDLen;         /* Evaluationlength of block-ID                               */
    bit16           dFlags;              /* Flags for handling CS areas                                */
                                         /* Bit0: "CS-area is empty" is allowed at power-up            */
                                         /* Bit1: Check checksum at power-up-test                      */
                                         /* Bit2: Check checksum at runtime                            */
                                         /* Bit3: Continue if check of actual block fails              */
    uint32          adCSStart;           /* Start-address of checksum-block                            */
    uint32          adCSEnd;             /* End-address of checksum-block                              */
    uint32          dCSStartVal;         /* Start-value for checksum-code                              */
    uint32          dCSExpectedVal;      /* Expected end-value of checksum                             */
    uint32          adBlkIDRef;          /* Address of block-ID in reference block                     */
    uint32          adBlkID;             /* Address of block-ID in this block                          */
    IB_InfoTabId_t  dCSAlgo;             /* Identifier of checksum algorithm                           */
    IB_InfoTabId_t  dErrorExitID;        /* Identifier of error exit routine (only for power-up-test)  */
} __attribute__((packed));
typedef struct IB_CSBlkTab_def IB_CSBlkTab_t, *IB_PCSBlkTab_t;


/* define a type for info-block */
struct IB_InfoBlk_def
{
    uint32          dBlkID;             /* Blockidentifier (ID for e.g. CB, ASW, DS....)              */
    uint32          dBlkLen;            /* Blocklength in bytes (for copy algorith.)                  */
    uint32          adNextInfoBlk;      /* Address of next block                                      */
    uint32          adPattern;          /* Address of end pattern                                     */
    uint32          adIntInfoTab;       /* Address of internal infotab                                */
    uint32          adExtInfoTab;       /* Address of external infotab                                */
    uint8           numIntInfoTab;      /* Number of entries in internal info tab                     */
    uint8           numExtInfoTab;      /* Number of entries in external info tab                     */
    uint8           dTTNr_u8[10];       /* 10 bytes Typ-Teile-Nummer                                  */
    uint8           dFSWId_u8[8];       /* 8 bytes FSW-Id                                             */
    uint16          numCSEntries;       /* Number of checksum entries                                 */
    IB_InfoTabId_t  dErrorExitID;       /* Identifier of error exit routine (if next info-block is    */
                                        /* not ok).                                                   */
    uint32          dCSAdjust;          /* Checksum of infoblock - first part                         */
} __attribute__((packed));
typedef struct IB_InfoBlk_def IB_InfoBlk_t, *IB_PInfoBlk_t;


/*--------------------------------------------------------------------------------------------------
 * Prototypes
 *--------------------------------------------------------------------------------------------------
 */
/* -/- */

/*--------------------------------------------------------------------------------------------------
 * Variables
 *--------------------------------------------------------------------------------------------------
 */

#endif
/* ***************************************************************************
 * END OF FILE
 * ***************************************************************************/
