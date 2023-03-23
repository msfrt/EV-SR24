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
 * $Filename__:tprot_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:03.02.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:tprot_pub$ 
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
 * 1.11.0; 0     03.02.2010 AWL2SI
 *   B_TPROT.11.0.0
 * 
 * 1.9.0; 0     27.01.2009 AWL2SI
 *   B_TPROT.9.0.0
 * 
 * 1.8.0; 0     16.12.2008 AWL2SI
 *   update from CC to B_TPROT.8.0.0
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _TPROT_PUB_H
#define _TPROT_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Public header file for module TPROT.
 *
 * \scope               [API]
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define     D1_DU32         1024
#define     D2_DU32         ((D1_DU32 + 7) / 8)
#define     D3_DU32         56
#define     D4_DU32         16
#define     D5_DU32         868
#define     D6_DU32         2
#define     D7_DU32         20
#define     AUTH_D1_DU32    1060
#define     AUTH_D2_DU32    268
#define     RTTP_D1_DU32    928
#define     RTTP_D2_DU32    12
#define     FW_D1_DU32      4020
#define     FW_D2_DU32      1392
#define     SIGN_D1_DU32    1044
#define     HASH_D1_DU32    192
#define     TP_INI_D1_DU32  1000
#define     TP_INI_D2_DU32  4
#define     CEP_D1_DU32     236
#define     CIPHER_D1_DU32  44


#define     KEY_ID_RB_AUTH_TSW_ASYM    ((Keys_Misc_t)  6)
#define     KEY_ID_RB_AUTH_TSW_SYMCCP  ((Keys_Misc_t)  7)
#define     KEY_ID_RB_TSW              ((Keys_Misc_t)101)
#define     KEY_ID_RB_REPROG           ((Keys_Misc_t)102)
#define     KEY_ID_SWITCHOVER          ((Keys_Misc_t)103)

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef enum {HASH_T1_E0 = 0,
              HASH_T1_E1 = 1,
              HASH_T1_E2 = 2,
              HASH_T1_E3 = 3,
              HASH_T1_E4 = 4,
              HASH_T1_E5 = 5 } Hash_T1_t;

typedef enum {AUTH_T1_E0 = 0,
              AUTH_T1_E1 = 1,
              AUTH_T1_E2 = 2,
              AUTH_T1_E3 = 3 } Auth_T1_t;

typedef enum {AUTH_T3_E0 = 0,
              AUTH_T3_E1 = 1 } Auth_T3_t;

typedef enum {AUTH_T4_E0 = 0,
              AUTH_T4_E1 = 1 } Auth_T4_t;

typedef enum {FW_T1_E0 = 0,
              FW_T1_E1 = 1,
              FW_T1_E2 = 2,
              FW_T1_E3 = 3
             } Fw_T1_t;

typedef enum
{
    PASSWD_T1_E0 = 0,
    PASSWD_T1_E1 = 1,
    PASSWD_T1_E2 = 2,
    PASSWD_T1_E3 = 3
} Passwd_T1_t;

typedef enum
{
    RTTP_T1_E0 = 0,
    RTTP_T1_E1 = 1,
    RTTP_T1_E2 = 2,
    RTTP_T1_E3 = 3
} Rttp_T1_t;

typedef enum
{
    CEP_T1_E0 = 0,
    CEP_T1_E1 = 1,
    CEP_T1_E2 = 2,
    CEP_T1_E3 = 3
} Cep_T1_t;

typedef struct {
    uint8 const*        E1_cpu8;
    uint32              E2_u32;
    uint32              E3_u32;
    uint8 const*        E4_cpu8;
    uint8 const*        E5_cpu8;

    uint32              E6_u32;
} T1_t;

typedef struct
{
    uint8               E1_u8;
    const T1_t*    E2_cps;
} T3_t;

typedef struct
{
    uint32              E1_u32;
    uint32              E2_u32;
    uint32              E3_u32;
    uint32              E4_u32;
    uint32              E5_u32;
    const T1_t*    E6_pcs;

} T2_t;

typedef struct
{
    uint8       E1_u8;
    uint16      E2_u16;

    uint32      E3_u32;


    const T2_t *E4_ps;
} T4_t;

typedef struct
{
    uint32      E1_au32[D6_DU32];
    uint32      E2_u32;
} T6_t;

typedef struct
{
    uint8   E1_u8;
    uint8   E2_u8;
    uint8   E3_u8;
    bit8    E4_b8;
} T8_t;

typedef struct
{
    uint32              E1_u32;
    uint32              E2_u32;
    uint8*              E3_pu8;
} Fw_T2_t;



typedef enum
{
    ECUMODE_APPLICATION_E = 0,
    ECUMODE_SERIAL_E = 1
} EcuMode_ModeType_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

extern void Auth_F1(uint32*);
extern void Auth_F2(uint32*);
extern Auth_T3_t Auth_F3(uint32, uint8*, uint32*, uint8);
extern Auth_T4_t Auth_F4(const uint8*, const uint32, uint32*, const T1_t*);
extern Auth_T1_t  Auth_F5(uint32*);
extern void Rttp_F1(uint32*);
extern void Rttp_F2(uint32*);
extern void Rttp_F3(bool, uint32*);
extern void Fw_F2(uint32*);
extern bool Fw_F3(uint32*, uint32, uint32);
extern bool Fw_F4(uint32*, uint8*, uint32);
extern bool Fw_F5(uint32*);
extern Fw_T1_t Fw_F6(uint32*);
extern sint8 Fw_F7(uint32*, Fw_T2_t**);
extern bool Passwd_F1(Passwd_T1_t, uint8*, uint32*);
extern bool Sign_F1(const uint8*, const uint8*, uint32*, uint8);
extern void Sign_F2(uint32*);
extern bool Sign_F3(uint32*, bool*);
extern void Hash_F1(uint32*);
extern void Hash_F2(uint32*, const uint8*, const uint32);
extern void Hash_F3(uint8*, uint32*);
extern Hash_T1_t Hash_F4(uint32*, const uint8*, const uint32, uint8*);
extern Rttp_T1_t Rttp_F4(uint32*);
extern void EcuMode_F1(uint8 const**, uint32*);
extern bool EcuMode_F2(void);
extern void Cipher_F1(uint32*, const uint8 [][D4_DU32], const uint32);
extern void Cipher_F2(uint32*, const uint32);
extern void Cipher_F3(uint32*, uint8*, uint32, uint8);
extern const T1_t* CfgSrv_F1(uint8);
extern void Cep_F1(uint32*);
extern Cep_T1_t Cep_F2(uint32*);
extern bool PavData_F1(void);



extern void Tprot_Prog_Ini(void);
extern void Tprot_Ini(uint32*);
extern EcuMode_ModeType_t EcuMode_GetMode(void);

__PRAGMA_USE__CODE__tprot__NormalSpeed__START
extern uint16 Tprot_ClearCertificate(void *xStatics_pv, uint8 stMode_u8);
extern uint16 Tprot_ReadCertificate(void *xStatics_pv, uint8 stMode_u8);
extern uint16 Tprot_WriteCertificate(void *xStatics_pv, uint8 stMode_u8);
__PRAGMA_USE__CODE__tprot__NormalSpeed__END

/* _TPROT_PUB_H */
#endif
