#ifndef _UACC_AUTO_CONF_H
#define _UACC_AUTO_CONF_H

/**
 ***************************************************************************************************
 * \moduldescription
 *      Configuration header for UACC module :
 *
 * \scope              [CONF]
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
 
  #define UACC_DATA_SWAP   TRUE  /* swap feature enabled or not */

  
/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Indices of available access utility functions: */
enum
{
    UACC_READACTVAL_E,
    UACC_SETACTVAL_E,
    UACC_DISABLEACTVAL_E,
    UACC_READ_ADDRESS_E,
    UACC_WRITE_EEPROM_E,
    UACC_READ_EEPROM_E,
    UACC_WRITE_ADDRESS_E,
    UACC_READMULTIPLEMEMAREA_E,
    UACC_READCALIBRATIONDATA_E,
    UACC_READSIGNALVAL_E,
    TPROT_READCERTIFICATE_E,
    TPROT_WRITECERTIFICATE_E,
    TPROT_CLEARCERTIFICATE_E,
    UACC_SETDEFAULTACTVAL_E,
    UACC_FREEZEACTVAL_E,
    UACC_READBITS_E,
    UACC_DISABLEACTVALEX_E,
    UACC_READSIGNALVALINT_E,
    UACC_SETACTVALEX_E,
    UACC_ATS_GETST_E,
    UACCAPPL_SESSIONINF_E,
    UACC_NUM_ENTRIES_E        /* Number of table entries                        */
};

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */


extern UAcc_ConfEeprom_t const UAcc_ID0100;

extern UAcc_AreaTab_t const UAcc_Unused_Byte;
extern UAcc_ConfSignal_t const  UAcc_Sig_Ctrl_st;






#endif
