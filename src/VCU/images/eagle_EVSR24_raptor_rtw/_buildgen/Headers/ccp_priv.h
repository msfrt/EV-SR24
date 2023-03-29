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
 * $Filename__:ccp_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ccp_priv$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 0     03.08.2009 MXA2SI
 *   Platform 
 *   Migrated from Clearcase.
 *   B_CCP.10.0.0
 *   B_CCP_Conf.10.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ccp_priv.h
 *      Version: \main\17
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _CCP_PRIV_H
#define _CCP_PRIV_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                  Private  Header File for CCP Driver
 *
 * \scope  INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 *    Includes
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */


/* Definition of CCP Version  */
#define     CCP_MAIN_PROTOCOL_VER     0x02
#define     CCP_RELEASE_VER           0x01

/* Different Checksum type supported */
#define     CCP_ACTIVE_PAGE           0x00
#define     CCP_BIT_OR_WITH_OPT_PAGE  0x01

/* Definition of CCP Commands */
#define     CCP_CONNECT         0x01       /* Service ID for Connect Command  */
#define     CCP_SET_MTA         0x02       /* Service ID for Set MTA Command  */
#define     CCP_DNLOAD          0x03       /* Service ID for Download Command  */
#define     CCP_UPLOAD          0x04       /* Service ID for Upload Command  */
#define     CCP_START_STOP      0x06       /* Service ID for Start Stop Command  */
#define     CCP_DISCONNECT      0x07       /* Service ID for Dis -Connect Command  */
#define     CCP_START_STOP_ALL  0x08       /* Service ID for Start Stop All Command  */
#define     CCP_GET_CAL_PAGE    0x09       /* Service ID for Get calibration page Command  */
#define     CCP_SET_S_STATUS    0x0C       /* Service ID for Set Session Status  Command  */
#define     CCP_GET_S_STATUS    0x0D       /* Service ID for Get Session Status Command  */
#define     CCP_BUILD_CHKSUM    0x0E       /* Service ID for Build CheckSum Command  */
#define     CCP_SHORT_UP        0x0F       /* Service ID for Short Upload Command  */
#define     CCP_CLEAR_MEMORY    0x10       /* Service ID for Clear Memory Command  */
#define     CCP_SELECT_CAL_PAGE 0x11       /* Service ID for Select Calibration Page Command  */
#define     CCP_GET_SEED        0x12       /* Service ID for Get Seed Command  */
#define     CCP_UNLOCK          0x13       /* Service ID for Unlock Command  */
#define     CCP_GET_DAQ_SIZE    0x14       /* Service ID for Get DAQ Size Command  */
#define     CCP_SET_DAQ_PTR     0x15       /* Service ID for Set DAQ Pointer Command  */
#define     CCP_WRITE_DAQ       0x16       /* Service ID for Write DAQ Command  */
#define     CCP_EXCHANGE_ID     0x17       /* Service ID for Exchange ID  Command  */
#define     CCP_PROGRAM         0x18       /* Service ID for Program Command  */
#define     CCP_MOVE            0x19       /* Service ID for Move Command  */
#define     CCP_GET_CCP_VERS    0x1B       /* Service ID for Get CCP Version Command  */
#define     CCP_DIAG_SERVICE    0x20       /* Service ID for Diag Service Command  */
#define     CCP_ACTION_SERVICE  0x21       /* Service ID for Action  Command  */
#define     CCP_PROGRAM_6       0x22       /* Service ID for Program Command  */
#define     CCP_DNLOAD_6        0x23       /* Service ID for Download_6 Command  */

/* Definition of CCP Return - Messages */
#define     CCP_ACKNOWLEDGE         0x00
#define     CCP_DEFAULT_RETURN      0x01
#define     CCP_CMD_PROZ_BUSY       0x10
#define     CCP_DAQ_PROZ_BUSY       0x11
#define     CCP_KEY_REQ             0x18
#define     CCP_SESSION_STAT_REQ    0x19
#define     CCP_COLD_START_REQ      0x20
#define     CCP_CALDAT_INI_REQ      0x21
#define     CCP_DAQ_LIST_INI_REQ    0x22
#define     CCP_CODE_UPDDT_REQ      0x23
#define     CCP_UNKNOWN_COMMAND     0x30
#define     CCP_COMMAND_SYNTAX      0x31
#define     CCP_PARAM_OUTOF_RANGE   0x32
#define     CCP_ACCESS_DENIED       0x33
#define     CCP_OVERLOAD            0x34
#define     CCP_ACCESS_LOCKED       0x35
#define     CCP_DIAG_WRITE_CN       0x50
#define     CCP_DIAG_READ_CN        0x51
#define     CCP_CAL_MASK            0x01
#define     CCP_DAQ_MASK            0x02
#define     CCP_PGM_MASK            0x40
#define     CCP_COMM_OK             0x00

/* definition of CCP internal status bit positions */
#define     CCP_CONNECT_MASK         (uint8)(0x01)
#define     CCP_KEYLESS_MASK         (uint8)(0x02)
#define     CCP_STARTALL_MASK        (uint8)(0x04)
#define     CCP_ODTTX_STOP_MASK      (uint8)(0x08)
#define     CCP_UNLOCK_MASK          (uint8)(0x10)
#define     CCP_KEYREQ_MASK          (uint8)(0x20)
#define     CCP_ACCESSDENY_MASK      (uint8)(0x40)

/* definition of session status bits */
#define     CCP_SESSION_CAL_MASK         (uint8)(0x01)
#define     CCP_SESSION_DAQ_MASK         (uint8)(0x02)
#define     CCP_SESSION_RESUME_MASK      (uint8)(0x04)
#define     CCP_SESSION_STORE_MASK       (uint8)(0x40)
#define     CCP_SESSION_RUN_MASK         (uint8)(0x80)

#define     CCP_SUPPORTEDMPL_MASK    (uint8)(0x43)   /* supported MPL mask  */

#define            CCP_SYN_GRID             0xFFFF /* identifier for angle-synchronous DAQ Tx  */
#define            CCP_CYL1_GRID            0xFFF0 /* identifier for cyl1-synchronous DAQ Tx  */
#define            CCP_CYL2_GRID            0xFFF1 /* identifier for cyl2-synchronous DAQ Tx  */
#define            CCP_CYL3_GRID            0xFFF2 /* identifier for cyl3-synchronous DAQ Tx  */
#define            CCP_CYL4_GRID            0xFFF3 /* identifier for cyl4-synchronous DAQ Tx  */
#define            CCP_CYL5_GRID            0xFFF4 /* identifier for cyl5-synchronous DAQ Tx  */
#define            CCP_CYL6_GRID            0xFFF5 /* identifier for cyl6-synchronous DAQ Tx  */
#define            CCP_CYL7_GRID            0xFFF6 /* identifier for cyl7-synchronous DAQ Tx  */
#define            CCP_CYL8_GRID            0xFFF7 /* identifier for cyl8-synchronous DAQ Tx  */
#define            CCP_CYL9_GRID            0xFFF8 /* identifier for cyl9-synchronous DAQ Tx  */
#define            CCP_CYL10_GRID           0xFFF9 /* identifier for cyl0-synchronous DAQ Tx  */
#define            CCP_CYL11_GRID           0xFFFA /* identifier for cyl11-synchronous DAQ Tx  */
#define            CCP_CYL12_GRID           0xFFFB /* identifier for cyl12-synchronous DAQ Tx  */

#define     CCP_LEN_ODT              0x07       /* Length of ODT is fixed to 7 Bytes */
#define     CCP_INVALID_MSG          0x00       /* Identifier of a not yet implemented service */



#define     CCP_ODT_OFFSET        (sizeof(Ccp_odt_t) - CCP_ODT_SIZE )
#define     CCP_ODT_SIZE      8
#define     CCP_TEST         0x05

/* PCP channel information of each DAQ */
#define    CCP_DAQ0_PCP_CHNL    0
#define    CCP_DAQ1_PCP_CHNL    1
#define    CCP_DAQ2_PCP_CHNL    2
#define    CCP_DAQ3_PCP_CHNL    3
#define    CCP_DAQ4_PCP_CHNL    4

#endif
