/*<RBHead>
 ***********************************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***********************************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:msc_template_conf.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:MMO1SI$
 * $Date______:24.11.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:msc_template_conf$
 * $Variant___:1.13.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.13.0; 0     24.11.2010 MMO1SI
 *   Remove old deprecated interface Msc_SndCmdImmd
 *   Improve PCP channel latency
 *   Correct PCP channel run times
 *   Activate confhash validation checker
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: msc_template_conf.ht
 *      Version: \main\basis\b_CORE\3
 * 
 * $
 ***********************************************************************************************************************
 </RBHead>*/

#ifndef _MSC_AUTO_CONF_H
#define _MSC_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***********************************************************************************************************************
 * \moduledescription
 * configuration of MSC low level driver
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* device IDs */
#define MSC_DEV_CJ950_1                 0UL
#define MSC_DEV_CJ950_2                 1UL
#define MSC_DEV_CJ950_3                 2UL
#define MSC_DEV_CJ950_IDX_FRST          0UL
#define MSC_DEV_CJ950_IDX_LST           2UL

/* command IDs */
#define MSC_CMD_CJ950_DIAGET            0UL
#define MSC_CMD_CJ950_RD_CONREG         1UL
#define MSC_CMD_CJ950_RD_CONREG3        2UL
#define MSC_CMD_CJ950_RD_IDENTREG       3UL
#define MSC_CMD_CJ950_RD_OUT1516        4UL
#define MSC_CMD_CJ950_RD_PM_INFO        5UL
#define MSC_CMD_CJ950_RD_VMT_INFO       6UL
#define MSC_CMD_CJ950_TSTSET            7UL
#define MSC_CMD_CJ950_WR_ABEBIT_CONREG4  8UL
#define MSC_CMD_CJ950_WR_CONREG1        9UL
#define MSC_CMD_CJ950_WR_CONREG2        10UL
#define MSC_CMD_CJ950_WR_CONREG3        11UL
#define MSC_CMD_CJ950_WR_CONREG4        12UL
#define MSC_CMD_CJ950_WR_OUT1516        13UL
#define MSC_CMD_CJ950_WR_RESET          14UL
#define MSC_CMD_CJ950_WR_START          15UL

/* signal IDs */
#define MSC_SIG_A_P_EV1                 0x00000002UL
#define MSC_SIG_A_P_EV2                 0x00010002UL
#define MSC_SIG_A_P_EV3                 0x00020002UL
#define MSC_SIG_A_P_EV4                 0x00030002UL
#define MSC_SIG_A_P_EV5                 0x00040002UL
#define MSC_SIG_A_P_EV6                 0x00050004UL
#define MSC_SIG_A_P_EV7                 0x00060003UL
#define MSC_SIG_A_P_EV8                 0x00070003UL
#define MSC_SIG_A_S_HFMSE               0x00080000UL
#define MSC_SIG_A_S_HFMSE2              0x00090000UL
#define MSC_SIG_CJ135_HEATER_1          0x000A0003UL
#define MSC_SIG_CJ135_HEATER_2          0x000B0004UL
#define MSC_SIG_CJ950_DUMMY_3_17        0x000C0001UL
#define MSC_SIG_CJ950_DUMMY_3_18        0x000D0001UL
#define MSC_SIG_O_F_ECUA010             0x000E0004UL
#define MSC_SIG_O_F_ECUA023             0x000F0003UL
#define MSC_SIG_O_F_ECUA024             0x00100004UL
#define MSC_SIG_O_F_ECUA045             0x00110004UL
#define MSC_SIG_O_F_ECUA046             0x00120004UL
#define MSC_SIG_O_F_ECUA054             0x00130004UL
#define MSC_SIG_O_F_ECUA093             0x00140003UL
#define MSC_SIG_O_F_ECUK057             0x00150004UL
#define MSC_SIG_O_F_ECUK084             0x00160004UL
#define MSC_SIG_O_F_ECUK088             0x00170004UL
#define MSC_SIG_O_S_A001                0x00180001UL
#define MSC_SIG_O_S_A002                0x00190001UL
#define MSC_SIG_O_S_A004                0x001A0001UL
#define MSC_SIG_O_S_A009                0x001B0001UL
#define MSC_SIG_O_S_A011                0x001C0001UL
#define MSC_SIG_O_S_A025                0x001D0001UL
#define MSC_SIG_O_S_A031                0x001E0001UL
#define MSC_SIG_O_S_A033                0x001F0000UL
#define MSC_SIG_O_S_A075                0x00200001UL
#define MSC_SIG_O_S_A094                0x00210001UL
#define MSC_SIG_O_S_K012                0x00220000UL
#define MSC_SIG_O_S_K020                0x00230000UL
#define MSC_SIG_O_S_K021                0x00240000UL
#define MSC_SIG_O_S_K036                0x00250000UL
#define MSC_SIG_O_S_K037                0x00260000UL
#define MSC_SIG_O_S_K038                0x00270000UL
#define MSC_SIG_O_S_K039                0x00280000UL
#define MSC_SIG_O_S_K054                0x00290000UL
#define MSC_SIG_O_S_K055                0x002A0000UL
#define MSC_SIG_O_S_K056                0x002B0000UL
#define MSC_SIG_O_S_K059                0x002C0000UL
#define MSC_SIG_O_S_K071                0x002D0000UL
#define MSC_SIG_O_S_K072                0x002E0000UL
#define MSC_SIG_O_S_K073                0x002F0000UL


/* _LIBRARYABILITY_H */
#endif

/* _MSC_AUTO_CONF_H */
#endif
