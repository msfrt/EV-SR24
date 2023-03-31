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
 * $Filename__:cdrv_srvh_pcp.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:cdrv_srvh_pcp$ 
 * $Variant___:2.5.0$ 
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
 * 2.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CDRV_SRVH_PCP_H
#define _CDRV_SRVH_PCP_H

/* Address offset between GTTIM0 and GTTIM1: cf. gpta0_1796.h */
#define CDrv_SrvH_GTTIM_OFFS (4*sizeof(uint32))


/* "Inline functions", Interface macros */
/* CDRV_SRVH_GECOMPARE
 ***************************************************************************************************
 * Defective GTC ">=" compare workaround. Inline Macro.
 * Determine in software, if the wanted match [XR] already lies in the past. If so, set a "quasi"
 * immediate match. It is assumed that a write XReg [to be save for equal match] and a write CtrReg
 * is done immediately in advance to this function, so that a 2nd write XReg [after write CtrReg]
 * can be replaced with this function, if greater/equal compare does not work.
 *
 *   Inputs: Register mapped
 *           CTR  - CtrMask [query bit0 only, which determines if compare is against GT0 or GT1].
 *           XR_p - &XReg
 *           XR   - XReg [compare value]
 *           TMP1, TMP2
 *
 *           If _GECOMPARE_ENTRY_1 is used, code must be jumped to with "call" [create 1 instance
 *           that can be called in the c module].
 *           TMP1 - &GT0, to be loaded from [CDrv_SrvH_GT0_DPTR, CDrv_SrvH_GT0_FAR]
 *
 *           Labels
 *           _GECOMPARE_ENTRY   - name of entry label
 *           _GECOMPARE_ENTRY_1 - name of entry label 1
 *           _GECOMPARE_LOC1    - name of local label 1
 *
 *   Registers changed:
 *           TMP1, TMP2, r7[cond_flags]
 ***************************************************************************************************
 */
/* If 'signed less or equal' after sub_f; shl, the wanted compare value [XR] lies in the past.
   In that case get the current timer/counter value, add a certain lead time and program that value
   as new "quasi" immediate compare value.
   Be aware that #"LEADTICKS" depends on runtime between "read GT0/1" and "write to XReg"! 
   At least (8 + 3 + 8) = 19 cycles <==> 254ns <==> <~1 GT0 tick, <~5 GT1 ticks
   [@GT1 burst on acceleration: fGPTA = 20MHz <==> 50ns/GT1-tick].
   This estimate of cycle count is best case, FPI bus latency times are to be taken
   into account, too!
   For GT0 match: CDRV_SRVH_LEAD_GT0_TICKS.
   For GT1 match: CDRV_SRVH_LEAD_GT1_TICKS + CDRV_SRVH_LEAD_GT0_TICKS
   BE CAREFUL CHANGING THESE VALUES! */
#define CDRV_SRVH_LEAD_GT0_TICKS 3           /* max. delay of immediate match = 1.2µs */
#define CDRV_SRVH_LEAD_GT1_TICKS 7           /* max. angle delay of imm. match = 0.22° */

#define CDRV_SRVH_GECOMPARE(CTR, XR_p, XR, TMP1, TMP2, _GECOMPARE_ENTRY, _GECOMPARE_LOC1,\
                            _GECOMPARE_ENTRY_1)\
LABEL (_GECOMPARE_ENTRY)\
     mov(TMP2, r7, uc)\
     ldl_il(r7, CDrv_SrvH_GT0_DPTR)          /* new DPTR into r7 */\
     ld_pi(TMP1, CDrv_SrvH_GT0_FAR)          /* TMP1 = &GT0 */\
     mov(r7, TMP2, uc)                       /* restore r7 */\
LABEL (_GECOMPARE_ENTRY_1)\
     ld_i(TMP2, CDrv_SrvH_GTTIM_OFFS)        /* TMP2 = offset between GTTIM0 and GTTIM1 */\
                                             /* CDrv_SrvH_GTTIM_OFFS <= 0x3f */\
     chkb(CTR, 0, set)                       /* check, if CTR.MOD0 is set */\
     add(TMP1, TMP2, c)                      /* c ? TMP1[&GT1] = TMP1[&GT0] + TMP2[offset] : nop */\
                                             /* if c is set, match hooked on GT1, so add offset,*/\
                                             /* otherwise match hooked on GT0, so leave TMP1. */\
                                             /* TMP1 = &GT */\
     clr(r7, PCP_R7_IEN_POS)                 /* disable IR */\
     mov(TMP2, XR, uc)                       /* TMP2 = XR, to leave XR untouched */\
     sub_f(TMP2, TMP1, 32)                   /* XR = XR - GT0|GT1; disable IR becomes effective */\
                                             /* IR disabled to assure constant runtime for the */\
                                             /* following critical sequence. */\
     shl(TMP2, 8)                            /* shift 24 bit subtraction sign bit to 32bit */\
                                             /* sign bit for test */\
     jc(_GECOMPARE_LOC1, sgt)                /* do nothing, if 'sgt', i.e. in 'future' */\
                                             /* <==> ((N.xor.V).or.Z)=0 */\
                                             /* 2s complement overflow flag V must never be */\
                                             /* set here. This is assured by the fact that GTx */\
                                             /* value is always 24bit and the following shift */\
                                             /* operation only changes Z and N flags. */\
     ld_i(TMP2, CDRV_SRVH_LEAD_GT0_TICKS)    /* TMP2 = CDRV_SRVH_LEAD_GT0_TICKS */\
     add_f(TMP2, TMP1, 32)                   /* TMP2 = TMP2 + GT0 or GT1 */\
     ld_i(TMP1, CDRV_SRVH_LEAD_GT1_TICKS)    /* TMP1 = CDRV_SRVH_LEAD_GT1_TICKS */\
     chkb(CTR, 0, set)                       /* check, if CTR.MOD0 is set */\
     add(TMP2, TMP1, c)                      /* c ? TMP2 = TMP2 + TMP1[GT1] : nop [GT0] */\
     st_f(TMP2, XR_p, 32)                    /* write XR to XReg */\
     ld_f(TMP2, XR_p, 32)                    /* read XReg [FPI] to force flush of FPI queue to */\
                                             /* assure that XReg is really written now.*/\
                                             /* Cf. IFX AN 32009 */\
LABEL (_GECOMPARE_LOC1)\
     set(r7, PCP_R7_IEN_POS)                 /* reenable IR */



/*CDRV_SRVH_DISABLESRN
 ***************************************************************************************************
 * Disable an interrupt service request node.
 * 
 * This macro clears the "Service Request Enable" (SRE) bit of a specific SRN.
 *
 *   Inputs: Register mapped
 *             TMP1  - used register
 *           Constant
 *             SRC_p - constant offset address of PRAM location that holds &SRN
 *
 *   Registers changed:
 *           TMP1  	
 ***************************************************************************************************
 */

#define CDRV_SRVH_DISABLESRN(SRC_p, TMP1)\
     ld_pi(TMP1, SRC_p)                       /* load address of SRN to register TMP1 */\
     clr_f(TMP1, GPTA_SRC_SRE_POS, 16)        /* clear SRE flag in SRN register */


/*CDRV_SRVH_CLRINTREQ
 ***************************************************************************************************
 * Clear interrupt request of an interrupt service request node.
 * 
 * This macro clears the "request set bit" of a specific SRN.
 *
 *   Inputs: Register mapped
 *             TMP1  - used register
 *           Constant
 *             SRC_p - constant offset address of PRAM location that holds &SRN
 *
 *   Registers changed:
 *           TMP1  	
 ***************************************************************************************************
 */

#define CDRV_SRVH_CLRINTREQ(SRC_p, TMP1)\
     ld_pi(TMP1, SRC_p)                       /* load address of SRN to register TMP1 */\
     set_f(TMP1, GPTA_SRC_CLRR_POS, 16)       /* set Clear request flag in SRN register */


/* CDRV_SRVH_TSTBIT16_SH | CDRV_SRVH_TSTBIT32_SH
 ***************************************************************************************************
 * Test a bit on a FPI location and return its state on carry flag. Inline Macro.
 *
 *   Inputs: Register mapped
 *             TMP0 - loaded with FPI address of location, on which bit to be tested resides.
 *             TMP1 - loaded with contents of above location.
 *           Constants               
 *             CDRV_SRVH_BPOS - bit position
 *             CDRV_SRVH_POL  - 'polarity' [value = set|clr], condition == bit set | cleared
 *
 *   Output: Carry flag = tested bit state
 *
 *   Registers changed:
 *           TMP0, TMP1
 *
 ***************************************************************************************************
 */

#define CDRV_SRVH_TSTBIT_F16_SH(TMP0, TMP1, CDRV_SRVH_BPOS, CDRV_SRVH_POL)\
	 ld_f(TMP1, TMP0, 16)                   /* TMP1 = TMP0 */\
	 chkb(TMP1, CDRV_SRVH_BPOS, CDRV_SRVH_POL)

#define CDRV_SRVH_TSTBIT_F32_SH(TMP0, TMP1, CDRV_SRVH_BPOS, CDRV_SRVH_POL)\
	 ld_f(TMP1, TMP0, 32)                   /* TMP1 = TMP0 */\
	 chkb(TMP1, CDRV_SRVH_BPOS, CDRV_SRVH_POL)


/* CDRV_SRVH_TSTBIT_F16 | CDRV_SRVH_TSTBIT_F32
 ***************************************************************************************************
 * Test a bit on a FPI location and return its state on carry flag. Inline Macro.
 *
 *   Inputs: Register mapped
 *             TMP0 - loaded with FPI address of location, on which bit to be tested resides.
 *             TMP1 - loaded with contents of above location.
 *           Constants
 *             CDRV_SRVH_PRAMOFFS - constant offset address of PRAM location that holds FPI address
 *                                  to be checked                    
 *             CDRV_SRVH_BPOS - bit position
 *             CDRV_SRVH_POL  - 'polarity' [value = set|clr], condition == bit set | cleared
 *
 *   Output: Carry flag = tested bit state
 *
 *   Registers changed:
 *           TMP0, TMP1
 *
 ***************************************************************************************************
 */
#define CDRV_SRVH_TSTBIT_F16(TMP0, TMP1, CDRV_SRVH_PRAMOFFS, CDRV_SRVH_BPOS, CDRV_SRVH_POL)\
     ld_pi(TMP0, CDRV_SRVH_PRAMOFFS)           /* TMP0 = *CDRV_SRVH_PRAMOFFS */\
     CDRV_SRVH_TSTBIT_F16_SH(TMP0, TMP1, CDRV_SRVH_BPOS, CDRV_SRVH_POL)

#define CDRV_SRVH_TSTBIT_F32(TMP0, TMP1, CDRV_SRVH_PRAMOFFS, CDRV_SRVH_BPOS, CDRV_SRVH_POL)\
     ld_pi(TMP0, CDRV_SRVH_PRAMOFFS)           /* TMP0 = *CDRV_SRVH_PRAMOFFS */\
     CDRV_SRVH_TSTBIT_F32_SH(TMP0, TMP1, CDRV_SRVH_BPOS, CDRV_SRVH_POL)

#endif   /* _CDRV_SRVH_PCP_H */
