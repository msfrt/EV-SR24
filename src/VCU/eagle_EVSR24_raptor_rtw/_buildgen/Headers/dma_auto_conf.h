/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:$
 * $Author____:$
 * $Function__:$
 * $Domain____:$
 * $User______:$
 * $Date______:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 * $Type______:$
 * $State_____:$
 * $FDEF______:$
 *
 * List of changes
 * $History___:$
 ***************************************************************************************************
 </RBHead>*/

#ifndef _DMA_AUTO_CONF_H
#define _DMA_AUTO_CONF_H


/**
 ***************************************************************************************************
 * moduledescription
 * Configuration of the DMA module.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**************************************************************************************************/
/* Configuration defines for the DMA                                                              */
/**************************************************************************************************/
/* used Platform is TC_1793 */           
                                              
#define DMA_MAX_SRN       (7)       
#define DMA_MAX_ENGINE    (1)    
#define DMA_MAX_CHANNEL   (7)  
                                              
#define DMA_NUM_SRN       (7+1)     
#define DMA_NUM_ENGINE    (1+1)  
#define DMA_NUM_CHANNEL   (7+1) 
#define DMA_RESET_ON_ERROR

/**************************************************************************************************/
/* Defines for initialisation time                                                                */
/**************************************************************************************************/
#define DMA_INIT_CLRE  0x887FFFFFul  /* value fix by TC_1793   */
#define DMA_INIT_EER   0x777F0000ul  /* used for error interrupt   */


/**************************************************************************************************/
/* Defines for channels                                                                           */
/**************************************************************************************************/

/* MISRA RULE 98 VIOLATION: Order of evaluation of multiple ## operators is not relevant          */
/* interface to acess a complete register                                                         */
#define Dma_GetReg(name, regi)             (DMA_##name##_##regi)
#define Dma_SetReg(name, regi, value)      (DMA_##name##_##regi = (value))
/*                                                                                                */
/* interface to acess one bit inside a register                                                   */
#define Dma_GetBit(name, regi, bit)        (DMA_##name##_##regi##_##bit##_GET)
#define Dma_SetBit(name, regi, bit, value) (DMA_##name##_##regi##_##bit##_SET##value)

/**********************************************************************/                            
/* DMA_KNDET_TEILBLOCK_SRN use channel 0.0                        */                            
/**********************************************************************/                            
#define DMA_DMA_KNDET_TEILBLOCK_SRN_ENGINE   (0)         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHANNEL  (0)        
                                                                                                    
/* define to access channel specific registers                        */                            
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHCR    (DMA.SB0[0].CHCR )                               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHSR    (DMA.SB0[0].CHSR )                               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHICR   (DMA.SB0[0].CHICR)                               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_ADRCR   (DMA.SB0[0].ADRCR)                               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SADR    (DMA.SB0[0].SADR )                               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_DADR    (DMA.SB0[0].DADR )                               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SHADR   (DMA.SB0[0].SHADR)                               
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHICR_INTP (0)                                                     
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHCR_PRSEL (2)                                                     
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHCR_CHDW  (1)                                                      
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHCR_BLKM  (0)                                                      
                                                                                                    
/* define to access channel general registers  (by register name)     */                            
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR  (DMA.SUSPMR)                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR   (DMA.GINTR )                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR  (DMA.CHRSTR)                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR    (DMA.TRSR  )                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ   (DMA.STREQ )                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ   (DMA.HTREQ )                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR   (DMA.INTSR )                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR   (DMA.WRPSR )                                                        
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR   (DMA.INTCR )                                                        
                                                                                                    
                                                                      
/* define of Bit position inside the general register                 */                            
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_ERRSR_TRL_POS    ( DMA_ERRSR_TRL00_POS )          
#define DMA_DMA_KNDET_TEILBLOCK_SRN_ERRSR_TRL_LEN    ( DMA_ERRSR_TRL00_LEN )          
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CLRE_CTL_POS     ( DMA_CLRE_CTL00_POS )               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CLRE_CTL_LEN     ( DMA_CLRE_CTL00_LEN )               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_POS ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSAC_POS (((0 * DMA_NUM_CHANNEL) + 0)+16)           
#define DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_POS  ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_POS    ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_POS      ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_POS    (((0 * DMA_NUM_CHANNEL) + 0)+16)           
#define DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_POS    ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_POS    ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_LEN    ( DMA_HTREQ_ECH00_LEN )               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_POS    (((0 * DMA_NUM_CHANNEL) + 0)+16)           
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_LEN    ( DMA_HTREQ_DCH00_LEN )               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_POS    ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_POS    (((0 * DMA_NUM_CHANNEL) + 0)+16)           
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_POS   ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_POS   (((0 * DMA_NUM_CHANNEL) + 0)+16)           
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_POS   ( (0 * DMA_NUM_CHANNEL) + 0)               
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_POS   (((0 * DMA_NUM_CHANNEL) + 0)+16)           
                                                                                                    
/* define of Bit mask inside the general register                     */                            
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_MSK (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_POS)                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSAC_MSK (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_POS)                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_MSK  (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_POS )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_MSK    (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_POS   )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_MSK      (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_POS     )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_MSK    (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_POS   )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_MSK    (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_POS   )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_MSK    (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_POS   )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_MSK    (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_POS   )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_MSK    (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_POS   )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_MSK    (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_POS   )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_MSK   (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_POS  )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_MSK   (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_POS  )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_MSK   (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_POS  )                         
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_MSK   (1u << DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_POS  )                         
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_GET ((DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR >> DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_POS)&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSAC_GET ((DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR >> DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSAC_POS)&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_GET  ((DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR  >> DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_POS )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_GET    ((DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR >> DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_POS   )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_GET      ((DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR   >> DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_POS     )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_GET    ((DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR   >> DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_POS   )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_GET    ((DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ  >> DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_POS   )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_GET    ((DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ  >> DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_POS   )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_GET    ((DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ  >> DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_POS   )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_GET    ((DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR  >> DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_POS   )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_GET    ((DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR  >> DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_POS   )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_GET   ((DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR  >> DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_POS  )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_GET   ((DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR  >> DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_POS  )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_GET   ((DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR  >> DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_POS  )&1u)
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_GET   ((DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR  >> DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_POS  )&1u)
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_SET1 (DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR |=  DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_MSK)   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSAC_SET1 (DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR |=  DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_MSK)   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_SET1  (DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_MSK )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_SET1    (DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR |=  DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_SET1      (DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR   |=  DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_MSK     )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_SET1    (DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR   |=  DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_SET1    (DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_SET1    (DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_SET1    (DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_SET1    (DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_SET1    (DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_SET1   (DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_MSK  )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_SET1   (DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_MSK  )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_SET1   (DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_MSK  )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_SET1   (DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR  |=  DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_MSK  )   
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_SET0 (DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_MSK)   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSAC_SET0 (DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_SUSPMR_SUSEN_MSK)   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_SET0  (DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_GINTR_SIDMA_MSK )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_SET0    (DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_CHRSTR_CH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_SET0      (DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR   &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_CH_MSK     )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_SET0    (DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR   &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_TRSR_HTRE_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_SET0    (DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_STREQ_SCH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_SET0    (DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_ECH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_SET0    (DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_HTREQ_DCH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_SET0    (DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_ICH_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_SET0    (DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_INTSR_IPM_MSK   )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_SET0   (DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPS_MSK  )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_SET0   (DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_WRPSR_WRPD_MSK  )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_SET0   (DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CICH_MSK  )   
#define DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_SET0   (DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR  &= ~DMA_DMA_KNDET_TEILBLOCK_SRN_INTCR_CWRP_MSK  )   
                                                                                                    
/**********************************************************************/                            
/* DMA_KNDET_TEILBLOCK_SRN use service request node 0                          */                            
/**********************************************************************/                            
/* define to access srn specific registers                            */                            
                                                                                                    
#define DMA_DMA_KNDET_TEILBLOCK_SRN_SRC           (DMA.SRC0 )                                             
/**********************************************************************/                            
/* ERROR_HANDLER use service request node 7                          */                            
/**********************************************************************/                            
/* define to access srn specific registers                            */                            
                                                                                                    
#define DMA_ERROR_HANDLER_SRC           (DMA.SRC7 )                                             


/* _DMA_AUTO_CONF_H */
#endif
