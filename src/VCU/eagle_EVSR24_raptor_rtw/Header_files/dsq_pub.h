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
 * $Filename__:dsq_pub.h$ 
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
 * $Name______:dsq_pub$ 
 * $Variant___:2.0.0$ 
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
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsq_pub.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _DSQ_PUB_H
#define _DSQ_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - fault check status array definition
 *              Definition of public interfaces
 *
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* predefined Signal qualities */

/* old definitions, which will be removed on long term */
#define    DSM_SIGNAL_OK           0
#define    DSM_SIGNAL_MODEL        4
#define    DSM_SIGNAL_FROZEN       8
#define    DSM_SIGNAL_DEFAULT      12
#define    DSM_SIGNAL_INVALID      15


/* definitions for signals */
#define    DSM_QUAL_ALL_OK         0
#define    DSM_QUAL_MEAS           2
#define    DSM_QUAL_PREMFROZEN     3
#define    DSM_QUAL_MODEL          4
#define    DSM_QUAL_REDUCED        6
#define    DSM_QUAL_FROZEN         8
#define    DSM_QUAL_TESTER         11
#define    DSM_QUAL_DEFAULT        12
#define    DSM_QUAL_INVALID        15


/* definitions for actuators */
#define    DSM_ACTR_NORMAL         0
#define    DSM_ACTR_RESTRICTED     8
#define    DSM_ACTR_DISABLED       15

/* generic definitions */
#define    DSM_QUAL_0              0
#define    DSM_QUAL_1              1
#define    DSM_QUAL_2              2
#define    DSM_QUAL_3              3
#define    DSM_QUAL_4              4
#define    DSM_QUAL_5              5
#define    DSM_QUAL_6              6
#define    DSM_QUAL_7              7
#define    DSM_QUAL_8              8
#define    DSM_QUAL_9              9
#define    DSM_QUAL_10             10
#define    DSM_QUAL_11             11
#define    DSM_QUAL_12             12
#define    DSM_QUAL_13             13
#define    DSM_QUAL_14             14
#define    DSM_QUAL_15             15


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/**
 DSQ = Diagnostic signal quality reference type.
 Integer packed into structure to enable parameter checking */
/***********************************/
typedef struct
{
    uint16 id; /* reference number  */
} DSM_DSQType;



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_RepSignalQuality(  DSM_DSQType      SQName     /* Reference for signal quality           */
                          , uint             stQuality  /* Quality of signal                      */
                         );


DSM_DSQType DSM_DSQArray( DSM_DSQType SQName
                         ,uint  idx
                        );


void    DSMDSQ_Init(void);                              /* init process                           */
void    DSMDSQ_ReInit(void);                            /* reinit process                         */
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


#endif
