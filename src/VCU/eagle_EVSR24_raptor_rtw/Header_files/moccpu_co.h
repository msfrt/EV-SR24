/* EasyCASE V6.5 18.02.2010 17:27:08 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,12632256,0,0,0,16711680,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=System,,100,1,-13,0,700,0,0,0,0,0,0,1,2,1,34,96,96
PrinterFont=Courier,,100,65530,-83,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=1 */
/* EasyCASE ( 1
   answer values for CHISTE part response */  


#ifndef _MOCCPU_CO_H
#define _MOCCPU_CO_H

/* Algorithm for calculation response to monitoring module                                          */
/* A1  MoCCom_Response = MoCCom_RespCorrVal[MoCCom_Query & MOCCOM_QUERY_4BIT_MSK];                  */
/* A2  Call MO-Code for PCP                                                                         */
/* A3. Call each L2 Module to get their runtime response if it was called in the correct order      */
/* A4. Call MoCPFC_Co_Proc to close runtime check of L2 function => result in MoCPFC_PartResp       */
/* B1. Call MoCCPU_Co_SeqStrt => MoCCPU_TempRes is initialized with zero                            */
/* B2. Call each FIT module if present => MoCCPU_TempRes is accumulated with specific module IDs.   */
/* B3. Call Chiste if active => MoCCPU_TempRes is XOR-ed with new partial response from Chiste      */
/* B4. Call OTCG if active => MoCCPU_TempRes is XOR-ed with new partial response from OTCG          */
/* B5. Call MoCCPU_Co_SeqEnd => MoCCPU_TempRes is copied to MoCCPU_PartResp.                        */
/* C1. Call MoCCom_Co_Proc => Complete response is calculated XOR-ed with following                 */
/*                                                                                                  */
/*         MoCCom_Response =   MoCCom_Response                Query-specific Correction Value       */
/*                           ^ MoCPFC_PartResp                Response from program flow check      */
/*                           ^ MoCCPU_PartResp                Response from FIT / OTCG / CHISTE     */
/*                           ^ Pcp_Mon_Data_s.xAnswer_u32;    Response from PCP monitoring          */
/*                                                                                                  */


/* response values from Chiste Part */
#define MOCCPU_CO_CHISTE_RESP_0   0x1D261D26UL   /* Init Chiste 0xF0F0F0F0 */
#define MOCCPU_CO_CHISTE_RESP_1   0x23BD23BDUL   /* Init Chiste 0xE1E1E1E1 */
#define MOCCPU_CO_CHISTE_RESP_2   0x2A542A54UL   /* Init Chiste 0xD2D2D2D2 */
#define MOCCPU_CO_CHISTE_RESP_3   0x30EB30EBUL   /* Init Chiste 0xC3C3C3C3 */
#define MOCCPU_CO_CHISTE_RESP_4   0x37823782UL   /* Init Chiste 0xB4B4B4B4 */
#define MOCCPU_CO_CHISTE_RESP_5   0x3E193E19UL   /* Init Chiste 0xA5A5A5A5 */
#define MOCCPU_CO_CHISTE_RESP_6   0x44B044B0UL   /* Init Chiste 0x96969696 */
#define MOCCPU_CO_CHISTE_RESP_7   0x4B474B47UL   /* Init Chiste 0x87878787 */
#define MOCCPU_CO_CHISTE_RESP_8   0x51DE51DEUL   /* Init Chiste 0x78787878 */
#define MOCCPU_CO_CHISTE_RESP_9   0x58755875UL   /* Init Chiste 0x69696969 */
#define MOCCPU_CO_CHISTE_RESP_A   0x5F0C5F0CUL   /* Init Chiste 0x5A5A5A5A */
#define MOCCPU_CO_CHISTE_RESP_B   0x65A365A3UL   /* Init Chiste 0x4B4B4B4B */
#define MOCCPU_CO_CHISTE_RESP_C   0x6C3A6C3AUL   /* Init Chiste 0x3C3C3C3C */
#define MOCCPU_CO_CHISTE_RESP_D   0x72D172D1UL   /* Init Chiste 0x2D2D2D2D */
#define MOCCPU_CO_CHISTE_RESP_E   0x79687968UL   /* Init Chiste 0x1E1E1E1E */
#define MOCCPU_CO_CHISTE_RESP_F   0xFFFFFFFFUL   /* Init Chiste 0x0F0F0F0F */

/* response values from OTCG part      */
/* => done by include moccpu_co_otcg.h */


#if(MOCCPU_IT_SY==0)
        /* Calculate response values for chiste part response */
        #define MOCCPU_CO_PART_RESP_0 ( MOCCPU_CO_CHISTE_RESP_0 )
        #define MOCCPU_CO_PART_RESP_1 ( MOCCPU_CO_CHISTE_RESP_1 )
        #define MOCCPU_CO_PART_RESP_2 ( MOCCPU_CO_CHISTE_RESP_2 )
        #define MOCCPU_CO_PART_RESP_3 ( MOCCPU_CO_CHISTE_RESP_3 )
        #define MOCCPU_CO_PART_RESP_4 ( MOCCPU_CO_CHISTE_RESP_4 )
        #define MOCCPU_CO_PART_RESP_5 ( MOCCPU_CO_CHISTE_RESP_5 )
        #define MOCCPU_CO_PART_RESP_6 ( MOCCPU_CO_CHISTE_RESP_6 )
        #define MOCCPU_CO_PART_RESP_7 ( MOCCPU_CO_CHISTE_RESP_7 )
        #define MOCCPU_CO_PART_RESP_8 ( MOCCPU_CO_CHISTE_RESP_8 )
        #define MOCCPU_CO_PART_RESP_9 ( MOCCPU_CO_CHISTE_RESP_9 )
        #define MOCCPU_CO_PART_RESP_A ( MOCCPU_CO_CHISTE_RESP_A )
        #define MOCCPU_CO_PART_RESP_B ( MOCCPU_CO_CHISTE_RESP_B )
        #define MOCCPU_CO_PART_RESP_C ( MOCCPU_CO_CHISTE_RESP_C )
        #define MOCCPU_CO_PART_RESP_D ( MOCCPU_CO_CHISTE_RESP_D )
        #define MOCCPU_CO_PART_RESP_E ( MOCCPU_CO_CHISTE_RESP_E )
        #define MOCCPU_CO_PART_RESP_F ( MOCCPU_CO_CHISTE_RESP_F )
#else
  #if(MOCCPU_IT_SY==1)
        /* Calculate correction values for FIT part response       */
        /* correction for FIT part is done in MoExe_Co             */ 
        #define MOCCPU_CO_PART_RESP_0 ( 0x1D261D26UL )
        #define MOCCPU_CO_PART_RESP_1 ( 0x23BD23BDUL )
        #define MOCCPU_CO_PART_RESP_2 ( 0x2A542A54UL )
        #define MOCCPU_CO_PART_RESP_3 ( 0x30EB30EBUL )
        #define MOCCPU_CO_PART_RESP_4 ( 0x37823782UL )
        #define MOCCPU_CO_PART_RESP_5 ( 0x3E193E19UL )
        #define MOCCPU_CO_PART_RESP_6 ( 0x44B044B0UL )
        #define MOCCPU_CO_PART_RESP_7 ( 0x4B474B47UL )
        #define MOCCPU_CO_PART_RESP_8 ( 0x51DE51DEUL )
        #define MOCCPU_CO_PART_RESP_9 ( 0x58755875UL )
        #define MOCCPU_CO_PART_RESP_A ( 0x5F0C5F0CUL )
        #define MOCCPU_CO_PART_RESP_B ( 0x65A365A3UL )
        #define MOCCPU_CO_PART_RESP_C ( 0x6C3A6C3AUL )
        #define MOCCPU_CO_PART_RESP_D ( 0x72D172D1UL )
        #define MOCCPU_CO_PART_RESP_E ( 0x79687968UL )
        #define MOCCPU_CO_PART_RESP_F ( 0xFFFFFFFFUL )
  #else
    #if(MOCCPU_IT_SY==2)
        /* Calculate response values for OTCG part response */
        #define MOCCPU_CO_PART_RESP_0 ( MOCCPU_CO_OTCG_RESP_0 )
        #define MOCCPU_CO_PART_RESP_1 ( MOCCPU_CO_OTCG_RESP_1 )
        #define MOCCPU_CO_PART_RESP_2 ( MOCCPU_CO_OTCG_RESP_2 )
        #define MOCCPU_CO_PART_RESP_3 ( MOCCPU_CO_OTCG_RESP_3 )
        #define MOCCPU_CO_PART_RESP_4 ( MOCCPU_CO_OTCG_RESP_4 )
        #define MOCCPU_CO_PART_RESP_5 ( MOCCPU_CO_OTCG_RESP_5 )
        #define MOCCPU_CO_PART_RESP_6 ( MOCCPU_CO_OTCG_RESP_6 )
        #define MOCCPU_CO_PART_RESP_7 ( MOCCPU_CO_OTCG_RESP_7 )
        #define MOCCPU_CO_PART_RESP_8 ( MOCCPU_CO_OTCG_RESP_8 )
        #define MOCCPU_CO_PART_RESP_9 ( MOCCPU_CO_OTCG_RESP_9 )
        #define MOCCPU_CO_PART_RESP_A ( MOCCPU_CO_OTCG_RESP_A )
        #define MOCCPU_CO_PART_RESP_B ( MOCCPU_CO_OTCG_RESP_B )
        #define MOCCPU_CO_PART_RESP_C ( MOCCPU_CO_OTCG_RESP_C )
        #define MOCCPU_CO_PART_RESP_D ( MOCCPU_CO_OTCG_RESP_D )
        #define MOCCPU_CO_PART_RESP_E ( MOCCPU_CO_OTCG_RESP_E )
        #define MOCCPU_CO_PART_RESP_F ( MOCCPU_CO_OTCG_RESP_F )
    #else
      #if(MOCCPU_IT_SY==3)
        /* Calculate response values for CHISTE + OTCG part response */
        #define MOCCPU_CO_PART_RESP_0 ( ( MOCCPU_CO_OTCG_RESP_0 ) ^ MOCCPU_CO_CHISTE_RESP_0 )
        #define MOCCPU_CO_PART_RESP_1 ( ( MOCCPU_CO_OTCG_RESP_1 ) ^ MOCCPU_CO_CHISTE_RESP_1 )
        #define MOCCPU_CO_PART_RESP_2 ( ( MOCCPU_CO_OTCG_RESP_2 ) ^ MOCCPU_CO_CHISTE_RESP_2 )
        #define MOCCPU_CO_PART_RESP_3 ( ( MOCCPU_CO_OTCG_RESP_3 ) ^ MOCCPU_CO_CHISTE_RESP_3 )
        #define MOCCPU_CO_PART_RESP_4 ( ( MOCCPU_CO_OTCG_RESP_4 ) ^ MOCCPU_CO_CHISTE_RESP_4 )
        #define MOCCPU_CO_PART_RESP_5 ( ( MOCCPU_CO_OTCG_RESP_5 ) ^ MOCCPU_CO_CHISTE_RESP_5 )
        #define MOCCPU_CO_PART_RESP_6 ( ( MOCCPU_CO_OTCG_RESP_6 ) ^ MOCCPU_CO_CHISTE_RESP_6 )
        #define MOCCPU_CO_PART_RESP_7 ( ( MOCCPU_CO_OTCG_RESP_7 ) ^ MOCCPU_CO_CHISTE_RESP_7 )
        #define MOCCPU_CO_PART_RESP_8 ( ( MOCCPU_CO_OTCG_RESP_8 ) ^ MOCCPU_CO_CHISTE_RESP_8 )
        #define MOCCPU_CO_PART_RESP_9 ( ( MOCCPU_CO_OTCG_RESP_9 ) ^ MOCCPU_CO_CHISTE_RESP_9 )
        #define MOCCPU_CO_PART_RESP_A ( ( MOCCPU_CO_OTCG_RESP_A ) ^ MOCCPU_CO_CHISTE_RESP_A )
        #define MOCCPU_CO_PART_RESP_B ( ( MOCCPU_CO_OTCG_RESP_B ) ^ MOCCPU_CO_CHISTE_RESP_B )
        #define MOCCPU_CO_PART_RESP_C ( ( MOCCPU_CO_OTCG_RESP_C ) ^ MOCCPU_CO_CHISTE_RESP_C )
        #define MOCCPU_CO_PART_RESP_D ( ( MOCCPU_CO_OTCG_RESP_D ) ^ MOCCPU_CO_CHISTE_RESP_D )
        #define MOCCPU_CO_PART_RESP_E ( ( MOCCPU_CO_OTCG_RESP_E ) ^ MOCCPU_CO_CHISTE_RESP_E )
        #define MOCCPU_CO_PART_RESP_F ( ( MOCCPU_CO_OTCG_RESP_F ) ^ MOCCPU_CO_CHISTE_RESP_F )

      #else
        #if(MOCCPU_IT_SY==4)
        /* Calculate response values for FIT + OTCG part response   */
        /* correction for FIT part is done in MoExe_Co              */
        #define MOCCPU_CO_PART_RESP_0  ( MOCCPU_CO_OTCG_RESP_0 ) 
        #define MOCCPU_CO_PART_RESP_1  ( MOCCPU_CO_OTCG_RESP_1 ) 
        #define MOCCPU_CO_PART_RESP_2  ( MOCCPU_CO_OTCG_RESP_2 ) 
        #define MOCCPU_CO_PART_RESP_3  ( MOCCPU_CO_OTCG_RESP_3 ) 
        #define MOCCPU_CO_PART_RESP_4  ( MOCCPU_CO_OTCG_RESP_4 ) 
        #define MOCCPU_CO_PART_RESP_5  ( MOCCPU_CO_OTCG_RESP_5 ) 
        #define MOCCPU_CO_PART_RESP_6  ( MOCCPU_CO_OTCG_RESP_6 ) 
        #define MOCCPU_CO_PART_RESP_7  ( MOCCPU_CO_OTCG_RESP_7 ) 
        #define MOCCPU_CO_PART_RESP_8  ( MOCCPU_CO_OTCG_RESP_8 ) 
        #define MOCCPU_CO_PART_RESP_9  ( MOCCPU_CO_OTCG_RESP_9 ) 
        #define MOCCPU_CO_PART_RESP_A  ( MOCCPU_CO_OTCG_RESP_A ) 
        #define MOCCPU_CO_PART_RESP_B  ( MOCCPU_CO_OTCG_RESP_B ) 
        #define MOCCPU_CO_PART_RESP_C  ( MOCCPU_CO_OTCG_RESP_C ) 
        #define MOCCPU_CO_PART_RESP_D  ( MOCCPU_CO_OTCG_RESP_D ) 
        #define MOCCPU_CO_PART_RESP_E  ( MOCCPU_CO_OTCG_RESP_E ) 
        #define MOCCPU_CO_PART_RESP_F  ( MOCCPU_CO_OTCG_RESP_F ) 
        #endif
      #endif
    #endif
  #endif
#endif

        /* Calculate correction values for MoCCPU_Co                */
        /* Rule: MoCCPU_Co delivers CPUDES_XX as answer to MoExe_Co */
        #define MOCCPU_CO_PART_CORR_0  ( MOCCPU_CO_PART_RESP_0 ^ 0x1D261D26UL ) 
        #define MOCCPU_CO_PART_CORR_1  ( MOCCPU_CO_PART_RESP_1 ^ 0x23BD23BDUL ) 
        #define MOCCPU_CO_PART_CORR_2  ( MOCCPU_CO_PART_RESP_2 ^ 0x2A542A54UL ) 
        #define MOCCPU_CO_PART_CORR_3  ( MOCCPU_CO_PART_RESP_3 ^ 0x30EB30EBUL ) 
        #define MOCCPU_CO_PART_CORR_4  ( MOCCPU_CO_PART_RESP_4 ^ 0x37823782UL ) 
        #define MOCCPU_CO_PART_CORR_5  ( MOCCPU_CO_PART_RESP_5 ^ 0x3E193E19UL ) 
        #define MOCCPU_CO_PART_CORR_6  ( MOCCPU_CO_PART_RESP_6 ^ 0x44B044B0UL ) 
        #define MOCCPU_CO_PART_CORR_7  ( MOCCPU_CO_PART_RESP_7 ^ 0x4B474B47UL ) 
        #define MOCCPU_CO_PART_CORR_8  ( MOCCPU_CO_PART_RESP_8 ^ 0x51DE51DEUL ) 
        #define MOCCPU_CO_PART_CORR_9  ( MOCCPU_CO_PART_RESP_9 ^ 0x58755875UL ) 
        #define MOCCPU_CO_PART_CORR_A  ( MOCCPU_CO_PART_RESP_A ^ 0x5F0C5F0CUL ) 
        #define MOCCPU_CO_PART_CORR_B  ( MOCCPU_CO_PART_RESP_B ^ 0x65A365A3UL ) 
        #define MOCCPU_CO_PART_CORR_C  ( MOCCPU_CO_PART_RESP_C ^ 0x6C3A6C3AUL ) 
        #define MOCCPU_CO_PART_CORR_D  ( MOCCPU_CO_PART_RESP_D ^ 0x72D172D1UL ) 
        #define MOCCPU_CO_PART_CORR_E  ( MOCCPU_CO_PART_RESP_E ^ 0x79687968UL ) 
        #define MOCCPU_CO_PART_CORR_F  ( MOCCPU_CO_PART_RESP_F ^ 0xFFFFFFFFUL ) 


        /* Interface for MoExe_Co                                   */
        /* Rule: MoCCPU_Co delivers CPUDES_XX as answer to MoExe_Co */
        /* Correction for FIT Part is done in MoExe_Co !!!!!!!      */
        #define MOCCPU_CO_RESP_0  ( 0x1D261D26UL ) 
        #define MOCCPU_CO_RESP_1  ( 0x23BD23BDUL ) 
        #define MOCCPU_CO_RESP_2  ( 0x2A542A54UL ) 
        #define MOCCPU_CO_RESP_3  ( 0x30EB30EBUL ) 
        #define MOCCPU_CO_RESP_4  ( 0x37823782UL ) 
        #define MOCCPU_CO_RESP_5  ( 0x3E193E19UL ) 
        #define MOCCPU_CO_RESP_6  ( 0x44B044B0UL ) 
        #define MOCCPU_CO_RESP_7  ( 0x4B474B47UL ) 
        #define MOCCPU_CO_RESP_8  ( 0x51DE51DEUL ) 
        #define MOCCPU_CO_RESP_9  ( 0x58755875UL ) 
        #define MOCCPU_CO_RESP_A  ( 0x5F0C5F0CUL ) 
        #define MOCCPU_CO_RESP_B  ( 0x65A365A3UL ) 
        #define MOCCPU_CO_RESP_C  ( 0x6C3A6C3AUL ) 
        #define MOCCPU_CO_RESP_D  ( 0x72D172D1UL ) 
        #define MOCCPU_CO_RESP_E  ( 0x79687968UL ) 
        #define MOCCPU_CO_RESP_F  ( 0xFFFFFFFFUL ) 
        


#endif


/* EasyCASE ) */
