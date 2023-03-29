

#ifndef _ATS_AUTO_CONF_H
#define _ATS_AUTO_CONF_H



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define ATS_MAX_TST_NUM  8
#define ATS_U16_SUPPORT  0
#define ATS_RCC_SUPPORT  0

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


#ifndef _ATS_CfgData_s_DEF
#define _ATS_CfgData_s_DEF

typedef struct
{
    uint8 LimitTypeMsk_C;
    uint8 CnvNorm_C;
    sint16 LowLim_C;
    sint16 UpLim_C;
    sint32 CnvFac_C;
    sint16 CnvOfs_C;
    sint16 DfltVal_C;
} ATS_CfgData_s;

#endif




#ifndef _ATS_CfgDataUint16_s_DEF
#define _ATS_CfgDataUint16_s_DEF

typedef struct
{
    uint8 LimitTypeMsk_C;
    uint8 CnvNorm_C;
    uint16 LowLim_C;
    uint16 UpLim_C;
    sint32 CnvFac_C;
    sint16 CnvOfs_C;
    uint16 DfltVal_C;
} ATS_CfgDataUint16_s;

#endif



/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* IDs for configured ATS tests */
__PRAGMA_USE__ats__10ms__constant__x8__START
extern const uint8 ATS_ID_NOTUSED;

extern const uint8 ACTR_TST_INJ1_ATS;
extern const uint8 ACTR_TST_INJ2_ATS;
extern const uint8 ACTR_TST_INJ3_ATS;
extern const uint8 ACTR_TST_INJ4_ATS;
extern const uint8 ACTR_TST_INJ5_ATS;
extern const uint8 ACTR_TST_INJ6_ATS;
extern const uint8 ACTR_TST_INJ7_ATS;
extern const uint8 ACTR_TST_INJ8_ATS;

__PRAGMA_USE__ats__10ms__constant__x8__END



extern const ATS_CfgData_s ACTR_TST_INJ1_ATS_ATS;
extern const ATS_CfgData_s ACTR_TST_INJ2_ATS_ATS;
extern const ATS_CfgData_s ACTR_TST_INJ3_ATS_ATS;
extern const ATS_CfgData_s ACTR_TST_INJ4_ATS_ATS;
extern const ATS_CfgData_s ACTR_TST_INJ5_ATS_ATS;
extern const ATS_CfgData_s ACTR_TST_INJ6_ATS_ATS;
extern const ATS_CfgData_s ACTR_TST_INJ7_ATS_ATS;
extern const ATS_CfgData_s ACTR_TST_INJ8_ATS_ATS;




__PRAGMA_USE__ats__10ms__constant__x8__START
extern const uint8 ATS_numU16Lim_u8;

__PRAGMA_USE__ats__10ms__constant__x8__END




#endif /* _ATS_AUTO_CONF_H */
