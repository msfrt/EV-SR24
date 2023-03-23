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
 * $Filename__:bsp742_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VIN4KOR$ 
 * $Date______:13.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:bsp742_priv$ 
 * $Variant___:1.7.0$ 
 * $Revision__:1$ 
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
 * 1.7.0; 1     13.05.2010 VIN4KOR
 *   Misra Warning Removal
 * 
 * 1.7.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: bsp742_priv.h
 *      Version: \main\basis\b_CORE\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _BSP742_PRIV_H
#define _BSP742_PRIV_H

/**
 ***************************************************************************************************
 * moduledescription  :
 *                        private header for _BSP742_PRIV_H device driver
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Diagnosis Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Diagnosis Type definitions
 ***************************************************************************************************
 *                                                                SPI error
 *                                                                | COM error
 *                                                                | | open load
 *                                                                | | | overload
 *                updated since last call                         | | | | short to batter
 *                | testimpulse since last call                   | | | | or overtemperature
 *                | | testimpulse running                         | | | | | overtemperature
 *                | | | testimpulse requested                     | | | | | | short to ground
 *                | | | | central error flag                      | | | | | | | short to batt
 *                | | | | | central overtemp. flag                | | | | | | | |
 *                | | | | | |                                     | | | | | | | |
 *                | | | | | | diag running(for tst verify)        | | | | | | | |
 *                | | | | | | | diag requested (for tst verify)   | | | | | | | |
 *                | | | | | | | |                                 | | | | | | | |
 *                | | | | | | | |                                 | | | | | | | |
 *                | | | | | | | |         TestedFlags             | | | | | | | |
 *                | | | | | | | |         OT                      | | | | | | | |
 *                | | | | | | | |         | OL                    | | | | | | | |
 *                | | | | | | | |         | | SCG                 | | | | | | | |
 *                | | | | | | | |         | | | SCB               | | | | | | | |
 *                | | | | | | | |         | | | |                 | | | | | | | |
 *                V V V V V V V V         V V V V                 V V V V V V V V
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * staReturn_u32 |N| | | | | | | |0|0|0|0| | | | |0|0|0|0|0|0|0|0| | | | | | | | | valReturn
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *               |       |       |       |       |       |       |       |       |
 *               3130292827262524....                          ...7 6 5 4 3 2 1 0
 *           +-+-+                                                   +-+-+-+-+-+-+
 *           |n|x|<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<| | | | | | | StageError_u8
 *           +-+-+                                                   +-+-+-+-+-+-+
 *   +-+-+-+-+-+-+ +-+-+-+
 *   |n|x|x|d|d|f|<| | | |<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< StageFlags_u8
 *   +-+-+-+-+-+-+ +-+-+-+
 *       +-+-+-+-+       +-+-+                                   +-+-+
 *       |n|x|x|x|<<<<<<<| | |<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<| | |<<<<<<<<<<<< ChipError_u8
 *       +-+-+-+-+       +-+-+                                   +-+-+
 */

/*------------------------------------------------------------------------------------------------*/
/* stage data                                                                                     */
/*------------------------------------------------------------------------------------------------*/
typedef struct
{
    void (*const  TstImpStart_cfp)(void);      /* function ptr to TestImpulse start               */
    const uint16 param1_cu16;                  /* PORT                                            */
    const uint16 param2_cu16;                  /* PIN                                             */
    const uint16 numLowTime_cu16;              /* low testimpulse time                            */
    const uint16 numHighTime_cu16;             /* low testimpulse time                            */
    const uint16 sport_cu16;                   /* PORT status line                                */
    const uint16 spin_cu16;                    /* PIN  status line                                */
} Bsp742_DiagStage_ct;
#define Bsp742_DiagStage_ct_NULL   Bsp742_Diag_ERROR,0,0,0,0,0,0      /* set struct to init value */


/* defines for the StageError_u8 */
#define BSP742_STAGEERROR_STB           0x01   /* short to U battery                              */
#define BSP742_STAGEERROR_STG           0x02   /* short to ground                                 */
#define BSP742_STAGEERROR_OVT           0x04   /* overtemperature                                 */
#define BSP742_STAGEERROR_SBO           0x08   /* short to battery or overtemperature             */
#define BSP742_STAGEERROR_OVL           0x10   /* overload                                        */
#define BSP742_STAGEERROR_OPL           0x20   /* open load                                       */
#define BSP742_STAGEERROR_NEW           0x80   /* new value indication                            */
/**/
#define BSP742_STAGEERROR_MASK         (BSP742_STAGEERROR_STB | \
                                        BSP742_STAGEERROR_STG | \
                                        BSP742_STAGEERROR_OVT | \
                                        BSP742_STAGEERROR_SBO | \
                                        BSP742_STAGEERROR_OVL | \
                                        BSP742_STAGEERROR_OPL)

#define BSP742_STAGEERROR_SHIFT        (0-0)   /* bit0..6 errors                                  */

#define BSP742_STAGEERROR_NEW_SHIFT    (31-7)  /* NEW indication                                  */

/* defines for the StageFlags_u8 */
#define BSP742_STAGEFLAG_TSTREQ         0x01   /* BIT 0 testimpulse requested                     */
#define BSP742_STAGEFLAG_TSTRUN         0x02   /* BIT 1 testimpulse running                       */
#define BSP742_STAGEFLAG_TSTFIN         0x04   /* BIT 2 testimpulse finished                      */
#define BSP742_STAGEFLAG_FORBIDDEN      0x08   /* BIT 3 testimpulse allowed                       */
#define BSP742_STAGEFLAG_DIAGRUN        0x10   /* BIT 4 Diag running                              */

#define BSP742_STAGEFLAG_LOW            0x10   /* level of status line during low part            */
#define BSP742_STAGEFLAG_HIG            0x20   /* level of status line during high part           */

#define BSP742_STAGEFLAG_STATUS         0x40   /* BIT 6 level of staus line in first part         */
#define BSP742_STAGEFLAG_NEW            0x80   /* BIT 7 new value indication                      */
/**/
#define BSP742_STAGEFLAG_TST_MASK      (BSP742_STAGEFLAG_TSTREQ | \
                                        BSP742_STAGEFLAG_TSTRUN | \
                                        BSP742_STAGEFLAG_TSTFIN)

#define BSP742_STAGEFLAG_STAT_MASK     (BSP742_STAGEFLAG_LOW | \
                                        BSP742_STAGEFLAG_HIG)

#define BSP742_STAGEFLAG_STAT_OK       (BSP742_STAGEFLAG_LOW | \
                                        BSP742_STAGEFLAG_HIG)
#define BSP742_STAGEFLAG_STAT_SCG_OT   (BSP742_STAGEFLAG_LOW)
#define BSP742_STAGEFLAG_STAT_SCB_OL   (BSP742_STAGEFLAG_HIG)

#define BSP742_STAGEFLAG_TST_SHIFT     (30-2)  /* bit0..3 flags                                   */

#define BSP742_STAGEFLAG_NEW_SHIFT     (31-7)  /* NEW indication                                  */

/* defines for the TestedFlags_u8 */
#define BSP742_TESTEDFLAG_STB           0x01   /* short to U battery                  */
#define BSP742_TESTEDFLAG_STG           0x02   /* short to ground                     */
#define BSP742_TESTEDFLAG_OVT           0x04   /* overtemperatureg                    */
#define BSP742_TESTEDFLAG_OPL           0x08   /* open load                           */
#define BSP742_TESTEDFLAG_FD            0x10   /* frequence drift                     */
#define BSP742_TEST_COND_MATCH          0x80u
#define BSP742_TESTEDFLAG_HIGH         (BSP742_TESTEDFLAG_STG | \
                                        BSP742_TESTEDFLAG_OVT )

#define BSP742_TESTEDFLAG_LOW          (BSP742_TESTEDFLAG_STB | \
                                        BSP742_TESTEDFLAG_OPL )

#define BSP742_TESTEDFLAG_MASK         (BSP742_TESTEDFLAG_STB | \
                                        BSP742_TESTEDFLAG_STG | \
                                        BSP742_TESTEDFLAG_OVT | \
                                        BSP742_TESTEDFLAG_OPL | \
                                        BSP742_TESTEDFLAG_FD  )

#define BSP742_TESTEDFLAG_SHIFT         (16-0)  /*                     */



typedef struct
{
    /* common stage errors */
    uint8   TestedAct_u8;
    uint8   StageError_u8;
    uint8   StageFlags_u8;
    uint8   TstStateFlags_u8;
    uint8   ResultLow_u8;
    uint8   ResultHigh_u8;
    uint16  xTimeStmp_u16;
} Bsp742_DiagStage_t;
#define Bsp742_DiagStage_t_NULL   0,0,0,0,0,0,0
/*------------------------------------------------------------------------------------------------*/
/* chip data                                                                                      */
/*------------------------------------------------------------------------------------------------*/
typedef struct
{
    uint16 StageLoop_u16;
    uint8  ChipTstImpReqCnt_u8;
} Bsp742_DiagChip_t;
#define Bsp742_DiagChip_t_NULL   0,0         /* set strct to init value */

/*------------------------------------------------------------------------------------------------*/
/* global diagnostic data                                                                         */
/*------------------------------------------------------------------------------------------------*/

typedef struct
{
    uint16  servedChip_u16;
    uint16  servedStage_u16;
    uint16  retrycnt_u16;
    bool    oriLevel_b;                        /* original level   before testimpulse             */
} Bsp742_Diag_t;
#define Bsp742_Diag_t_NULL   0,0,0,0           /* set strct to init value */

#define BSP742_MAX_TESTIMP_RETRY            10 /* maximum retry to generate a testimpuslse        */


/* This struct contains the function pointers to the functions for switching powerstages of all   */
/* Bsp742 devices which are present at the project.                                               */
typedef struct
{
    void   (*const Bsp742_Control_pf)(bool);
    void   (*const Bsp742_Ppty_pf)(uint16,uint16,bool);
    const   uint8  Bsp742_Off_u8;
} Bsp742_Control_ct;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool   Bsp742_Diag_Testimpulse (uint16 numChip_u16);
extern void   Bsp742_Diag_ERROR       (void);
extern void   Bsp742_Diag_Sequence    (void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void   Bsp742_Diag_PORT        (void);
extern void   Bsp742_Diag_PORT_toggle (void);
extern void   Bsp742_Diag_PORT_end    (void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
#if (BSP742_NUM_ICS > 0)
__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Bsp742_Control_ct       Bsp742_Control_cs[][BSP742_NUMPWSTG];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__InitRAM__s32__START
extern       Bsp742_DiagStage_t      Bsp742_DiagStage_s[];
__PRAGMA_USE__hwe__10ms__InitRAM__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Bsp742_DiagStage_ct     Bsp742_DiagStage_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END


__PRAGMA_USE__hwe__10ms__InitRAM__s32__START
extern       Bsp742_DiagChip_t       Bsp742_DiagChip_s[];
extern       Bsp742_Diag_t           Bsp742_Diag_s;
__PRAGMA_USE__hwe__10ms__InitRAM__s32__END
#endif


/* _BSP742_PRIV_H                                                                                 */
#endif
