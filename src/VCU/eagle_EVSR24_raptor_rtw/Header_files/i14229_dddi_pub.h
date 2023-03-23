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
 * $Filename__:i14229_dddi_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:19.12.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_dddi_pub$ 
 * $Variant___:4.7.0$ 
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
 * 4.7.0; 0     19.12.2008 MXA2SI
 *   Migrated from Clearcase :
 *   B_BASSVR.7.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229_DDDI_PUB_H
#define _I14229_DDDI_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                   Public header file for the service I14229_Dddi()
 *
 * \scope               [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Definitions
 ***************************************************************************************************
 */


#define RECORD_SIZE_STORE     0x02  /*  size of - Source data identifier record table  */

/*
 ***************************************************************************************************
 * defines used by record: record has - three entries for each block contains
 * Position in source data record,memory size and Source identifier
 ***************************************************************************************************
 */

#define POSITION_ENTRIES      0x00  /* always First position in record is -
                                       Number of Recordentries                    */
#define POSITION_PISDI_MS     0x01  /* Position (low byte) and size (2nd byte) of
                                       Src Data record                            */
#define SDI_POSITION_INRECORD 0x02  /* position of Source data identifier in stored record */


/* Store Record format : Ex: */
/* 0          - Number of Recordentries                                          */
/*              block 1 (first source data id )                                  */
/* 1:               Position (low byte) and size (2nd byte) of Src Data record 1 */
/* 2:               value of Source data identifier                              */
/*              block 2 (second source data id)                                  */
/* 3:               Position (low byte) and size (2nd byte) of Src Data record 2 */
/* 4:               value of Source data identifier                              */
/* ...                                                                           */
/* ...                                                                           */
/*              block x (x'th source data id)                                    */
/* x*2-1            Position (low byte) and size (2nd byte) of Src Data record x */
/* x*2              value of Source data identifier                              */


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/* Type of on entry in table of Dynamically defined data identifiers: */
typedef struct
{
    uint16  Did_u16;                /* Local identifier                              */
    uint8   DefMode_u8;             /* definition mode     */
    uint8   MaxRecords_u8;          /* maximum record entry allowed for each DID     */
    uint32  Record_u32;             /* record for DID - storing format of record is
                                       uint32 size_u32
                                       uint32 address_u32                            */
} I14229_Dddi_DIdVarTable_t;

/* Configuration data structure for mapping RDBI structure to use inside the DDDI function
VERY IMP : If the structure type I14229_Rdbi_DIdTable_t chages in i14229_rdbi_pub.h file then
this structure also should change accordingly */
typedef struct
{
    uint16  RecordDID_u16;      /* record Data identifier            */
    uint16  DIDEndRange_u16;    /* DID End range                     */
    uint8   IdxFunc_u8;         /* Index of corresponding function   */
    uint32  Config_u32;         /* Configuration of function         */

} I14229_Dddi_RdbiTable_t;


/* Summary of configuration constants: */
typedef struct
{
    const I14229_Dddi_DIdVarTable_t *DIdTable_ps; /* Pointer to table of local identifiers    */
    void (* SubFunc01_cfp)(const void *Config_pv, DiagCom_Msg_t *Msg_ps);
    void (* SubFunc02_cfp)(const void *Config_pv, DiagCom_Msg_t *Msg_ps);
    uint8       MaxDIds_u8;                     /* Number of supported LIds(size of table)  */

} I14229_Dddi_Config_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* Configuration data for I14229_Dddi service */
/* Internal use do not change the name */
__PRAGMA_USE__bassvr__10ms__RAM__x32__START
extern I14229_Dddi_Config_t *I14229_Dddi_ConfigIntern_ps;
__PRAGMA_USE__bassvr__10ms__RAM__x32__END

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void I14229_Dddi_Ini(void);
extern void I14229_Dddi(void * Config_pv, DiagCom_Msg_t *Msg_ps );
extern void I14229_Dddi_01(const void * Config_pv, DiagCom_Msg_t *Msg_ps );
extern void I14229_Dddi_02(const void * Config_pv, DiagCom_Msg_t *Msg_ps );
extern uint8 I14229_Dddi_SearchDid(uint16 Did_u16);

extern uint16 I14229_Dddi_ReadByDefMode(void *Statics_pv, uint8 stMode_u8);
extern uint16 I14229_Dddi_ReadByAddress(void *Statics_pv, uint8 stMode_u8);
extern void I14229_Dddi_Record_Ini(void);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END
#endif /* _I14229_DDDI_PUB_H */
