#ifndef _SWADP_DAT_H
#define _SWADP_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter CWDMDZAG */
#ifndef _CWDMDZAG_DEF
#define _CWDMDZAG_DEF
#endif /* _CWDMDZAG_DEF */

/* Defined Parameter DFP_UBR */
#ifndef _DFP_UBR_DEF
#define _DFP_UBR_DEF
#endif /* _DFP_UBR_DEF */

/* Defined Parameter SENZZYL */
#ifndef _SENZZYL_DEF
#define _SENZZYL_DEF
typedef uint8 SENZZYL_t[8];
#endif /* _SENZZYL_DEF */

/* Defined Parameter WNWRAS */
#ifndef _WNWRAS_DEF
#define _WNWRAS_DEF
#endif /* _WNWRAS_DEF */

/* Defined Parameter WNWREO */
#ifndef _WNWREO_DEF
#define _WNWREO_DEF
#endif /* _WNWREO_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Local System Constant SPDGOV_LOIDL_BP */


#ifndef SPDGOV_LOIDL_BP
  #define SPDGOV_LOIDL_BP 0L
#elif (SPDGOV_LOIDL_BP != 0L)
  #error >>>> 'SPDGOV_LOIDL_BP' = SPDGOV_LOIDL_BP multiple defined
#endif


/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema ADS_Bit +++++ */


/* Exported Variable: AirSys_bCaSEdgAdapExh */
/* AirSys_bCaSEdgAdapExh is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: AirSys_bCaSEdgAdapIntk */
/* AirSys_bCaSEdgAdapIntk is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* +++++ Addressschema extRam +++++ */


/* Imported Variable: EpmCaS_phiAdapRefPosI1_mp */
#define IMPORTED
#ifndef _D_FILE_ 
/* MpA_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHIADAPREFPOSI1_MP_EXT__
#define __EPMCAS_PHIADAPREFPOSI1_MP_EXT__
extern sint16 EpmCaS_phiAdapRefPosI1_mp[10]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema intRam +++++ */


/* Exported Variable: BattU_stPwrFail */
#ifdef _DAT_H
#ifndef __BATTU_STPWRFAIL_EXT__
#define __BATTU_STPWRFAIL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 BattU_stPwrFail;
#else /* local or exported variable - write access */
extern uint8 BattU_stPwrFail;
#endif /* IMPORTED */
#endif /* __BATTU_STPWRFAIL_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: CrCtl_vDes */
/* CrCtl_vDes is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ctBattSamples */
#ifdef _DAT_H
#ifndef __CTBATTSAMPLES_EXT__
#define __CTBATTSAMPLES_EXT__
extern uint8 ctBattSamples;
#endif
#endif


/* Exported Variable: Ctrl_st */
#ifdef _DAT_H
#ifndef __CTRL_ST_EXT__
#define __CTRL_ST_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 Ctrl_st;
#else /* local or exported variable - write access */
extern uint8 Ctrl_st;
#endif /* IMPORTED */
#endif /* __CTRL_ST_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: EngDa_tEng */
#ifdef _DAT_H
#ifndef __ENGDA_TENG_EXT__
#define __ENGDA_TENG_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 EngDa_tEng;
#else /* local or exported variable - write access */
extern sint16 EngDa_tEng;
#endif /* IMPORTED */
#endif /* __ENGDA_TENG_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: ExhMod_tWallS1B1 */
/* ExhMod_tWallS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ExhMod_tWallS1B2 */
/* ExhMod_tWallS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: msabg2_w */
#ifdef _DAT_H
#ifndef __MSABG2_W_EXT__
#define __MSABG2_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 msabg2_w;
#else /* local or exported variable - write access */
extern uint16 msabg2_w;
#endif /* IMPORTED */
#endif /* __MSABG2_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: msabg_w */
#ifdef _DAT_H
#ifndef __MSABG_W_EXT__
#define __MSABG_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 msabg_w;
#else /* local or exported variable - write access */
extern uint16 msabg_w;
#endif /* IMPORTED */
#endif /* __MSABG_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: SpdGov_st */
/* SpdGov_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Strt_stStaActv */
#ifdef _DAT_H
#ifndef __STRT_STSTAACTV_EXT__
#define __STRT_STSTAACTV_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 Strt_stStaActv;
#else /* local or exported variable - write access */
extern uint8 Strt_stStaActv;
#endif /* IMPORTED */
#endif /* __STRT_STSTAACTV_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: tavso2_w */
#ifdef _DAT_H
#ifndef __TAVSO2_W_EXT__
#define __TAVSO2_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 tavso2_w;
#else /* local or exported variable - write access */
extern uint16 tavso2_w;
#endif /* IMPORTED */
#endif /* __TAVSO2_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: tavso_w */
#ifdef _DAT_H
#ifndef __TAVSO_W_EXT__
#define __TAVSO_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 tavso_w;
#else /* local or exported variable - write access */
extern uint16 tavso_w;
#endif /* IMPORTED */
#endif /* __TAVSO_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: VehV_v */
#ifdef _DAT_H
#ifndef __VEHV_V_EXT__
#define __VEHV_V_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 VehV_v;
#else /* local or exported variable - write access */
extern sint16 VehV_v;
#endif /* IMPORTED */
#endif /* __VEHV_V_EXT__ */
#endif /* _DAT_H */


/* Imported Variable: Epm_ctCyl */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_ctCyl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_dnEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_dnEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_dnEngAvg */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_dnEngAvg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng10ms */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng10ms is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_phiCurrPos */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EPM_PHICURRPOS_EXT__
#define __EPM_PHICURRPOS_EXT__
extern sint16 Epm_phiCurrPos;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stOpMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stOpMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stSync */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stSync is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIPmpElecCorrdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIPmpElecCorrdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIPmpElecCorrdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIPmpElecCorrdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_rRiaRawS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_rRiaRawS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_rRiaRawS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_rRiaRawS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_rRieRawS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_rRieRawS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_rRieRawS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_rRieRawS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_tCerS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_tCerS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_tCerS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_tCerS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_uUn0ElecCorrdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_uUn0ElecCorrdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_uUn0ElecCorrdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_uUn0ElecCorrdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: wub_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __WUB_W_EXT__
#define __WUB_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 wub_w;
#else /* local or exported variable - write access */
extern uint16 wub_w;
#endif /* IMPORTED */
#endif /* __WUB_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema IramI16 +++++ */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 


/* Exported Variable: APP_r */
#ifdef _DAT_H
#ifndef __APP_R_EXT__
#define __APP_R_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 APP_r;
#else /* local or exported variable - write access */
extern sint16 APP_r;
#endif /* IMPORTED */
#endif /* __APP_R_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: BattU_facCor */
#ifdef _DAT_H
#ifndef __BATTU_FACCOR_EXT__
#define __BATTU_FACCOR_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 BattU_facCor;
#else /* local or exported variable - write access */
extern sint16 BattU_facCor;
#endif /* IMPORTED */
#endif /* __BATTU_FACCOR_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: BattU_u */
#ifdef _DAT_H
#ifndef __BATTU_U_EXT__
#define __BATTU_U_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 BattU_u;
#else /* local or exported variable - write access */
extern sint16 BattU_u;
#endif /* IMPORTED */
#endif /* __BATTU_U_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: CEngDsT_t */
#ifdef _DAT_H
#ifndef __CENGDST_T_EXT__
#define __CENGDST_T_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 CEngDsT_t;
#else /* local or exported variable - write access */
extern sint16 CEngDsT_t;
#endif /* IMPORTED */
#endif /* __CENGDST_T_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: dtemnkt_w */
#ifdef _DAT_H
#ifndef __DTEMNKT_W_EXT__
#define __DTEMNKT_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 dtemnkt_w;
#else /* local or exported variable - write access */
extern uint16 dtemnkt_w;
#endif /* IMPORTED */
#endif /* __DTEMNKT_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: EnvP_p */
#ifdef _DAT_H
#ifndef __ENVP_P_EXT__
#define __ENVP_P_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 EnvP_p;
#else /* local or exported variable - write access */
extern sint16 EnvP_p;
#endif /* IMPORTED */
#endif /* __ENVP_P_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: EnvT_t */
#ifdef _DAT_H
#ifndef __ENVT_T_EXT__
#define __ENVT_T_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 EnvT_t;
#else /* local or exported variable - write access */
extern sint16 EnvT_t;
#endif /* IMPORTED */
#endif /* __ENVT_T_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: flgstign_w */
#ifdef _DAT_H
#ifndef __FLGSTIGN_W_EXT__
#define __FLGSTIGN_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 flgstign_w;
#else /* local or exported variable - write access */
extern uint16 flgstign_w;
#endif /* IMPORTED */
#endif /* __FLGSTIGN_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: flgstinj_w */
#ifdef _DAT_H
#ifndef __FLGSTINJ_W_EXT__
#define __FLGSTINJ_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 flgstinj_w;
#else /* local or exported variable - write access */
extern uint16 flgstinj_w;
#endif /* IMPORTED */
#endif /* __FLGSTINJ_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: fmfkrnew_w */
#ifdef _DAT_H
#ifndef __FMFKRNEW_W_EXT__
#define __FMFKRNEW_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 fmfkrnew_w;
#else /* local or exported variable - write access */
extern sint16 fmfkrnew_w;
#endif /* IMPORTED */
#endif /* __FMFKRNEW_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: mshfm_w */
#ifdef _DAT_H
#ifndef __MSHFM_W_EXT__
#define __MSHFM_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 mshfm_w;
#else /* local or exported variable - write access */
extern uint16 mshfm_w;
#endif /* IMPORTED */
#endif /* __MSHFM_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: offz_w */
#ifdef _DAT_H
#ifndef __OFFZ_W_EXT__
#define __OFFZ_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 offz_w;
#else /* local or exported variable - write access */
extern uint16 offz_w;
#endif /* IMPORTED */
#endif /* __OFFZ_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: psrg1_w */
#ifdef _DAT_H
#ifndef __PSRG1_W_EXT__
#define __PSRG1_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 psrg1_w;
#else /* local or exported variable - write access */
extern uint16 psrg1_w;
#endif /* IMPORTED */
#endif /* __PSRG1_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: psrg_w */
#ifdef _DAT_H
#ifndef __PSRG_W_EXT__
#define __PSRG_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 psrg_w;
#else /* local or exported variable - write access */
extern uint16 psrg_w;
#endif /* IMPORTED */
#endif /* __PSRG_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: ps_w */
#ifdef _DAT_H
#ifndef __PS_W_EXT__
#define __PS_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 ps_w;
#else /* local or exported variable - write access */
extern uint16 ps_w;
#endif /* IMPORTED */
#endif /* __PS_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: pvdg1_w */
#ifdef _DAT_H
#ifndef __PVDG1_W_EXT__
#define __PVDG1_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 pvdg1_w;
#else /* local or exported variable - write access */
extern uint16 pvdg1_w;
#endif /* IMPORTED */
#endif /* __PVDG1_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: pvds_w */
#ifdef _DAT_H
#ifndef __PVDS_W_EXT__
#define __PVDS_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 pvds_w;
#else /* local or exported variable - write access */
extern uint16 pvds_w;
#endif /* IMPORTED */
#endif /* __PVDS_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: pvd_w */
#ifdef _DAT_H
#ifndef __PVD_W_EXT__
#define __PVD_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 pvd_w;
#else /* local or exported variable - write access */
extern uint16 pvd_w;
#endif /* IMPORTED */
#endif /* __PVD_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: szfuba_w */
#ifdef _DAT_H
#ifndef __SZFUBA_W_EXT__
#define __SZFUBA_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 szfuba_w;
#else /* local or exported variable - write access */
extern uint16 szfuba_w;
#endif /* IMPORTED */
#endif /* __SZFUBA_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: szout_w */
#ifdef _DAT_H
#ifndef __SZOUT_W_EXT__
#define __SZOUT_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 szout_w;
#else /* local or exported variable - write access */
extern uint16 szout_w;
#endif /* IMPORTED */
#endif /* __SZOUT_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: tpmshfm_w */
#ifdef _DAT_H
#ifndef __TPMSHFM_W_EXT__
#define __TPMSHFM_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 tpmshfm_w;
#else /* local or exported variable - write access */
extern uint16 tpmshfm_w;
#endif /* IMPORTED */
#endif /* __TPMSHFM_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: tvldste_w */
#ifdef _DAT_H
#ifndef __TVLDSTE_W_EXT__
#define __TVLDSTE_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 tvldste_w;
#else /* local or exported variable - write access */
extern uint16 tvldste_w;
#endif /* IMPORTED */
#endif /* __TVLDSTE_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: tvub_w */
#ifdef _DAT_H
#ifndef __TVUB_W_EXT__
#define __TVUB_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 tvub_w;
#else /* local or exported variable - write access */
extern uint16 tvub_w;
#endif /* IMPORTED */
#endif /* __TVUB_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: ubsq_w */
#ifdef _DAT_H
#ifndef __UBSQ_W_EXT__
#define __UBSQ_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 ubsq_w;
#else /* local or exported variable - write access */
extern uint16 ubsq_w;
#endif /* IMPORTED */
#endif /* __UBSQ_W_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: wmfaseg */
#ifdef _DAT_H
#ifndef __WMFASEG_EXT__
#define __WMFASEG_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 wmfaseg;
#else /* local or exported variable - write access */
extern sint16 wmfaseg;
#endif /* IMPORTED */
#endif /* __WMFASEG_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: wmfazmfseg */
#ifdef _DAT_H
#ifndef __WMFAZMFSEG_EXT__
#define __WMFAZMFSEG_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 wmfazmfseg;
#else /* local or exported variable - write access */
extern sint16 wmfazmfseg;
#endif /* IMPORTED */
#endif /* __WMFAZMFSEG_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: wmflcd */
#ifdef _DAT_H
#ifndef __WMFLCD_EXT__
#define __WMFLCD_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 wmflcd;
#else /* local or exported variable - write access */
extern sint16 wmflcd;
#endif /* IMPORTED */
#endif /* __WMFLCD_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: wmflzmfcd */
#ifdef _DAT_H
#ifndef __WMFLZMFCD_EXT__
#define __WMFLZMFCD_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 wmflzmfcd;
#else /* local or exported variable - write access */
extern sint16 wmflzmfcd;
#endif /* IMPORTED */
#endif /* __WMFLZMFCD_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: wnwsaa_w */
#ifdef _DAT_H
#ifndef __WNWSAA_W_EXT__
#define __WNWSAA_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 wnwsaa_w;
#else /* local or exported variable - write access */
extern sint16 wnwsaa_w;
#endif /* IMPORTED */
#endif /* __WNWSAA_W_EXT__ */
#endif /* _DAT_H */


/* Imported Variable: anztib_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __ANZTIB_W_EXT__
#define __ANZTIB_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 anztib_w;
#else /* local or exported variable - write access */
extern uint16 anztib_w;
#endif /* IMPORTED */
#endif /* __ANZTIB_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: nmot_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __NMOT_W_EXT__
#define __NMOT_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 nmot_w;
#else /* local or exported variable - write access */
extern uint16 nmot_w;
#endif /* IMPORTED */
#endif /* __NMOT_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: wnwe_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __WNWE_W_EXT__
#define __WNWE_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 wnwe_w;
#else /* local or exported variable - write access */
extern sint16 wnwe_w;
#endif /* IMPORTED */
#endif /* __WNWE_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema IramI32 +++++ */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 


/* Exported Variable: GlbDa_lTotDst */
#ifdef _DAT_H
#ifndef __GLBDA_LTOTDST_EXT__
#define __GLBDA_LTOTDST_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint32 GlbDa_lTotDst;
#else /* local or exported variable - write access */
extern sint32 GlbDa_lTotDst;
#endif /* IMPORTED */
#endif /* __GLBDA_LTOTDST_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: tez_l */

#ifndef __TEZ_L_EXT__
#define __TEZ_L_EXT__
extern uint32 tez_l[8];
#endif


/* Exported Variable: te_l */
#ifdef _DAT_H
#ifndef __TE_L_EXT__
#define __TE_L_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint32 te_l;
#else /* local or exported variable - write access */
extern uint32 te_l;
#endif /* IMPORTED */
#endif /* __TE_L_EXT__ */
#endif /* _DAT_H */


/* Imported Variable: KnDet_IntegWinEnd */
#define IMPORTED
#ifndef _D_FILE_ 

#ifndef __KNDET_INTEGWINEND_EXT__
#define __KNDET_INTEGWINEND_EXT__
extern uint32 KnDet_IntegWinEnd[3];
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: KnDet_stSigEvalCurrCmb */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __KNDET_STSIGEVALCURRCMB_EXT__
#define __KNDET_STSIGEVALCURRCMB_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint32 KnDet_stSigEvalCurrCmb;
#else /* local or exported variable - write access */
extern uint32 KnDet_stSigEvalCurrCmb;
#endif /* IMPORTED */
#endif /* __KNDET_STSIGEVALCURRCMB_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: tnwie_l */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __TNWIE_L_EXT__
#define __TNWIE_L_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint32 tnwie_l;
#else /* local or exported variable - write access */
extern uint32 tnwie_l;
#endif /* IMPORTED */
#endif /* __TNWIE_L_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema IramI8 +++++ */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 


/* Exported Variable: Com_stSleepInd */
#ifdef _DAT_H
#ifndef __COM_STSLEEPIND_EXT__
#define __COM_STSLEEPIND_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 Com_stSleepInd;
#else /* local or exported variable - write access */
extern uint8 Com_stSleepInd;
#endif /* IMPORTED */
#endif /* __COM_STSLEEPIND_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: dkrksanf */
#ifdef _DAT_H
#ifndef __DKRKSANF_EXT__
#define __DKRKSANF_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 dkrksanf;
#else /* local or exported variable - write access */
extern uint8 dkrksanf;
#endif /* IMPORTED */
#endif /* __DKRKSANF_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: evz_austot */
#ifdef _DAT_H
#ifndef __EVZ_AUSTOT_EXT__
#define __EVZ_AUSTOT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 evz_austot;
#else /* local or exported variable - write access */
extern uint8 evz_austot;
#endif /* IMPORTED */
#endif /* __EVZ_AUSTOT_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: ftlzs */
#ifdef _DAT_H
#ifndef __FTLZS_EXT__
#define __FTLZS_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 ftlzs;
#else /* local or exported variable - write access */
extern uint8 ftlzs;
#endif /* IMPORTED */
#endif /* __FTLZS_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: fubaanz */
#ifdef _DAT_H
#ifndef __FUBAANZ_EXT__
#define __FUBAANZ_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 fubaanz;
#else /* local or exported variable - write access */
extern uint8 fubaanz;
#endif /* IMPORTED */
#endif /* __FUBAANZ_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: ksnew */
#ifdef _DAT_H
#ifndef __KSNEW_EXT__
#define __KSNEW_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 ksnew;
#else /* local or exported variable - write access */
extern uint8 ksnew;
#endif /* IMPORTED */
#endif /* __KSNEW_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: ubsq */
#ifdef _DAT_H
#ifndef __UBSQ_EXT__
#define __UBSQ_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 ubsq;
#else /* local or exported variable - write access */
extern uint8 ubsq;
#endif /* IMPORTED */
#endif /* __UBSQ_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: vfzg */
#ifdef _DAT_H
#ifndef __VFZG_EXT__
#define __VFZG_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 vfzg;
#else /* local or exported variable - write access */
extern uint8 vfzg;
#endif /* IMPORTED */
#endif /* __VFZG_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: vkr */

#ifndef __VKR_EXT__
#define __VKR_EXT__
extern uint8 vkr[8];
#endif


/* Exported Variable: wea */
#ifdef _DAT_H
#ifndef __WEA_EXT__
#define __WEA_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 wea;
#else /* local or exported variable - write access */
extern uint8 wea;
#endif /* IMPORTED */
#endif /* __WEA_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: weea */

#ifndef __WEEA_EXT__
#define __WEEA_EXT__
extern uint8 weea[8];
#endif


/* Exported Variable: weestsim */
#ifdef _DAT_H
#ifndef __WEESTSIM_EXT__
#define __WEESTSIM_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 weestsim;
#else /* local or exported variable - write access */
extern uint8 weestsim;
#endif /* IMPORTED */
#endif /* __WEESTSIM_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: wes */
#ifdef _DAT_H
#ifndef __WES_EXT__
#define __WES_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 wes;
#else /* local or exported variable - write access */
extern uint8 wes;
#endif /* IMPORTED */
#endif /* __WES_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: zwcalcar */

#ifndef __ZWCALCAR_EXT__
#define __ZWCALCAR_EXT__
extern sint8 zwcalcar[8];
#endif


/* Exported Variable: zzylkr */
#ifdef _DAT_H
#ifndef __ZZYLKR_EXT__
#define __ZZYLKR_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 zzylkr;
#else /* local or exported variable - write access */
extern uint8 zzylkr;
#endif /* IMPORTED */
#endif /* __ZZYLKR_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: zzylkr_int */
#ifdef _DAT_H
#ifndef __ZZYLKR_INT_EXT__
#define __ZZYLKR_INT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 zzylkr_int;
#else /* local or exported variable - write access */
extern uint8 zzylkr_int;
#endif /* IMPORTED */
#endif /* __ZZYLKR_INT_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: zzylzue */
#ifdef _DAT_H
#ifndef __ZZYLZUE_EXT__
#define __ZZYLZUE_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 zzylzue;
#else /* local or exported variable - write access */
extern uint8 zzylzue;
#endif /* IMPORTED */
#endif /* __ZZYLZUE_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: zzylzuear */

#ifndef __ZZYLZUEAR_EXT__
#define __ZZYLZUEAR_EXT__
extern uint8 zzylzuear[2];
#endif


/* Imported Variable: KnDet_ctCyl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __KNDET_CTCYL_EXT__
#define __KNDET_CTCYL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 KnDet_ctCyl;
#else /* local or exported variable - write access */
extern uint8 KnDet_ctCyl;
#endif /* IMPORTED */
#endif /* __KNDET_CTCYL_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: KnDet_ctIntegRsltInvld */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __KNDET_CTINTEGRSLTINVLD_EXT__
#define __KNDET_CTINTEGRSLTINVLD_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 KnDet_ctIntegRsltInvld;
#else /* local or exported variable - write access */
extern uint8 KnDet_ctIntegRsltInvld;
#endif /* IMPORTED */
#endif /* __KNDET_CTINTEGRSLTINVLD_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: KnDet_RlsChkMeasWin */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __KNDET_RLSCHKMEASWIN_EXT__
#define __KNDET_RLSCHKMEASWIN_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 KnDet_RlsChkMeasWin;
#else /* local or exported variable - write access */
extern uint8 KnDet_RlsChkMeasWin;
#endif /* IMPORTED */
#endif /* __KNDET_RLSCHKMEASWIN_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: KnDet_stDiaCtl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __KNDET_STDIACTL_EXT__
#define __KNDET_STDIACTL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 KnDet_stDiaCtl;
#else /* local or exported variable - write access */
extern uint8 KnDet_stDiaCtl;
#endif /* IMPORTED */
#endif /* __KNDET_STDIACTL_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema IramNoReIniI16 +++++ */
/* IramNoReIniI16Header */
#pragma section .sbss.a2 aws 


/* Imported Variable: azoffmsk_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __AZOFFMSK_W_EXT__
#define __AZOFFMSK_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 azoffmsk_w;
#else /* local or exported variable - write access */
extern uint16 azoffmsk_w;
#endif /* IMPORTED */
#endif /* __AZOFFMSK_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: zzaehl_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __ZZAEHL_W_EXT__
#define __ZZAEHL_W_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint16 zzaehl_w;
#else /* local or exported variable - write access */
extern uint16 zzaehl_w;
#endif /* IMPORTED */
#endif /* __ZZAEHL_W_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema MediumReIni +++++ */
/* MediumSlowReIni */
#pragma section .bss.ReIni aw 


/* Exported Variable: dfrzaf2_w */
#ifdef _DAT_H
#ifndef __DFRZAF2_W_EXT__
#define __DFRZAF2_W_EXT__
extern sint16 dfrzaf2_w;
#endif
#endif


/* Exported Variable: dfrzaf_w */
#ifdef _DAT_H
#ifndef __DFRZAF_W_EXT__
#define __DFRZAF_W_EXT__
extern sint16 dfrzaf_w;
#endif
#endif

/* Footer */
#pragma section 

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* ########################### */
/* START MoRamCplLong          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Imported Variable: MoCCom_SwShrPtlResp */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCCOM_SWSHRPTLRESP_EXT__
#define __MOCCOM_SWSHRPTLRESP_EXT__
/* N_DclFm: MoCCom_SwShrPtlResp */
extern uint32 MoCCom_SwShrPtlResp
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCplLong            */
/* ########################### */

/* +++++ Addressschema MsgRam +++++ */
/* MsgRamHeader */
#pragma section .sbss aws 


/* Imported Variable: MoCSOP_stActvMsg */
#define IMPORTED
#ifndef _D_FILE_ 
/* MoCSOP_stActvMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema MsgRamI16 +++++ */
/* MsgRamI16Header */
#pragma section .sbss.a2 aws 


/* Exported Variable: Fan_r */
/* Fan_r is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

/* Footer */
#pragma section 

/* +++++ Addressschema SingleBitI1 +++++ */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 


/* Exported Variable: B_airbag */
#ifdef _DAT_H
#ifndef __B_AIRBAG_EXT__
#define __B_AIRBAG_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_airbag;
#define GET_B_airbag (B_airbag)
#else /* local or exported variable - write access */
extern _bit B_airbag;
#define SET_B_airbag (B_airbag = TRUE)
#define CLR_B_airbag (B_airbag = FALSE)
#define GET_B_airbag (B_airbag)
#define PUT_B_airbag(val) ((val) ? SET_B_airbag : CLR_B_airbag)
#endif /* IMPORTED */
#endif /* __B_AIRBAG_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_atmtpa */
#ifdef _DAT_H
#ifndef __B_ATMTPA_EXT__
#define __B_ATMTPA_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_atmtpa;
#define GET_B_atmtpa (B_atmtpa)
#else /* local or exported variable - write access */
extern _bit B_atmtpa;
#define SET_B_atmtpa (B_atmtpa = TRUE)
#define CLR_B_atmtpa (B_atmtpa = FALSE)
#define GET_B_atmtpa (B_atmtpa)
#define PUT_B_atmtpa(val) ((val) ? SET_B_atmtpa : CLR_B_atmtpa)
#endif /* IMPORTED */
#endif /* __B_ATMTPA_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_atmtpa2 */
#ifdef _DAT_H
#ifndef __B_ATMTPA2_EXT__
#define __B_ATMTPA2_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_atmtpa2;
#define GET_B_atmtpa2 (B_atmtpa2)
#else /* local or exported variable - write access */
extern _bit B_atmtpa2;
#define SET_B_atmtpa2 (B_atmtpa2 = TRUE)
#define CLR_B_atmtpa2 (B_atmtpa2 = FALSE)
#define GET_B_atmtpa2 (B_atmtpa2)
#define PUT_B_atmtpa2(val) ((val) ? SET_B_atmtpa2 : CLR_B_atmtpa2)
#endif /* IMPORTED */
#endif /* __B_ATMTPA2_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_blkmd */
#ifdef _DAT_H
#ifndef __B_BLKMD_EXT__
#define __B_BLKMD_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_blkmd;
#define GET_B_blkmd (B_blkmd)
#else /* local or exported variable - write access */
extern _bit B_blkmd;
#define SET_B_blkmd (B_blkmd = TRUE)
#define CLR_B_blkmd (B_blkmd = FALSE)
#define GET_B_blkmd (B_blkmd)
#define PUT_B_blkmd(val) ((val) ? SET_B_blkmd : CLR_B_blkmd)
#endif /* IMPORTED */
#endif /* __B_BLKMD_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_esgcan */
#ifdef _DAT_H
#ifndef __B_ESGCAN_EXT__
#define __B_ESGCAN_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_esgcan;
#define GET_B_esgcan (B_esgcan)
#else /* local or exported variable - write access */
extern _bit B_esgcan;
#define SET_B_esgcan (B_esgcan = TRUE)
#define CLR_B_esgcan (B_esgcan = FALSE)
#define GET_B_esgcan (B_esgcan)
#define PUT_B_esgcan(val) ((val) ? SET_B_esgcan : CLR_B_esgcan)
#endif /* IMPORTED */
#endif /* __B_ESGCAN_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_evloc */
#ifdef _DAT_H
#ifndef __B_EVLOC_EXT__
#define __B_EVLOC_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_evloc;
#define GET_B_evloc (B_evloc)
#else /* local or exported variable - write access */
extern _bit B_evloc;
#define SET_B_evloc (B_evloc = TRUE)
#define CLR_B_evloc (B_evloc = FALSE)
#define GET_B_evloc (B_evloc)
#define PUT_B_evloc(val) ((val) ? SET_B_evloc : CLR_B_evloc)
#endif /* IMPORTED */
#endif /* __B_EVLOC_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_mdstim */
#ifdef _DAT_H
#ifndef __B_MDSTIM_EXT__
#define __B_MDSTIM_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_mdstim;
#define GET_B_mdstim (B_mdstim)
#else /* local or exported variable - write access */
extern _bit B_mdstim;
#define SET_B_mdstim (B_mdstim = TRUE)
#define CLR_B_mdstim (B_mdstim = FALSE)
#define GET_B_mdstim (B_mdstim)
#define PUT_B_mdstim(val) ((val) ? SET_B_mdstim : CLR_B_mdstim)
#endif /* IMPORTED */
#endif /* __B_MDSTIM_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_milmd */
#ifdef _DAT_H
#ifndef __B_MILMD_EXT__
#define __B_MILMD_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_milmd;
#define GET_B_milmd (B_milmd)
#else /* local or exported variable - write access */
extern _bit B_milmd;
#define SET_B_milmd (B_milmd = TRUE)
#define CLR_B_milmd (B_milmd = FALSE)
#define GET_B_milmd (B_milmd)
#define PUT_B_milmd(val) ((val) ? SET_B_milmd : CLR_B_milmd)
#endif /* IMPORTED */
#endif /* __B_MILMD_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_nsp */
#ifdef _DAT_H
#ifndef __B_NSP_EXT__
#define __B_NSP_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_nsp;
#define GET_B_nsp (B_nsp)
#else /* local or exported variable - write access */
extern _bit B_nsp;
#define SET_B_nsp (B_nsp = TRUE)
#define CLR_B_nsp (B_nsp = FALSE)
#define GET_B_nsp (B_nsp)
#define PUT_B_nsp(val) ((val) ? SET_B_nsp : CLR_B_nsp)
#endif /* IMPORTED */
#endif /* __B_NSP_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_poweron */
#ifdef _DAT_H
#ifndef __B_POWERON_EXT__
#define __B_POWERON_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_poweron;
#define GET_B_poweron (B_poweron)
#else /* local or exported variable - write access */
extern _bit B_poweron;
#define SET_B_poweron (B_poweron = TRUE)
#define CLR_B_poweron (B_poweron = FALSE)
#define GET_B_poweron (B_poweron)
#define PUT_B_poweron(val) ((val) ? SET_B_poweron : CLR_B_poweron)
#endif /* IMPORTED */
#endif /* __B_POWERON_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_sa */
#ifdef _DAT_H
#ifndef __B_SA_EXT__
#define __B_SA_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_sa;
#define GET_B_sa (B_sa)
#else /* local or exported variable - write access */
extern _bit B_sa;
#define SET_B_sa (B_sa = TRUE)
#define CLR_B_sa (B_sa = FALSE)
#define GET_B_sa (B_sa)
#define PUT_B_sa(val) ((val) ? SET_B_sa : CLR_B_sa)
#endif /* IMPORTED */
#endif /* __B_SA_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_sgcanp */
#ifdef _DAT_H
#ifndef __B_SGCANP_EXT__
#define __B_SGCANP_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_sgcanp;
#define GET_B_sgcanp (B_sgcanp)
#else /* local or exported variable - write access */
extern _bit B_sgcanp;
#define SET_B_sgcanp (B_sgcanp = TRUE)
#define CLR_B_sgcanp (B_sgcanp = FALSE)
#define GET_B_sgcanp (B_sgcanp)
#define PUT_B_sgcanp(val) ((val) ? SET_B_sgcanp : CLR_B_sgcanp)
#endif /* IMPORTED */
#endif /* __B_SGCANP_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_stend */
#ifdef _DAT_H
#ifndef __B_STEND_EXT__
#define __B_STEND_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_stend;
#define GET_B_stend (B_stend)
#else /* local or exported variable - write access */
extern _bit B_stend;
#define SET_B_stend (B_stend = TRUE)
#define CLR_B_stend (B_stend = FALSE)
#define GET_B_stend (B_stend)
#define PUT_B_stend(val) ((val) ? SET_B_stend : CLR_B_stend)
#endif /* IMPORTED */
#endif /* __B_STEND_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_stendes */
#ifdef _DAT_H
#ifndef __B_STENDES_EXT__
#define __B_STENDES_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_stendes;
#define GET_B_stendes (B_stendes)
#else /* local or exported variable - write access */
extern _bit B_stendes;
#define SET_B_stendes (B_stendes = TRUE)
#define CLR_B_stendes (B_stendes = FALSE)
#define GET_B_stendes (B_stendes)
#define PUT_B_stendes(val) ((val) ? SET_B_stendes : CLR_B_stendes)
#endif /* IMPORTED */
#endif /* __B_STENDES_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: B_sttakt */
#ifdef _DAT_H
#ifndef __B_STTAKT_EXT__
#define __B_STTAKT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_sttakt;
#define GET_B_sttakt (B_sttakt)
#else /* local or exported variable - write access */
extern _bit B_sttakt;
#define SET_B_sttakt (B_sttakt = TRUE)
#define CLR_B_sttakt (B_sttakt = FALSE)
#define GET_B_sttakt (B_sttakt)
#define PUT_B_sttakt(val) ((val) ? SET_B_sttakt : CLR_B_sttakt)
#endif /* IMPORTED */
#endif /* __B_STTAKT_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: CoEng_bEngReStrt */
#ifdef _DAT_H
#ifndef __COENG_BENGRESTRT_EXT__
#define __COENG_BENGRESTRT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit CoEng_bEngReStrt;
#define GET_CoEng_bEngReStrt (CoEng_bEngReStrt)
#else /* local or exported variable - write access */
extern _bit CoEng_bEngReStrt;
#define SET_CoEng_bEngReStrt (CoEng_bEngReStrt = TRUE)
#define CLR_CoEng_bEngReStrt (CoEng_bEngReStrt = FALSE)
#define GET_CoEng_bEngReStrt (CoEng_bEngReStrt)
#define PUT_CoEng_bEngReStrt(val) ((val) ? SET_CoEng_bEngReStrt : CLR_CoEng_bEngReStrt)
#endif /* IMPORTED */
#endif /* __COENG_BENGRESTRT_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: StSys_stSpareStrt */
#ifdef _DAT_H
#ifndef __STSYS_STSPARESTRT_EXT__
#define __STSYS_STSPARESTRT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit StSys_stSpareStrt;
#define GET_StSys_stSpareStrt (StSys_stSpareStrt)
#else /* local or exported variable - write access */
extern _bit StSys_stSpareStrt;
#define SET_StSys_stSpareStrt (StSys_stSpareStrt = TRUE)
#define CLR_StSys_stSpareStrt (StSys_stSpareStrt = FALSE)
#define GET_StSys_stSpareStrt (StSys_stSpareStrt)
#define PUT_StSys_stSpareStrt(val) ((val) ? SET_StSys_stSpareStrt : CLR_StSys_stSpareStrt)
#endif /* IMPORTED */
#endif /* __STSYS_STSPARESTRT_EXT__ */
#endif /* _DAT_H */


/* Imported Variable: B_kl15 */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __B_KL15_EXT__
#define __B_KL15_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_kl15;
#define GET_B_kl15 (B_kl15)
#else /* local or exported variable - write access */
extern _bit B_kl15;
#define SET_B_kl15 (B_kl15 = TRUE)
#define CLR_B_kl15 (B_kl15 = FALSE)
#define GET_B_kl15 (B_kl15)
#define PUT_B_kl15(val) ((val) ? SET_B_kl15 : CLR_B_kl15)
#endif /* IMPORTED */
#endif /* __B_KL15_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: B_nldg */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __B_NLDG_EXT__
#define __B_NLDG_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_nldg;
#define GET_B_nldg (B_nldg)
#else /* local or exported variable - write access */
extern _bit B_nldg;
#define SET_B_nldg (B_nldg = TRUE)
#define CLR_B_nldg (B_nldg = FALSE)
#define GET_B_nldg (B_nldg)
#define PUT_B_nldg(val) ((val) ? SET_B_nldg : CLR_B_nldg)
#endif /* IMPORTED */
#endif /* __B_NLDG_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: B_phade */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __B_PHADE_EXT__
#define __B_PHADE_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_phade;
#define GET_B_phade (B_phade)
#else /* local or exported variable - write access */
extern _bit B_phade;
#define SET_B_phade (B_phade = TRUE)
#define CLR_B_phade (B_phade = FALSE)
#define GET_B_phade (B_phade)
#define PUT_B_phade(val) ((val) ? SET_B_phade : CLR_B_phade)
#endif /* IMPORTED */
#endif /* __B_PHADE_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: KnDet_bNewEval */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __KNDET_BNEWEVAL_EXT__
#define __KNDET_BNEWEVAL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit KnDet_bNewEval;
#define GET_KnDet_bNewEval (KnDet_bNewEval)
#else /* local or exported variable - write access */
extern _bit KnDet_bNewEval;
#define SET_KnDet_bNewEval (KnDet_bNewEval = TRUE)
#define CLR_KnDet_bNewEval (KnDet_bNewEval = FALSE)
#define GET_KnDet_bNewEval (KnDet_bNewEval)
#define PUT_KnDet_bNewEval(val) ((val) ? SET_KnDet_bNewEval : CLR_KnDet_bNewEval)
#endif /* IMPORTED */
#endif /* __KNDET_BNEWEVAL_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: KnDet_bStMeasWin */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __KNDET_BSTMEASWIN_EXT__
#define __KNDET_BSTMEASWIN_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit KnDet_bStMeasWin;
#define GET_KnDet_bStMeasWin (KnDet_bStMeasWin)
#else /* local or exported variable - write access */
extern _bit KnDet_bStMeasWin;
#define SET_KnDet_bStMeasWin (KnDet_bStMeasWin = TRUE)
#define CLR_KnDet_bStMeasWin (KnDet_bStMeasWin = FALSE)
#define GET_KnDet_bStMeasWin (KnDet_bStMeasWin)
#define PUT_KnDet_bStMeasWin(val) ((val) ? SET_KnDet_bStMeasWin : CLR_KnDet_bStMeasWin)
#endif /* IMPORTED */
#endif /* __KNDET_BSTMEASWIN_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema SlowNoReIni +++++ */


/* Exported Variable: lamsons2_w */
#ifdef _DAT_H
#ifndef __LAMSONS2_W_EXT__
#define __LAMSONS2_W_EXT__
extern uint16 lamsons2_w;
#endif
#endif


/* Exported Variable: lamsons_w */
#ifdef _DAT_H
#ifndef __LAMSONS_W_EXT__
#define __LAMSONS_W_EXT__
extern uint16 lamsons_w;
#endif
#endif



#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of EpmCaS_Adap -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Spd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_SpdGrd -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_SwAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of HWSIG -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of IgnDD -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of InjDDPfi -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of KnDetControl -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of KnDetSigEval -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of KnDet_MeasWinCtl -- */
/* -- No referenced PTA Structures of MoCCom_Co -- */
/* -- No referenced PTA Structures of MoCSOP_Co -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of T152MED -- */
/* -- No referenced PTA Structures of UEGO_CJ135IPmpEval -- */
/* +++++ Addressschema DataFast +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of UEGO_CJ135RTEval -- */
/* +++++ Addressschema DataFast +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema DataFar +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_SWADP_DATAFAR_T_DEF
#define DATA_SWADP_DATAFAR_T_DEF
typedef struct
{
    /* ----- Parameter CWDMDZAG ----- */
    uint8 _CWDMDZAG;
    /* ----- Parameter DFP_UBR ----- */
    uint16 _DFP_UBR;
    /* ----- Parameter SENZZYL ----- */
    SENZZYL_t _SENZZYL ;
    /* ----- Parameter WNWRAS ----- */
    sint16 _WNWRAS;
    /* ----- Parameter WNWREO ----- */
    sint16 _WNWREO;
} DATA_SWAdp_DataFar_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_SWAdp_DataFar_t DATA_SWAdp_DataFar
    __attribute__ ((asection (".pta_dataDataFar_SWAdp","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_SWAdp_DataFar_t * const VECT_SWAdp_DataFar
    __attribute__ ((asection (".sdata.pta_vectDataFar_SWAdp","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramI16 +++++ */

/* +++++ Addressschema IramI32 +++++ */

/* +++++ Addressschema IramI8 +++++ */

/* +++++ Addressschema MediumReIni +++++ */

/* +++++ Addressschema MsgRamI16 +++++ */

/* +++++ Addressschema SingleBitI1 +++++ */

/* +++++ Addressschema SlowNoReIni +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema DataFar +++++ */

/* -- Macro for local Parameter CWDMDZAG -- */
#ifndef CWDMDZAG
#define CWDMDZAG (VECT_SWAdp_DataFar->_CWDMDZAG)
#endif

#ifndef RP_CWDMDZAG
#define RP_CWDMDZAG (DATA_SWAdp_DataFar._CWDMDZAG)
#endif

#ifndef __CWDMDZAG
#define __CWDMDZAG (VECT_SWAdp_DataFar->_CWDMDZAG)
#endif

/* -- Macro for local Parameter DFP_UBR -- */
#ifndef DFP_UBR
#define DFP_UBR (VECT_SWAdp_DataFar->_DFP_UBR)
#endif

#ifndef RP_DFP_UBR
#define RP_DFP_UBR (DATA_SWAdp_DataFar._DFP_UBR)
#endif

#ifndef __DFP_UBR
#define __DFP_UBR (VECT_SWAdp_DataFar->_DFP_UBR)
#endif

/* -- Macro for local Parameter SENZZYL -- */
#ifndef SENZZYL
#define SENZZYL (VECT_SWAdp_DataFar->_SENZZYL)
#endif

#ifndef RP_SENZZYL
#define RP_SENZZYL (DATA_SWAdp_DataFar._SENZZYL)
#endif

#ifndef __SENZZYL
#define __SENZZYL (VECT_SWAdp_DataFar->_SENZZYL)
#endif

/* -- Macro for local Parameter WNWRAS -- */
#ifndef WNWRAS
#define WNWRAS (VECT_SWAdp_DataFar->_WNWRAS)
#endif

#ifndef RP_WNWRAS
#define RP_WNWRAS (DATA_SWAdp_DataFar._WNWRAS)
#endif

#ifndef __WNWRAS
#define __WNWRAS (VECT_SWAdp_DataFar->_WNWRAS)
#endif

/* -- Macro for local Parameter WNWREO -- */
#ifndef WNWREO
#define WNWREO (VECT_SWAdp_DataFar->_WNWREO)
#endif

#ifndef RP_WNWREO
#define RP_WNWREO (DATA_SWAdp_DataFar._WNWREO)
#endif

#ifndef __WNWREO
#define __WNWREO (VECT_SWAdp_DataFar->_WNWREO)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramI16 +++++ */

/* +++++ Addressschema IramI32 +++++ */

/* +++++ Addressschema IramI8 +++++ */

/* +++++ Addressschema MediumReIni +++++ */

/* +++++ Addressschema MsgRamI16 +++++ */

/* +++++ Addressschema SingleBitI1 +++++ */

/* +++++ Addressschema SlowNoReIni +++++ */


#undef _DAT_H
#endif /* _SWADP_DAT_H */
