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
 * $Filename__:basutil_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DUE2ABT$ 
 * $Date______:10.11.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:basutil_pub$ 
 * $Variant___:25.0.0$ 
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
 * 25.0.0; 0     10.11.2010 DUE2ABT
 *   first version for maserati
 * 
 * 3.6.0; 0     29.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: basutil_pub.h
 *      Version: \main\13
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _BASUTIL_PUB_H
#define _BASUTIL_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      public utility header file.
 *
 * \scope               [API]
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
#define BASUTIL_ADDR_START_HB    0           /* Start address high byte       */
#define BASUTIL_ADDR_START_MB    1           /* Start address middle byte     */
#define BASUTIL_ADDR_START_LB    2           /* Start address low byte        */
#define BASUTIL_WORD_VAL        16           /* Shift for 16 bits             */
#define BASUTIL_BYTE_VAL         8           /* Shift for 8 bits              */

/* Modes of access function: */
#define BASUTIL_ST_NEWREQUEST     0x00    /* New request                                    */
#define BASUTIL_ST_CONTINUE       0x01    /* Continued request                              */
#define BASUTIL_ST_REPORTLEN      0x02    /* Report number of bytes which would be read or  */
                                          /* written                                        */
/* modes of status */
#define BASUTIL_ST_READY          0x00    /* status : Ready to receive new message              */
#define BASUTIL_ST_WAIT           0x01    /* status : Waiting until background routine finished */
#define BASUTIL_ST_CHECK          0x01    /* status : check permission                          */
#define BASUTIL_ST_STORE          0x02    /* status : copy blocks                               */


/* Return values of compareKey-functions: */
#define BASUTIL_ST_KEY_OK          0x00      /* Keys are identical                             */
#define BASUTIL_ST_INVKEY          0x22      /* Keys are different                             */
#define BASUTIL_ST_KEY_INVLEN      0xFF      /* Must be 0xFF or greater than max seed/key len. */


/* Macro which replace operators (*,/) */
#define BASUTIL_MUL(a,b) ((a)*(b))
#define BASUTIL_DIV(a,b) ((a)/(b))

/* defines for the function which uses the old names -  will be removed later */
#define BasUtil_FixBaudrateAlgorithm  BasUtil_FixBaudRateAlg
#define BasUtil_ThreeByteAlgorithm    BasUtil_3ByteBaudRateAlg
#define BasUtil_IKAlgorithm           BasUtil_IKBaudRateAlg


#define BasUtil_StRbli_Checksum_Ini BasUtil_StRbli_Chksum_Ini
#define BasUtil_BuildChecksum       BasUtil_StRbli_BuildChksum
#define BasUtil_SpRbli_Checksum     BasUtil_SpRbli_Chksum
#define BasUtil_ChecksumState       BasUtil_Rrbli_ChksumState

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Possible return Status values */
/* return values of the call back functions */
typedef enum
{
    BASUTIL_ST_OK =0,         /* Requested action completed successfully     */
    BASUTIL_ST_TIMEOUT,       /* Time for access expired; call routine again */
    BASUTIL_ST_BUSY,          /* process started but not finished            */
    BASUTIL_ST_OUTOFMEM,      /* out of Memory                               */
    BASUTIL_ST_DENIED,        /* Access is denied                            */
    BASUTIL_ST_REJECTED,      /* condition is not correct                    */
    BASUTIL_ST_INV_LENGTH,    /* Number of data in source buffer does not    */
                              /* correspond with expected number of data     */
    BASUTIL_ST_INV_BAUDRATE,  /* invalid baudrate                            */
    BASUTIL_ST_INV_SUBFUNC,   /* invalid subfunction type                    */
    BASUTIL_ST_OUTOFRANGE,    /* request out of range                        */
    BASUTIL_ST_EXCEEDED_ATTEMTS, /* exceeded no of attempts                  */
    BASUTIL_ST_NOT_STARTED,   /* start routine is not started                */
    BASUTIL_ST_CHKSUM_ERR,    /* checksum error                              */
    BASUTIL_ST_WRITE_ERR,     /* programming error                           */
    BASUTIL_ST_ERASE_ERR,     /* erase error                                 */
    BASUTIL_ST_USER           /* user configurable status                    */
}BasUtil_stFunc_e;

/* typedef for Seed-key utility            */
/* Type of getSeed-function            */
/* Parameters:  uint32 Configuration   */
/*              uint8* Buffer for seed */
/* Return:      uint8  Length of seed  */
typedef uint8 BasUtil_Key_GetSeed_t(uint32, uint8*);

/* Type of compareKey-function              */
/* Parameters:  uint32 Configuration        */
/*              uint8* Pointer to key       */
/*              uint8  Length of key        */
/* Return:      uint8  Result of comparison */
typedef uint8 BasUtil_Key_Compare_t(uint32, uint8*, uint8);


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
/* Current seed: */
__PRAGMA_USE__bassvr__10ms__RAM__arr8__START
extern uint8 BasUtil_Key_Seed_u8[];

/* Current key: */
extern uint8 BasUtil_Key_u8[];
__PRAGMA_USE__bassvr__10ms__RAM__arr8__END

__PRAGMA_USE__bassvr__10ms__constant__arr32__START
/* Pointer to table of supported seed functions: */
extern BasUtil_Key_GetSeed_t* const BasUtil_Key_GetSeed_pcs[];

/* Pointer to table of supported key algorithms: */
extern BasUtil_Key_Compare_t* const BasUtil_Key_CompareKey_pcs[];
__PRAGMA_USE__bassvr__10ms__constant__arr32__END

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
/* Tansform 24-bit address (KWP2000) to 32-bit absolute address */
extern uint32 BasUtil_GetAddress32(const uint8* MsgBuf_pu8);
/* returns the size of the address configuration BasUtil_AddrConfig_cs[]*/
extern uint8  BasUtil_Size_AddrCfg(void);
/* returns the configured Invalid address  */
extern uint32 BasUtil_InvalidAddr(void);

/* Ecu reset utility functions */
extern void BasUtil_EcuHardReset(void);
extern void BasUtil_EcuPowerOnReset(void);
extern void BasUtil_EcuRBProgReset(void);

/* start/stop/request Routine by local identifier utility functions: must be configured for 14230
   services only. Checksum calculation routines for serial applications */
extern void  BasUtil_StRbli_Chksum_Ini(void);
extern uint8 BasUtil_StRbli_BuildChksum(DiagCom_Msg_t *Msg_ps);
extern uint8 BasUtil_SpRbli_Chksum(DiagCom_Msg_t *Msg_ps);
extern uint8 BasUtil_Rrbli_ChksumState(DiagCom_Msg_t *Msg_ps);

/* functions for baudrate algorithm : must be configured for 14230 - Start diagnostic session
   service only */
extern uint8 BasUtil_FixBaudRateAlg(const DiagCom_Msg_t *Msg_ps);
extern uint8 BasUtil_3ByteBaudRateAlg(const DiagCom_Msg_t *Msg_ps);
extern uint8 BasUtil_IKBaudRateAlg(const DiagCom_Msg_t *Msg_ps);

/* Dummy seed & key algorithm: */
extern BasUtil_Key_GetSeed_t BasUtil_GetRandomSeed;
extern BasUtil_Key_Compare_t BasUtil_CompareKey_Lvl1;
extern BasUtil_Key_Compare_t BasUtil_CompareKey_Lvl3;
extern BasUtil_Key_Compare_t BasUtil_CompareKey_Lvl5;

extern uint32 CBUtil_TestIB( uint32 StartBlk_u32);

extern void BasUtil_GetRandom(uint8 numBytes_u8, uint8* Buffer_pu8);
extern void BasUtil_Random_Ini(void);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END


#endif /* _BASUTIL_PUB_H */
