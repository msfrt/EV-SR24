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
 * $Filename__:hbr_template_conf.ht$
 *
 * $Author____:MKD2KOR$
 *
 * $Function__:Template for the macros to be generated.$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:KHL1HC$
 * $Date______:08.05.2012$
 * $Class_____:CONFTPLHDR$
 * $Name______:hbr_template_conf$
 * $Variant___:1.5.0$
 * $Revision__:1$
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
 *
 * 1.0.0; 0     05.06.2010 MBD2SI
 *   Initial import from Clearcase
 *      File name: hbr_template_conf.ht
 *
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _HBR_AUTO_CONF_H
#define _HBR_AUTO_CONF_H


#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Automatically generated configuration headerfile of HBR module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Powerstage errors */
#define HBR_GEI_ERR_SCB1_MSK		(0x00000001ul)
#define HBR_GEI_ERR_SCG1_MSK	    (0x00000002ul)
#define HBR_GEI_ERR_SCB2_MSK		(0x00000004ul)
#define HBR_GEI_ERR_SCG2_MSK	    (0x00000008ul)
#define HBR_GEI_ERR_SCOL_MSK        (0x00000010ul)
#define HBR_GEI_ERR_OL_MSK          (0x00000020ul)
#define HBR_GEI_ERR_OT_MSK  	    (0x00000040ul)
#define HBR_GEI_ERR_UV_MSK  	    (0x00000080ul)
#define HBR_GEI_ERR_CL_MSK  	    (0x00000100ul)
#define HBR_GEI_ERR_CR_MSK  	    (0x00000200ul)

#define HBR_GEI_ERR_MSK             (HBR_GEI_ERR_SCB1_MSK |  \
                                     HBR_GEI_ERR_SCG1_MSK |  \
                                     HBR_GEI_ERR_SCB2_MSK |  \
                                     HBR_GEI_ERR_SCG2_MSK |  \
                                     HBR_GEI_ERR_OL_MSK   |  \
                                     HBR_GEI_ERR_SCOL_MSK |  \
                                     HBR_GEI_ERR_OT_MSK   |  \
                                     HBR_GEI_ERR_UV_MSK   |  \
                                     HBR_GEI_ERR_CL_MSK   |  \
                                     HBR_GEI_ERR_CR_MSK   )

/* Communication errors */
#define HBR_GEI_ERR_COM_MSK 	    (0x00000400ul)

/* Tested flags */
#define HBR_GEI_TF_SCB1_MSK			(0x00010000ul)
#define HBR_GEI_TF_SCG1_MSK	    	(0x00020000ul)
#define HBR_GEI_TF_SCB2_MSK			(0x00040000ul)
#define HBR_GEI_TF_SCG2_MSK	    	(0x00080000ul)
#define HBR_GEI_TF_SCOL_MSK         (0x00100000ul)
#define HBR_GEI_TF_OL_MSK           (0x00200000ul)
#define HBR_GEI_TF_OT_MSK  	    	(0x00400000ul)

#define HBR_GEI_TF_MSK              (HBR_GEI_TF_SCB1_MSK | \
                                     HBR_GEI_TF_SCG1_MSK | \
                                     HBR_GEI_TF_SCB2_MSK | \
                                     HBR_GEI_TF_SCG2_MSK | \
                                     HBR_GEI_TF_OL_MSK   | \
                                     HBR_GEI_TF_SCOL_MSK | \
                                     HBR_GEI_TF_OT_MSK   )

/* SwitchOff Diag bits */
#define HBR_GEI_SWOFF_ABORT_MSK	    (0x01000000ul)
#define HBR_GEI_SWOFF_REQ_MSK  	    (0x02000000ul)

/* Testimpulse status */
#define HBR_GEI_TST_ABORT_MSK      	(0x08000000ul)
#define HBR_GEI_TST_REQ_MSK      	(0x10000000ul)
#define HBR_GEI_TST_RUN_MSK	    	(0x20000000ul)
#define HBR_GEI_TST_FI_MSK	    	(0x40000000ul)

#define HBR_GEI_TST_MSK      	    (HBR_GEI_TST_ABORT_MSK | \
                                     HBR_GEI_TST_REQ_MSK   | \
                                     HBR_GEI_TST_RUN_MSK   | \
                                     HBR_GEI_TST_FI_MSK	)


#define HBR_GEI_NEW_MSK		        (0x80000000ul)

#define HBR_LAYER_USED

/* Signal location for multiple ECU support */

#define ThrVlv_O_T_MSLOC        ANY
#define ThrVlv2_O_T_MSLOC        ANY
#define ThrVlv3_O_T_MSLOC        ANY


/*
 **************************************************************
 * Enumeration defined for all supported HBr signals
 * This enum is used for accessing the hbr_Signal_Routing array
 * Ref: hbr_Signal_Routing
 **************************************************************
 */
typedef enum Hbr_Signal_e
{
    ThrVlv_O_T,
    ThrVlv2_O_T,
    ThrVlv3_O_T,
    HBR_SIGNAL_NUM
}Hbr_Signal_t;


/*
 **************************************************************
 * Enumeration defined for all supported HBr devices
 * This enum is used for accessing the hbr_DevFuncTable array
 * Ref: hbr_DevFuncTable
 **************************************************************
 */
typedef enum Hbr_Device_e
{
    L9959,
    HBR_DUMMY_DEVICE,
    HBR_DEVICE_NUM
}Hbr_Device_t;



/* _LIBRARYABILITY_H */
#endif

/* _HBR_AUTO_CONF_H */
#endif
