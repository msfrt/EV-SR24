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
 * Administrative Information (automatically filled in by [N]estor)  *
 *************************************************************************
 *
 * $Filename__:de_conf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:Configuration of DEs$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HNZ2SI$
 * $Date______:06.10.2009$
 * $Class_____:SWHDR$
 * $Name______:de_conf$
 * $Variant___:5.0.0_003$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 *************************************************************************
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 5.0.0_003; 0     06.10.2009 HNZ2SI
 *   I: for all GS VW\AUDI projects
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
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
 * $Filename__:de_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Configuration of DEs$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HNZ2SI$ 
 * $Date______:06.10.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:de_conf$ 
 * $Variant___:5.0.0_003$ 
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
 * 5.0.0_003; 0     06.10.2009 HNZ2SI
 *   I: for all GS VW\AUDI projects
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DE_CONF_H
#define _DE_CONF_H

#define UPMPP_DD_INLINE_ENABLE           0x01
#define UPMPP_VD_INLINE_ENABLE           0x01
#define UPMPT_DD_INLINE_ENABLE           0x01
#define UPMPT_VD_INLINE_ENABLE           0x01
#define UCATUST_DD_INLINE_ENABLE         0x01
#define UCATUST_VD_INLINE_ENABLE         0x01

#define ACSWT_DD_INLINE_ENABLE           0x01
#define ACSWT_VDVAR_INLINE_ENABLE        0x01
#define ACCLNTP_DD_INLINE_ENABLE         0x01
#define ACCLNTP_VD_INLINE_ENABLE         0x01
#define ACCMPR_DD_INLINE_ENABLE          0x01
#define ACCMPR_VD_INLINE_ENABLE          0x01
#define ALTIO_DD_INLINE_ENABLE           0x01
#define ALTIO_VD_INLINE_ENABLE           0x01
#define BATTU_DD_INLINE_ENABLE           0x01
#define BATTU_VD_VAR_INLINE_ENABLE       0x01
#define GLW_DD_INLINE_ENABLE             0x01
#define OILPLMP_VD_INLINE_ENABLE         0x01
#define EGRVLV_VD_INLINE_ENABLE          0x01
#define EGRVLV_DD_INLINE_ENABLE          0x01
#define EGRVLV_DDSENS_INLINE_ENABLE      0x01
#define EGRVLV_VDPOSGOV_INLINE_ENABLE    0x01
#define EGRVLV_VDSENS_INLINE_ENABLE      0x01
#define CENGUST_DD_INLINE_ENABLE         0x01
#define CENGUST_VD_INLINE_ENABLE         0x01
#define CENGDST_DD_INLINE_ENABLE         0x01
#define CENGDST_VD_INLINE_ENABLE         0x01
#define CENGDST_VDVAR_INLINE_ENABLE      0x01
#define CACDSP_DD_INLINE_ENABLE          0x01
#define CACDSP_DD_ADC_INLINE_ENABLE      0x01
#define CACDSP_VD_INLINE_ENABLE          0x01
#define CACDSP_VD_VAR_INLINE_ENABLE      0x01
#define CACDST_DD_INLINE_ENABLE          0x01
#define CACDST_DD_ADC_INLINE_ENABLE      0x01
#define CACDST_VD_INLINE_ENABLE          0x01
#define CACDST_VD_VAR_INLINE_ENABLE      0x01
#define AFST_DD_INLINE_ENABLE            0x01
#define AFST_VD_VAR_INLINE_ENABLE        0x01
#define PAIRFLTDS_DD_INLINE_ENABLE       0x01
#define PAIRFLTDS_VD_INLINE_ENABLE       0x01
#define PEGRLPDIFF_DD_INLINE_ENABLE      0x01
#define PEGRLPDIFF_VD_INLINE_ENABLE      0x01
#define FUELT_DD_INLINE_ENABLE           0x01
#define FUELT_VD_INLINE_ENABLE           0x01
#define FUELT_VDMODEL_INLINE_ENABLE      0x01
#define ADDHTR_DD_VAR_INLINE_ENABLE      0x01
#define AFS_DD_INLINE_ENABLE             0x01
#define VSWVLVAPOS_DD_INLINE_ENABLE      0x01
#define VSWVLVAPOS_VD_INLINE_ENABLE      0x01
#define TRBCHAPOS_DD_INLINE_ENABLE       0x01
#define TRBCHAPOS_VD_INLINE_ENABLE       0x01
#define TRBCH_VDPOSGOV_INLINE_ENABLE     0x01
#define TRBCH_VDPOSGOVCMPR_INLINE_ENABLE 0x01
#define TRBCHAPOS_DDCMPR_INLINE_ENABLE   0x01
#define TRBCHAPOS_VDCMPR_INLINE_ENABLE   0x01
#define GLW_DD_INLINE_ENABLE             0x01
#define OILPLMP_VD_INLINE_ENABLE         0x01
#define OILLVL_DD_INLINE_ENABLE          0x01
#define OILP_DD_INLINE_ENABLE            0x01
#define OILT_DD_INLINE_ENABLE            0x01
#define OILT_VD_INLINE_ENABLE            0x01
#define OILT_VDVAR_INLINE_ENABLE         0x01
#define PPFLTDIFF_DD_ADC_INLINE_ENAB     0x01
#define PPFLTDIFF_VD_INLINE_ENABLE       0x01
#define PPFLTDIFF_DD_INLINE_ENABLE       0x01
#define PPFLTUS_VD_INLINE_ENABLE         0x01
#define PPFLTUS_DD_INLINE_ENABLE         0x01
#define TPFLTDS_DD_INLINE_ENABLE         0x01
#define TPFLTDS_VD_INLINE_ENABLE         0x01
#define TNSCDS_DD_INLINE_ENABLE          0x01
#define TNSCDS_VD_INLINE_ENABLE          0x01
#define TPFLTUS_DD_INLINE_ENABLE         0x01
#define TPFLTUS_VD_INLINE_ENABLE         0x01
#define PTRBNUS_DD_INLINE_ENABLE         0x01
#define PTRBNUS_VDVAR_INLINE_ENABLE      0x01
#define TOXICATDS_DD_INLINE_ENABLE       0x01
#define TOXICATDS_VD_INLINE_ENABLE       0x01
#define TOXICATUS_DD_INLINE_ENABLE       0x01
#define TOXICATUS_VD_INLINE_ENABLE       0x01
#define TPFLTUS_DD_INLINE_ENABLE         0x01
#define TPFLTUS_VD_INLINE_ENABLE         0x01
#define TTRBNUS_DD_INLINE_ENABLE         0x01
#define TTRBNUS_VD_INLINE_ENABLE         0x01
#define TTRBNUS_VDVAR_INLINE_ENABLE      0x01
#define EXH_FLD_INLINE_ENABLE            0x01
#define ADPMP_DDVAR_INLINE_ENABLE        0x01
#define ADLVLSWT_DD_INLINE_ENABLE        0x01
#define AIRBG_DD_INLINE_ENABLE           0x01
#define BRK_DD_INLINE_ENABLE             0x01
#define BRK_VD_INLINE_ENABLE             0x01
#define CLTH_DD_INLINE_ENABLE            0x01
#define CRC_DD_INLINE_ENABLE             0x01
#define ECBVLVAPOS_DD_INLINE_ENABLE      0x01
#define ECBVLVAPOS_VD_INLINE_ENABLE      0x01
#define ENVP_DD_ADC_INLINE_ENABLE        0x01
#define ENVP_VD_INLINE_ENABLE            0x01
#define ENVP_DD_INLINE_ENABLE            0x01
#define ENVP_VDMODEL_INLINE_ENABLE       0x01
#define ENVT_DD_ADC_INLINE_ENABLE        0x01
#define ENVT_VD_INLINE_ENABLE            0x01
#define ENVT_DD_INLINE_ENABLE            0x01
#define GBXNPOS_DD_INLINE_ENABLE         0x01
#define PPFLTDIFF_DD_ADC_INLINE_ENABLE   0x01
#define STWHLAG_DD_READ_INLINE_ENABLE    0x01
#define STWHLAG_VD_INLINE_ENABLE         0x01
#define STWHLAG_DD_INLINE_ENABLE         0x01
#define VEHV_DD_INLINE_ENABLE            0x01
#define T15_DD_INLINE_ENABLE             0x01
#define OILT_VDVAR_INLINE_ENABLE         0x01
#define OILT_DD_INLINE_ENABLE            0x01
#define OILT_VD_INLINE_ENABLE            0x01
#define OILP_DD_INLINE_ENABLE            0x01
#define EXHFLPLP_DD_INLINE_ENABLE        0x01
#define EXHFLPLP_DDSENS_INLINE_ENABLE    0x01
#define EXHFLPLP_VDPOSGOV_INLINE_ENABLE  0x01
#define EXHFLPLP_VDSENS_INLINE_ENABLE    0x01
#define ADPMP_DDVAR_INLINE_ENABLE        0x01
#define ADLVLSWT_DD_INLINE_ENABLE        0x01
#define AIRBG_DD_INLINE_ENABLE           0x01
#define ECBVLVAPOS_DD_INLINE_ENABLE      0x01
#define ECBVLVAPOS_VD_INLINE_ENABLE      0x01
#define PPFLTDIFF_DD_INLINE_ENABLE       0x01
#define PPFLTDIFF_DD_ADC_INLINE_ENABLE   0x01
#define THRVLV_DDSENS_INLINE_ENABLE      0x01
#define THRVLV_VDPOSGOV_INLINE_ENABLE    0x01
#define THRVLV_VDSENS_INLINE_ENABLE      0x01
#define EMDMP_DD_INLINE_ENABLE           0x01
#define CLTH_DDINTRLCK_INLINE_ENABLE     0x01
#define FLQL_DD_INLINE_ENABLE            0x01
#define FLQL_VD_INLINE_ENABLE            0x01
#define LAS_DDADC_INLINE_ENABLE          0x01
#define LAS_DD_INLINE_ENABLE             0x01
#define LAS_VD_INLINE_ENABLE             0x01
#define T50_DD_INLINE_ENABLE             0x01
#define T50_DDRX_INLINE_ENABLE           0x01
#define CMBCWT_VD_INLINE_ENABLE          0x01
#define CMBCWT_VDVAR_INLINE_ENABLE       0x01
#define CMBCWT_DD_INLINE_ENABLE          0x01
#define TRBCHSPD_DD_INLINE_ENABLE        0x01
#define TRBCHSPD_SRCLORLS_INLINE_ENABLE  0x01
#define TRBCHSPD_LONPERRLS_INLINE_ENABLE 0x01
#define TRBCHSPD_VDMODEL_INLINE_ENABLE   0x01
#define TRBCHSPD_VDPLAUS_INLINE_ENABLE   0x01
#define TRBCH_DDVAR_INLINE_ENABLE        0x01
#define EGRVLV_DDVAR_INLINE_ENABLE       0x01
#define VSWVLV_DDVAR_INLINE_ENABLE       0x01
#define ECBVLV_DDVAR_INLINE_ENABLE       0x01
#define DEVLIB_PWRSTGSTATE_INLINE_ENABLE   0x01
#define EXHCIL_FLD_INLINE_ENABLE         0x01

#define T50_DD_INLINE_ENABLE             0x01
#define T50_DDRX_INLINE_ENABLE           0x01
#define EMDMP_DD_INLINE_ENABLE           0x01
#define HCUn_VD_INLINE_ENABLE            0x01
#define TAS_DD_INLINE_ENABLE             0x01

#define OIL_DD_INLINE_ENABLE			 0x01
#define OIL_VD_INLINE_ENABLE			 0x01

#define CLTH_DDAUTOSTRT_INLINE_ENABLE	 0x01
#define CLTH_VDAUTOSTRT_INLINE_ENABLE    0x01

#endif
