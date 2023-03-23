
#ifndef _ACCPR_AUTO_CONF_H
#define _ACCPR_AUTO_CONF_H

/**
 ***************************************************************************************************
 * \moduldescription
 *      Configuration header for ACCPR module :
 *
 * \scope              [CONF]
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
  #include "memlay.h"  
#include "memlay_auto_conf.h"  

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

 #define ACCPR_DYNAMIC_BLOCK  FALSE


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/* Security levels: */

enum 
{ 
	ACCPR_SECLEVEL1_2_E 				=   ACCPR_DEFAULT ,           /* Default level   */	
	ACCPR_SECLEVEL3_4_E,        		             
	ACCPR_SECLEVEL5_6_E,                      
	ACCPR_SECLEVEL7_8_E,             		  
	ACCPR_SECLEVEL9_10_E,             		  
	ACCPR_SECLEVEL11_12_E,           		  
	ACCPR_SECLEVEL13_14_E,                    
	ACCPR_SECLEVEL15_16_E,                    
	ACCPR_SECLEVELFREE_1_E,                   
	ACCPR_SECLEVELFREE_2_E,                   
	ACCPR_SECLEVELFREE_3_E,                   
	ACCPR_SECLEVELFREE_4_E,                   
	ACCPR_SECLEVELFREE_5_E,                   
	ACCPR_SECLEVELFREE_6_E,                   
	ACCPR_SECLEVELFREE_7_E,                   
	ACCPR_SECLEVELFREE_8_E,                    
										  
	ACCPR_NUM_SECLEVELS_E
						  
};										  
										  
/* Bit encoded security levels: */		  
										   
#define ACCPR_SECLEVEL1_2          		(1 << ACCPR_SECLEVEL1_2_E) 	       /* Default level  */	
#define ACCPR_SECLEVEL3_4          		(1 << ACCPR_SECLEVEL3_4_E)          					
#define ACCPR_SECLEVEL5_6          		(1 << ACCPR_SECLEVEL5_6_E)          					
#define ACCPR_SECLEVEL7_8          		(1 << ACCPR_SECLEVEL7_8_E)   							
#define ACCPR_SECLEVEL9_10         		(1 << ACCPR_SECLEVEL9_10_E) 							
#define ACCPR_SECLEVEL11_12        		(1 << ACCPR_SECLEVEL11_12_E)    						
#define ACCPR_SECLEVEL13_14        		(1 << ACCPR_SECLEVEL13_14_E)     						
#define ACCPR_SECLEVEL15_16        		(1 << ACCPR_SECLEVEL15_16_E)      						
#define ACCPR_SECLEVELFREE_1       		(1 << ACCPR_SECLEVELFREE_1_E)      						
#define ACCPR_SECLEVELFREE_2       		(1 << ACCPR_SECLEVELFREE_2_E)      						
#define ACCPR_SECLEVELFREE_3       		(1 << ACCPR_SECLEVELFREE_3_E)       					
#define ACCPR_SECLEVELFREE_4       		(1 << ACCPR_SECLEVELFREE_4_E)       					
#define ACCPR_SECLEVELFREE_5       		(1 << ACCPR_SECLEVELFREE_5_E)      						
#define ACCPR_SECLEVELFREE_6       		(1 << ACCPR_SECLEVELFREE_6_E)      						
#define ACCPR_SECLEVELFREE_7       		(1 << ACCPR_SECLEVELFREE_7_E)      						
#define ACCPR_SECLEVELFREE_8       		(1 << ACCPR_SECLEVELFREE_8_E)      						

																									 

/* #Defines for compatibality of old accpr_conf.xml file */

#define ACCPR_BP_DEFAULT_E 	        	ACCPR_SECLEVEL1_2_E 		
#define ACCPR_BP_RBPROG_E             	ACCPR_SECLEVEL3_4_E    
#define ACCPR_BP_PROG_E               	ACCPR_SECLEVEL5_6_E    
#define ACCPR_BP_DEVELOPMENT_E        	ACCPR_SECLEVEL7_8_E    
#define ACCPR_BP_ECUADJUSTMENT_E      	ACCPR_SECLEVEL9_10_E   
#define ACCPR_BP_EOLVEHMANU_E         	ACCPR_SECLEVEL11_12_E  
#define ACCPR_BP_SAE_VEHI_E           	ACCPR_SECLEVEL13_14_E  
#define ACCPR_BP_SAE_CUST_E           	ACCPR_SECLEVEL15_16_E  
#define ACCPR_BP_SAE_FLET_E           	ACCPR_SECLEVELFREE_1_E 
#define ACCPR_BP_SAE_UNPR_E           	ACCPR_SECLEVELFREE_2_E 
#define ACCPR_BP_SAE_OEM_E            	ACCPR_SECLEVELFREE_3_E 
#define ACCPR_BP_SAE_ASS_E            	ACCPR_SECLEVELFREE_4_E 
#define ACCPR_BP_SEQLEV13_E           	ACCPR_SECLEVELFREE_5_E 
#define ACCPR_BP_SEQLEV14_E           	ACCPR_SECLEVELFREE_6_E 
#define ACCPR_BP_SEQLEV15_E           	ACCPR_SECLEVELFREE_7_E 
#define ACCPR_BP_SEQLEV16_E           	ACCPR_SECLEVELFREE_8_E 


																							 
#define ACCPR_BP_DEFAULT 		 		ACCPR_SECLEVEL1_2             /* Default level                  */	
#define ACCPR_BP_RBPROG          		ACCPR_SECLEVEL3_4             /* RB flash programming           */	
#define ACCPR_BP_PROG            		ACCPR_SECLEVEL5_6             /* Customer flash programming     */	
#define ACCPR_BP_DEVELOPMENT     		ACCPR_SECLEVEL7_8   	       /* Development level              */	
#define ACCPR_BP_ECUADJUSTMENT   		ACCPR_SECLEVEL9_10            /* ECU Adjustment level           */	
#define ACCPR_BP_EOLVEHMANU      		ACCPR_SECLEVEL11_12           /* EOL level                      */ 
#define ACCPR_BP_SAE_VEHI        		ACCPR_SECLEVEL13_14           /* vehicle                        */	
#define ACCPR_BP_SAE_CUST        		ACCPR_SECLEVEL15_16           /* customer                       */	
#define ACCPR_BP_SAE_FLET        		ACCPR_SECLEVELFREE_1          /* fleet                          */	
#define ACCPR_BP_SAE_UNPR        		ACCPR_SECLEVELFREE_2          /* unprotected                    */	
#define ACCPR_BP_SAE_OEM         		ACCPR_SECLEVELFREE_3          /* OEM                            */	 
#define ACCPR_BP_SAE_ASS         		ACCPR_SECLEVELFREE_4          /* assembly                       */	 
#define ACCPR_BP_SEQLEV13        		ACCPR_SECLEVELFREE_5          /* Additional seqlevel for future */	 
#define ACCPR_BP_SEQLEV14        		ACCPR_SECLEVELFREE_6          /* Additional seqlevel for future */	 
#define ACCPR_BP_SEQLEV15        		ACCPR_SECLEVELFREE_7          /* Additional seqlevel for future */	 
#define ACCPR_BP_SEQLEV16        		ACCPR_SECLEVELFREE_8          /* Additional seqlevel for future */	 






#endif
