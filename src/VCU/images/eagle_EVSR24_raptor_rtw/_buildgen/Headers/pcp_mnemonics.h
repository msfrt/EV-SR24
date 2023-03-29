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
 * $Filename__:pcp_mnemonics.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Peripheral Control Processor$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:30.03.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:pcp_mnemonics$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pcp_mnemonics.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PCP_MNEMONICS_H
#define _PCP_MNEMONICS_H

/**
 ***************************************************************************************************
 * \moduledescription
 * PCP mnemonics macros to be able to place PCP code in C-files.
 *
 * \scope INTERN
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

/**************************************************************************************************/
/* deprecated macros - do not use these macros anymore                                            */
#define exit_incr_resume(cond)              exit_decr_resume(cond)
#define exit_incr_restart(cond)             exit_decr_restart(cond)
#define exit_incr_stopch_resume(cond)       exit_decr_stopch_resume(cond)
#define exit_incr_stopch_restart(cond)      exit_decr_stopch_restart(cond)
#define exit_incr_int_resume(cond)          exit_decr_int_resume(cond)
#define exit_incr_int_restart(cond)         exit_decr_int_restart(cond)
#define exit_incr_stopch_int_resume(cond)   exit_decr_stopch_int_resume(cond)
#define exit_incr_stopch_int_restart(cond)  exit_decr_stopch_int_restart(cond)
#define _pcpcode_
#define BEGIN_PCP_CHAN(name)                BEGIN_PCP_FUNC(name)
#define END_PCP_CHAN                        END_PCP_FUNC
/* end of deprecated macros                                                                       */
/**************************************************************************************************/

/**************************************************************************************************
 * definition of macros for all assembler mnemonics for PCP assembler                             *
 * and some additional macros to make live easier and the compiler happy.                         *
 *                                                                                                *
 * available macros for PCP assembler mnemonics:                                                  *
 *   + add / sub                    (all forms)                                                   *
 *   + and / or / xor               (all forms)                                                   *
 *   + ld / ldl / st                (all forms)                                                   *
 *   + neg / not                                                                                  *
 *   + mov                                                                                        *
 *   + xch                          (all forms)                                                   *
 *   + mset / mclr                                                                                *
 *   + rr / rl / shr / shl                                                                        *
 *   + nop                                                                                        *
 *   + comp                         (all forms)                                                   *
 *   + copy / bcopy                                                                               *
 *   + chkb                         (all forms)                                                   *
 *   + jc / jl                      (all forms)                                                   *
 *   + clr / set / inb                                                                            *
 *   + pri                                                                                        *
 *   + minit / mstep32 / mstep64                                                                  *
 *   + dinit / dstep                                                                              *
 *                                                                                                *
 * additional macros:                                                                             *
 *   + exit_resume|_restart / exit_decr_resume|_restart / exit_stopch_resume|_restart /           *
 *     exit_int_resume|_restart / exit_decr_stopch_resume|_restart /                              *
 *     exit_decr_int_resume|_restart / exit_stopch_int_resume|_restart /                          *
 *     exit_decr_stopch_int_resume|_restart                                                       *
 *   + mul8 / mul16 / mul24 /mul32                                                                *
 *   + div8 / div16 / div32                                                                       *
 *   + div8_no_dbz_check / div16_no_dbz_check /                                                   *
 *     div32_no_dbz_check                       (no check of divide by zero)                      *
 *   + call / ret                                                                                 *
 *   + switch_case / break                                                                        *
 *   + LABEL / LABEL_GLOBAL                                                                       *
 *   + _BEGIN_PCP_CODE_ / _END_PCP_CODE_                                                          *
 *   + BEGIN_PCP_CHAN / END_PCP_CHAN                                                              *
 *   + BEGIN_PCP_SUBFUNC / END_PCP_SUBFUNC                                                        *
 *   + STRUCT_OFFS                              (for offset calculation in struct)                *
 *                                                                                                *
 **************************************************************************************************/

/* MISRA RULE 19.10, 19.12 VIOLATION:
   19.10: Parameter can not be enclosed in () to achive functionality.
   19.12: Usage of multiple # operators is required for functionality.
          Order of evaluation is not critical. */
/* add, subtract */
#define add(reg1,reg2,cond)                 asm("add     "#reg1", "#reg2", cc_"#cond);
#define add_i(reg1,imm)                     asm("add.i   "#reg1", %0"::"i"(imm));
#define add_f(reg1,reg2,sz)                 asm("add.f   "#reg1", "#reg2", size=%0"::"i"(sz));
#define add_pi(reg1,imm)                    asm("add.pi  "#reg1", %0"::"i"(imm));
#define sub(reg1,reg2,cond)                 asm("sub     "#reg1", "#reg2", cc_"#cond);
#define sub_i(reg1,imm)                     asm("sub.i   "#reg1", %0"::"i"(imm));
#define sub_f(reg1,reg2,sz)                 asm("sub.f   "#reg1", "#reg2", size=%0"::"i"(sz));
#define sub_pi(reg1,imm)                    asm("sub.pi  "#reg1", %0"::"i"(imm));
/* and, or, xor */
#define and(reg1,reg2,cond)                 asm("and     "#reg1", "#reg2", cc_"#cond);
#define and_f(reg1,reg2,sz)                 asm("and.f   "#reg1", "#reg2", size=%0"::"i"(sz));
#define and_pi(reg1,imm)                    asm("and.pi  "#reg1", %0"::"i"(imm));
#define or(reg1,reg2,cond)                  asm("or      "#reg1", "#reg2", cc_"#cond);
#define or_f(reg1,reg2,sz)                  asm("or.f    "#reg1", "#reg2", size=%0"::"i"(sz));
#define or_pi(reg1,imm)                     asm("or.pi   "#reg1", %0"::"i"(imm));
#define xor(reg1,reg2,cond)                 asm("xor     "#reg1", "#reg2", cc_"#cond);
#define xor_f(reg1,reg2,sz)                 asm("xor.f   "#reg1", "#reg2", size=%0"::"i"(sz));
#define xor_pi(reg1,imm)                    asm("xor.pi  "#reg1", %0"::"i"(imm));
/* load, store */
#define ldl_il(reg1,imm)                    asm("ldl.il  "#reg1", %0"::"i"(imm));
#define ldl_iu(reg1,imm)                    asm("ldl.iu  "#reg1", %0"::"i"(imm));
#define ldl_i(reg1,imm)                     asm("ldl.il  "#reg1", %0\n"                            \
                                            "    ldl.iu  "#reg1", %0"::"i"(imm));
#define ldl_il_cptr(reg1,label)             asm("ldl.il  "#reg1", cptr:"#label"");
#define ld_f(reg1,reg2,sz)                  asm("ld.f    "#reg1", "#reg2", size=%0"::"i"(sz));
#define ld_i(reg1,imm)                      asm("ld.i    "#reg1", %0"::"i"(imm));
#define ld_if(reg1,imm,sz)                  asm("ld.if   "#reg1", %0, size=%1"::"i"(imm), "i"(sz));
#define ld_ifx(reg1,type,member)            asm("ld.if   "#reg1", %0, size=%1"::                   \
                                                "i"((uint32)(&(((type*)0)->member))),              \
                                                "i"(8 * sizeof(((type*)0)->member)));
#define ld_p(reg1,reg2,cond)                asm("ld.p    "#reg1", "#reg2", cc_"#cond);
#define ld_pi(reg1,imm)                     asm("ld.pi   "#reg1", %0"::"i"(imm));
#define st_f(reg1,reg2,sz)                  asm("st.f    "#reg1", "#reg2", size=%0"::"i"(sz));
#define st_if(reg1,imm,sz)                  asm("st.if   "#reg1", %0, size=%1"::"i"(imm), "i"(sz));
#define st_ifx(reg1,type,member)            asm("st.if   "#reg1", %0, size=%1"::                   \
                                                "i"((uint32)(&(((type*)0)->member))),              \
                                                "i"(8 * sizeof(((type*)0)->member)));
#define st_p(reg1,reg2,cond)                asm("st.p    "#reg1", "#reg2", cc_"#cond);
#define st_pi(reg1,imm)                     asm("st.pi   "#reg1", %0"::"i"(imm));
/* negation (2's and 1's complement) */
#define neg(reg1,reg2,cond)                 asm("neg     "#reg1", "#reg2", cc_"#cond);
#define not(reg1,reg2,cond)                 asm("not     "#reg1", "#reg2", cc_"#cond);
/* move, exchange */
#define mov(reg1,reg2,cond)                 asm("mov     "#reg1", "#reg2", cc_"#cond);
#define xch_pi(reg1,imm)                    asm("xch.pi  "#reg1", %0"::"i"(imm));
#define xch_f(reg1,reg2,sz)                 asm("xch.f   "#reg1", "#reg2", size=%0"::"i"(sz));
/* set/clear specified bits within a PRAM location */
#define mset_pi(reg1,imm)                   asm("mset.pi "#reg1", %0"::"i"(imm));
#define mclr_pi(reg1,imm)                   asm("mclr.pi "#reg1", %0"::"i"(imm));
/* rotate, shift */
#define rl(reg1,imm)                        asm("rl      "#reg1", %0"::"i"(imm));
#define rr(reg1,imm)                        asm("rr      "#reg1", %0"::"i"(imm));
#define shl(reg1,imm)                       asm("shl     "#reg1", %0"::"i"(imm));
#define shr(reg1,imm)                       asm("shr     "#reg1", %0"::"i"(imm));
/* waste some time */
#define nop()                               asm volatile("nop");
/* compare */
#define comp(reg1,reg2,cond)                asm("comp    "#reg1", "#reg2", cc_"#cond);
#define comp_i(reg1,imm)                    asm("comp.i  "#reg1", %0"::"i"(imm));
#define comp_f(reg1,reg2,sz)                asm("comp.f  "#reg1", "#reg2", size=%0"::"i"(sz));
#define comp_pi(reg1,imm)                   asm("comp.pi "#reg1", %0"::"i"(imm));
/* DMA primitives */
#define copy(dst,src,cnc,cnt,sz)            asm("copy    "#dst", "#src", "#cnc", "#cnt", "         \
                                                         "size=%0"::"i"(sz));
#define bcopy(dst,src,cnc,cnt)              asm("bcopy   "#dst", "#src", "#cnc", "#cnt);
/* check bit values */
#define chkb(reg1,imm,log)                  asm("chkb    "#reg1", %0, "#log::"i"(imm));
/* jumps */
#define jc(label,cond)                      asm("jc      "#label", cc_"#cond);
#define jc_a(label,cond)                    asm("jc.a    "#label", cc_"#cond);
#define jc_i(reg1,cond)                     asm("jc.i    "#reg1", cc_"#cond);
#define jc_ia(reg1,cond)                    asm("jc.ia   "#reg1", cc_"#cond);
#define jl(label)                           asm("jl      "#label);
#define jl_16(label)                        asm(".code16\n"                                        \
                                            "    jl      "#label);
/* exit with various properites */
#define exit_resume(cond)                   asm("exit    EC=0, ST=0, INT=0, EP=1, cc_"#cond);
#define exit_restart(cond)                  asm("exit    EC=0, ST=0, INT=0, EP=0, cc_"#cond);
#define exit_decr_resume(cond)              asm("exit    EC=1, ST=0, INT=0, EP=1, cc_"#cond);
#define exit_decr_restart(cond)             asm("exit    EC=1, ST=0, INT=0, EP=0, cc_"#cond);
#define exit_stopch_resume(cond)            asm("exit    EC=0, ST=1, INT=0, EP=1, cc_"#cond);
#define exit_stopch_restart(cond)           asm("exit    EC=0, ST=1, INT=0, EP=0, cc_"#cond);
#define exit_int_resume(cond)               asm("exit    EC=0, ST=0, INT=1, EP=1, cc_"#cond);
#define exit_int_restart(cond)              asm("exit    EC=0, ST=0, INT=1, EP=0, cc_"#cond);
#define exit_decr_stopch_resume(cond)       asm("exit    EC=1, ST=1, INT=0, EP=1, cc_"#cond);
#define exit_decr_stopch_restart(cond)      asm("exit    EC=1, ST=1, INT=0, EP=0, cc_"#cond);
#define exit_decr_int_resume(cond)          asm("exit    EC=1, ST=0, INT=1, EP=1, cc_"#cond);
#define exit_decr_int_restart(cond)         asm("exit    EC=1, ST=0, INT=1, EP=0, cc_"#cond);
#define exit_stopch_int_resume(cond)        asm("exit    EC=0, ST=1, INT=1, EP=1, cc_"#cond);
#define exit_stopch_int_restart(cond)       asm("exit    EC=0, ST=1, INT=1, EP=0, cc_"#cond);
#define exit_decr_stopch_int_resume(cond)   asm("exit    EC=1, ST=1, INT=1, EP=1, cc_"#cond);
#define exit_decr_stopch_int_restart(cond)  asm("exit    EC=1, ST=1, INT=1, EP=0, cc_"#cond);
/* clear and set bit */
#define clr(reg1,imm)                       asm("clr     "#reg1", %0"::"i"(imm));
#define clr_f(reg1,imm,sz)                  asm("clr.f   "#reg1", %0, size=%1"::"i"(imm), "i"(sz));
#define inb(reg1,reg2,cond)                 asm("inb     "#reg1", "#reg2", cc_"#cond);
#define inb_i(reg1,imm)                     asm("inb.i   "#reg1", %0"::"i"(imm));
#define set(reg1,imm)                       asm("set     "#reg1", %0"::"i"(imm));
#define set_f(reg1,imm,sz)                  asm("set.f   "#reg1", %0, size=%1"::"i"(imm), "i"(sz));
/* find 1st set bit */
#define pri(reg1,reg2,cond)                 asm("pri     "#reg1", "#reg2", cc_"#cond);
/* basic multiplication mnemonics */
#define minit(reg1,reg2)                    asm("minit   "#reg1", "#reg2);
#define mstep32(reg1,reg2)                  asm("mstep32 "#reg1", "#reg2);
#define mstep_l(reg1,reg2)                  asm("mstep32 "#reg1", "#reg2);
#define mstep64(reg1,reg2)                  asm("mstep64 "#reg1", "#reg2);
#define mstep_u(reg1,reg2)                  asm("mstep64 "#reg1", "#reg2);
/* 8bit multiplication */
#define mul8(reg1,reg2)                     asm("minit   "#reg1", "#reg2"\n"                       \
                                            "    jc      1f, cc_Z\n"                               \
                                            "    rr      "#reg1", 8\n"                             \
                                            "    mstep32 "#reg1", "#reg2"\n"                       \
                                            "1:");
/* 16bit multiplication */
#define mul16(reg1,reg2)                    asm("minit   "#reg1", "#reg2"\n"                       \
                                            "    jc      1f, cc_Z\n"                               \
                                            "    rr      "#reg1", 8\n"                             \
                                            "    rr      "#reg1", 8\n"                             \
                                            "    mstep32 "#reg1", "#reg2"\n"                       \
                                            "    mstep32 "#reg1", "#reg2"\n"                       \
                                            "1:");
/* 24bit multiplication */
#define mul24(reg1,reg2)                    asm("minit   "#reg1", "#reg2"\n"                       \
                                            "    jc      1f, cc_Z\n"                               \
                                            "    rl      "#reg1", 8\n"                             \
                                            "    mstep32 "#reg1", "#reg2"\n"                       \
                                            "    mstep32 "#reg1", "#reg2"\n"                       \
                                            "    mstep32 "#reg1", "#reg2"\n"                       \
                                            "1:");
/* 32bit multiplication */
#define mul32(reg1,reg2)                    asm("minit   "#reg1", "#reg2"\n"                       \
                                            "    jc      1f, cc_Z\n"                               \
                                            "    mstep64 "#reg1", "#reg2"\n"                       \
                                            "    mstep64 "#reg1", "#reg2"\n"                       \
                                            "    mstep64 "#reg1", "#reg2"\n"                       \
                                            "    mstep64 "#reg1", "#reg2"\n"                       \
                                            "1:");
/* basic division mnemonics */
#define dinit(reg1,reg2)                    asm("dinit   "#reg1", "#reg2);
#define dstep(reg1,reg2)                    asm("dstep   "#reg1", "#reg2);
/* 8bit division */
#define div8(reg1,reg2)                     asm("rr      "#reg1", 8\n"                             \
                                            "    dinit   "#reg1", "#reg2"\n"                       \
                                            "    jc      1f, cc_V\n"                               \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    jc      2f, cc_UC\n"                              \
                                            "1:\n"                                                 \
                                            "    xor     "#reg1", "#reg1", cc_UC\n"                \
                                            "    sub.i   "#reg1", 1\n"                             \
                                            "2:");
/* 16bit division */
#define div16(reg1,reg2)                    asm("rr      "#reg1", 8\n"                             \
                                            "    rr      "#reg1", 8\n"                             \
                                            "    dinit   "#reg1", "#reg2"\n"                       \
                                            "    jc      1f, cc_V\n"                               \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    jc      2f, cc_UC\n"                              \
                                            "1:\n"                                                 \
                                            "    xor     "#reg1", "#reg1", cc_UC\n"                \
                                            "    sub.i   "#reg1", 1\n"                             \
                                            "2:");
/* 32bit division */
#define div32(reg1,reg2)                    asm("dinit   "#reg1", "#reg2"\n"                       \
                                            "    jc      1f, cc_V\n"                               \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    jc      2f, cc_UC\n"                              \
                                            "1:\n"                                                 \
                                            "    xor     "#reg1", "#reg1", cc_UC\n"                \
                                            "    sub.i   "#reg1", 1\n"                             \
                                            "2:");
/* 8bit division without division by zero check */
#define div8_no_dbz_check(reg1,reg2)        asm("rr      "#reg1", 8\n"                             \
                                            "    dinit   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2);
/* 16bit division without division by zero check */
#define div16_no_dbz_check(reg1,reg2)       asm("rr      "#reg1", 8\n"                             \
                                            "    rr      "#reg1", 8\n"                             \
                                            "    dinit   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2);
/* 32bit division without division by zero check */
#define div32_no_dbz_check(reg1,reg2)       asm("dinit   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2"\n"                       \
                                            "    dstep   "#reg1", "#reg2);
/* call, return */
#define call(label)                         asm("ldl.il  r2, cptr:1f\n"                            \
                                            "    jc.a    "#label", cc_UC\n"                        \
                                            "1:");
#define ret()                               asm("jc.ia   r2, cc_UC");
/* switch-case with 3 cases */
#define switch_case_3(reg1,name)            asm("add.i   "#reg1", 1\n"                             \
                                            "    shl     "#reg1", 1\n"                             \
                                            "    comp.i  "#reg1", 10\n"                            \
                                            "    jc.i    "#reg1", cc_ULT\n"                        \
                                            "    jc.a    SWITCH_"#name"_DEF, cc_UC\n"              \
                                            "    jc.a    SWITCH_"#name"_0, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_1, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_2, cc_UC\n"                \
                                            "    jl      SWITCH_"#name"_3");
/* switch-case with 4 cases */
#define switch_case_4(reg1,name)            asm("add.i   "#reg1", 1\n"                             \
                                            "    shl     "#reg1", 1\n"                             \
                                            "    comp.i  "#reg1", 12\n"                            \
                                            "    jc.i    "#reg1", cc_ULT\n"                        \
                                            "    jc.a    SWITCH_"#name"_DEF, cc_UC\n"              \
                                            "    jc.a    SWITCH_"#name"_0, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_1, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_2, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_3, cc_UC\n"                \
                                            "    jl      SWITCH_"#name"_4");
/* switch-case with 5 cases */
#define switch_case_5(reg1,name)            asm("add.i   "#reg1", 1\n"                             \
                                            "    shl     "#reg1", 1\n"                             \
                                            "    comp.i  "#reg1", 14\n"                            \
                                            "    jc.i    "#reg1", cc_ULT\n"                        \
                                            "    jc.a    SWITCH_"#name"_DEF, cc_UC\n"              \
                                            "    jc.a    SWITCH_"#name"_0, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_1, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_2, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_3, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_4, cc_UC\n"                \
                                            "    jl      SWITCH_"#name"_5");
/* switch-case with 6 cases */
#define switch_case_6(reg1,name)            asm("add.i   "#reg1", 1\n"                             \
                                            "    shl     "#reg1", 1\n"                             \
                                            "    comp.i  "#reg1", 16\n"                            \
                                            "    jc.i    "#reg1", cc_ULT\n"                        \
                                            "    jc.a    SWITCH_"#name"_DEF, cc_UC\n"              \
                                            "    jc.a    SWITCH_"#name"_0, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_1, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_2, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_3, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_4, cc_UC\n"                \
                                            "    jc.a    SWITCH_"#name"_5, cc_UC\n"                \
                                            "    jl      SWITCH_"#name"_6");
/* switch-case capsule (number of cases as parameter) */
#define switch_case(reg1,name,anz)          switch_case_##anz(reg1,name)
/* break for switch-case */
#define break(name)                         asm("jl      SWITCH_"#name"_END");
/* case labels for switch-case */
#define case_default(name)                  asm("SWITCH_"#name"_DEF:");
#define case_0(name)                        asm("SWITCH_"#name"_0:");
#define case_1(name)                        asm("SWITCH_"#name"_1:");
#define case_2(name)                        asm("SWITCH_"#name"_2:");
#define case_3(name)                        asm("SWITCH_"#name"_3:");
#define case_4(name)                        asm("SWITCH_"#name"_4:");
#define case_5(name)                        asm("SWITCH_"#name"_5:");
#define case_6(name)                        asm("SWITCH_"#name"_6:");
#define switch_end(name)                    asm("SWITCH_"#name"_END:");
/* macros to get offset and size of members of structures */
#define STRUCT_OFFS(type, member)           ((uint32)(&(((type*)0)->member)))
#define STRUCT_SIZE(type, member)           (8 * sizeof(((type*)0)->member))
/* labels */
#define LABEL_GLOBAL(name)                  asm(".global "#name"\n"                                \
                                            ""#name":");
#define LABEL(name)                         asm(""#name":");

/* deprecated macros to encapsulate PCP code - no longer necessary */
#define _BEGIN_PCP_CODE_
#define _END_PCP_CODE_

/* MISRA RULE 3.1, 19.4, 19.12 VIOLATION:
   3.1:   The character @ is required by the assembler to specify the section.
   19.4:  Macro must be used with companion macro END_PCP_SUBFUNC.
          Unbalanced braces are needed to ensure functionality.
   19.12: Usage of # and ## operator is required for functionality.
          Usage of multiple # operators is required for functionality.
          Order of evaluation is not critical. */
#define BEGIN_PCP_FUNC(name)                                                                       \
void Pcp_DmyFunc##name(void)                                                                       \
{                                                                                                  \
    asm(".section .pcptext,\"axp\",@progbits\n"                                                    \
    "    .align 1\n"                                                                               \
    "    .global "#name"\n"                                                                        \
    "    .type   "#name",%function\n"                                                              \
    ""#name":");
/* companion macro */
#define END_PCP_FUNC                                                                               \
    asm(".section .text.discard,\"ax\",@progbits");                                                \
}

/* MISRA RULE 3.1, 19.4, 19.12 VIOLATION:
   3.1:   The character @ is required by the assembler to specify the section.
   19.4:  Macro must be used with companion macro END_PCP_SUBFUNC.
          Unbalanced braces are needed to ensure functionality.
   19.12: Usage of # and ## operator is required for functionality.
          Usage of multiple # operators is required for functionality.
          Order of evaluation is not critical. */
#define BEGIN_PCP_SUBFUNC(name)                                                                    \
extern void Pcp_DmyFunc##name(void) __attribute__ ((noinline, asection(".text.discard","f=ax")));  \
void Pcp_DmyFunc##name(void)                                                                       \
{                                                                                                  \
    asm(".section .pcptext,\"axp\",@progbits\n"                                                    \
    "    .align 1\n"                                                                               \
    "    .global "#name"\n"                                                                        \
    "    .type   "#name",%function\n"                                                              \
    ""#name":");
/* companion macro */
#define END_PCP_SUBFUNC                                                                            \
    asm(".section .text.discard,\"ax\",@progbits");                                                \
}


/* _PCP_MNEMONICS_H */
#endif
