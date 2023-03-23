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
 * $Filename__:srv_ipoadapter.h$
 *
 * $Author____:PIR5COB$
 *
 * $Function__:Inclusion of interpolation adapter for address calculation$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIR5COB$
 * $Date______:05.09.2014$
 * $Class_____:SWHDR$
 * $Name______:srv_ipoadapter$
 * $Variant___:1.23.0$
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
 * 1.23.0; 0     05.09.2014 PIR5COB
 *   Updation of address calculation adapters for lookup near map 
 *   functionalities
 * 
 * 1.22.0; 0     18.08.2014 PIR5COB
 *   Removal of the MISRA warnings for the adscalc adapter
 * 
 * 1.20.0; 0     24.12.2013 PIR5COB
 *   The address calculation adapters are added for the new mixed data type 
 *   interpolation functionality
 * 
 * 1.18.0; 0     23.04.2013 PIR5COB
 *   IPO Adapter for integer and float interpolation functionality is added
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

/**
 ***********************************************************************************************************************
 * \moduledescription
 *                        Interpolation module for curve and map interpolation
 *
 * \scope                 API
 ***********************************************************************************************************************
 */
#ifndef _ADAPTER_ADS_CALC_
#define _ADAPTER_ADS_CALC_
#ifndef _IPOADAPTER_H_
#define _IPOADAPTER_H_	/* use adapter and calculate from one pointer to curve */

/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION CURVES NO GAPS ARE CREATED
 *
 ***********************************************************************************************************************
 */

#define SrvX_IpoCurve_U8_S8_AdsCalc(X,N,XDIST,VAL) 	        (SrvX_IpoCurve_U8_S8((X),(N),(&(XDIST)[0]),((const sint8*)(&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_S8_U8_AdsCalc(X,N,XDIST,VAL) 	        (SrvX_IpoCurve_S8_U8((X),(N),(&(XDIST)[0]),((const uint8*)(&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_S8_S8_AdsCalc(X,N,XDIST,VAL) 	        (SrvX_IpoCurve_S8_S8((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_U8_U8_AdsCalc(X,N,XDIST,VAL) 	        (SrvX_IpoCurve_U8_U8((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_U16_S16_AdsCalc(X,N,XDIST,VAL)     	(SrvX_IpoCurve_U16_S16((X),(N),(&(XDIST)[0]),((const sint16*)(&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_S16_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_S16_U16((X),(N),(&(XDIST)[0]),((const uint16*)(&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_S16_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_S16_S16((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_U16_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_U16_U16((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_U16_U8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_U16_U8((X),(N),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_S16_S8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_S16_S8((X),(N),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_S16_U8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_S16_U8((X),(N),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (N))))
#define SrvX_IpoCurve_U16_S8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_U16_S8((X),(N),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_U8_S8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U8_S8((X),(N),(&(XDIST)[0]),((const sint8*)(&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_S8_U8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S8_U8((X),(N),(&(XDIST)[0]),((const uint8*)(&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_S8_S8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S8_S8((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_U8_U8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U8_U8((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_U16_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U16_S16((X),(N),(&(XDIST)[0]),((const sint16*)(&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_S16_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S16_U16((X),(N),(&(XDIST)[0]),((const uint16*)(&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_S16_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S16_S16((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_U16_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U16_U16((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_U16_S8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U16_S8((X),(N),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_U16_U8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U16_U8((X),(N),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_S16_S8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S16_S8((X),(N),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (N))))
#define SrvX_LkUpCurve_S16_U8_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S16_U8((X),(N),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (N))))

/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION CURVES NO GAPS ARE CREATED - MIXED DATA TYPE INTERPOLATION FUNCTIONALITIES
 *
 ***********************************************************************************************************************
 */
 
#define SrvF_IpoCurve_R32_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvF_IpoCurve_R32_U16((X),(N),(&(XDIST)[0]),((const uint16*)(const void*)((&(XDIST)[0]) + (N)))))
#define SrvF_IpoCurve_R32_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvF_IpoCurve_R32_S16((X),(N),(&(XDIST)[0]),((const sint16*)(const void*)((&(XDIST)[0]) + (N)))))
#define SrvF_IpoCurve_R32_U8_AdsCalc(X,N,XDIST,VAL) 	    (SrvF_IpoCurve_R32_U8((X),(N),(&(XDIST)[0]),((const uint8*)(const void*)((&(XDIST)[0]) + (N)))))
#define SrvF_IpoCurve_R32_S8_AdsCalc(X,N,XDIST,VAL) 	    (SrvF_IpoCurve_R32_S8((X),(N),(&(XDIST)[0]),((const sint8*)(const void*)((&(XDIST)[0]) + (N)))))


/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION CURVES CREATION OF GAPS
 *
 ***********************************************************************************************************************
 */

#define SrvX_IpoCurve_U8_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_U8_U16((X),(N),(&(XDIST)[0]),((const uint16*)(const void*)(&(N))) + (((N) + 2) / 2)))
#define SrvX_LkUpCurve_U8_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U8_U16((X),(N),(&(XDIST)[0]),((const uint16*)(const void*)(&(N))) + (((N) + 2) / 2)))
#define SrvX_IpoCurve_U8_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_U8_S16((X),(N),(&(XDIST)[0]),((const sint16*)(const void*)(&(N))) + (((N) + 2) / 2)))
#define SrvX_LkUpCurve_U8_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_U8_S16((X),(N),(&(XDIST)[0]),((const sint16*)(const void*)(&(N))) + (((N) + 2) / 2)))
#define SrvX_IpoCurve_S8_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_S8_U16((X),(N),(&(XDIST)[0]),((const uint16*)(const void*)(&(N)))+ (((N) + 2) / 2)))
#define SrvX_LkUpCurve_S8_U16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S8_U16((X),(N),(&(XDIST)[0]),((const uint16*)(const void*)(&(N))) + (((N) + 2) / 2)))
#define SrvX_IpoCurve_S8_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_IpoCurve_S8_S16((X),(N),(&(XDIST)[0]),((const sint16*)(const void*)(&(N))) + (((N) + 2) / 2)))
#define SrvX_LkUpCurve_S8_S16_AdsCalc(X,N,XDIST,VAL) 	    (SrvX_LkUpCurve_S8_S16((X),(N),(&(XDIST)[0]),((const sint16*)(const void*)(&(N))) + (((N) + 2) / 2)))

  /*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION CURVES - CREATION OF GAPS - 32-bit functionalities
 *
 ***********************************************************************************************************************
 */
 #define SrvX_IpoCurve_S16_S32_AdsCalc(X,N,XDIST,VAL) 	        (SrvX_IpoCurve_S16_S32( (X),(N),(&(XDIST)[0]),(const sint32*)(const void*)((&(XDIST)[0]) + ((N) + (((N) & 1L) ^ 1L)))))
 
   /*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION CURVES - CREATION OF GAPS - 32-bit Mixed data type functionalities
 *
 ***********************************************************************************************************************
 */
 
 #define SrvF_IpoCurve_S16_R32_AdsCalc(X,N,XDIST,VAL) 	        (SrvF_IpoCurve_S16_R32((X),(N),(&(XDIST)[0]),(const real32*)(const void*)((&(XDIST)[0]) + ((N) + (((N) & 1L) ^ 1L)))))
 #define SrvF_IpoCurve_U16_R32_AdsCalc(X,N,XDIST,VAL) 	        (SrvF_IpoCurve_U16_R32((X),(N),(&(XDIST)[0]),(const real32*)(const void*)((&(XDIST)[0]) + ((N) + (((N) & 1L) ^ 1L)))))
 #define SrvF_IpoCurve_S8_R32_AdsCalc(X,N,XDIST,VAL) 	        (SrvF_IpoCurve_S8_R32((X),(N),(&(XDIST)[0]),(const real32*)(const void*)((&(N)) + (((N) + 4L) & (~3L)))))
 #define SrvF_IpoCurve_U8_R32_AdsCalc(X,N,XDIST,VAL) 	        (SrvF_IpoCurve_U8_R32((X),(N),(&(XDIST)[0]),(const real32*)(const void*)((&(N)) + (((N) + 4L) & (~3L)))))
/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - NO GAPS ARE CREATED
 *
 ***********************************************************************************************************************
 */
#define SrvX_IpoMap_U8U8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_U8U8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U8U8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_U8U8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const sint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U8S8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_U8S8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U8S8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_U8S8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (Nx)),(const sint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_S8S8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_S8S8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_S8S8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_S8S8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const uint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))



#define SrvX_IpoMap_U16U16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_IpoMap_U16U16_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U16U16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_IpoMap_U16U16_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const sint16*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U16S16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_IpoMap_U16S16_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U16S16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_IpoMap_U16S16_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)((&(XDIST)[0]) + (Nx)),(const sint16*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_S16S16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_IpoMap_S16S16_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_S16S16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_IpoMap_S16S16_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const uint16*)((&(XDIST)[0]) + ((Nx) + (Ny)))))



#define SrvX_IpoMap_U16U16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U16_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const uint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U16U16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U16_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const sint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U16S16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S16_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)((&(XDIST)[0]) + (Nx)),(const uint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_U16S16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S16_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)((&(XDIST)[0]) + (Nx)),(const sint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_S16S16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S16_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const sint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_IpoMap_S16S16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S16_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const uint8*)((&(XDIST)[0]) + ((Nx) + (Ny)))))


#define SrvX_IpoMap_U16U8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U16U8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (Nx)),((const uint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
#define SrvX_IpoMap_U16U8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U16U8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (Nx)),((const sint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
#define SrvX_IpoMap_U16S8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U16S8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (Nx)),((const uint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
#define SrvX_IpoMap_U16S8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U16S8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (Nx)),((const sint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
#define SrvX_IpoMap_S16U8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_S16U8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (Nx)),((const uint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
#define SrvX_IpoMap_S16U8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_S16U8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(XDIST)[0]) + (Nx)),((const sint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
#define SrvX_IpoMap_S16S8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_S16S8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (Nx)),((const uint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
#define SrvX_IpoMap_S16S8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_S16S8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(XDIST)[0]) + (Nx)),((const sint8*)((&(XDIST)[0])+( Nx)) + (Ny))))
/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - NO GAPS ARE CREATED ---- SWAPPED FUNTIONALITIES
 *
 ***********************************************************************************************************************
 */
#define SrvX_IpoMap_S8U8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)           (SrvX_IpoMap_U8S8_U8((Y),(X),(Ny),(Nx),(((const uint8*)(&(XDIST)[0])) + (Nx) ),(&(XDIST)[0]),(((const uint8*)(&(XDIST)[0])) + (Nx) + (Ny) )))
#define SrvX_IpoMap_S8U8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)           (SrvX_IpoMap_U8S8_S8((Y),(X),(Ny),(Nx),(((const uint8*)(&(XDIST)[0])) + (Nx)),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx) + (Ny))))

#define SrvX_IpoMap_S16U16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U16S16_U16((Y),(X),(Ny),(Nx),(((const uint16*)(&(XDIST)[0])) + (Nx) ),(&(XDIST)[0]),(((const uint16*)(&(XDIST)[0])) + (Nx) + (Ny) )))
#define SrvX_IpoMap_S16U16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U16S16_S16((Y),(X),(Ny),(Nx),(((const uint16*)(&(XDIST)[0])) + (Nx)),(&(XDIST)[0]),((&(XDIST)[0]) +(Nx) +(Ny))))

#define SrvX_IpoMap_S16U16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_U16S16_U8((Y),(X),(Ny),(Nx),(((const uint16*)(&(XDIST)[0])) + (Nx) ),(&(XDIST)[0]),((const uint8*)((&(XDIST)[0]) + (Nx) + (Ny)))))
#define SrvX_IpoMap_S16U16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_IpoMap_U16S16_S8((Y),(X),(Ny),(Nx),(((const uint16*)(&(XDIST)[0])) + (Nx)),(&(XDIST)[0]),((const sint8*)((&(XDIST)[0]) + (Nx) + (Ny)))))
/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - CREATION OF GAPS
 *
 ***********************************************************************************************************************
 */
#define SrvX_IpoMap_U16U8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U8_U16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(Nx))+ ((Nx) +( 2))),((const uint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))
#define SrvX_IpoMap_U16U8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U8_S16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(Nx))+ ((Nx) +( 2))),((const sint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))
#define SrvX_IpoMap_U16S8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S8_U16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(Nx))+ ((Nx) +( 2))),((const uint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))
#define SrvX_IpoMap_U16S8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S8_S16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(Nx))+ ((Nx) +( 2))),((const sint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))
#define SrvX_IpoMap_S16S8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S8_U16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(Nx))+ ((Nx) +( 2))),((const uint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))
#define SrvX_IpoMap_S16S8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S8_S16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)((&(Nx))+ ((Nx) +( 2))),((const sint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))
#define SrvX_IpoMap_S16U8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16U8_U16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(Nx))+ ((Nx) +( 2))),((const uint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))
#define SrvX_IpoMap_S16U8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16U8_S16( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)((&(Nx))+ ((Nx) +( 2))),((const sint16*)(&(Nx)) + (((Nx) + (((Ny) + 5)/2))))))

#define SrvX_IpoMap_S8S8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_S8S8_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(Nx))+((Nx) + 2)),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))
#define SrvX_IpoMap_S8S8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_S8S8_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(Nx))+((Nx) + 2)),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))
#define SrvX_IpoMap_U8S8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U8S8_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((const sint8*)((&(Nx))+((Nx) + 2))),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))
#define SrvX_IpoMap_U8S8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U8S8_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((const sint8*)((&(Nx))+((Nx) + 2))),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))
#define SrvX_IpoMap_U8U8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U8U8_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(Nx))+((Nx) + 2)),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))
#define SrvX_IpoMap_U8U8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U8U8_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(Nx))+((Nx) + 2)),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))


/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - CREATION OF GAPS - SWAPPED FUNTIONALITIES
 *
 ***********************************************************************************************************************
 */
#define SrvX_IpoMap_S8U8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U8S8_U16((Y),(X),(Ny),(Nx),((const uint8*)((&(Nx))+((Nx) + 2))),(&(XDIST)[0]),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))
#define SrvX_IpoMap_S8U8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvX_IpoMap_U8S8_S16((Y),(X),(Ny),(Nx),((const uint8*)((&(Nx))+((Nx) + 2))),(&(XDIST)[0]),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (Ny) +3)/2))))

#define SrvX_IpoMap_U8U16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U8_U16((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))
#define SrvX_IpoMap_U8U16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U8_S16((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))
#define SrvX_IpoMap_S8U16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S8_U16((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))
#define SrvX_IpoMap_S8U16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S8_S16((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))
#define SrvX_IpoMap_U8S16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16U8_U16((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))
#define SrvX_IpoMap_U8S16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16U8_S16((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))
#define SrvX_IpoMap_S8S16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S8_U16((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))
#define SrvX_IpoMap_S8S16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S8_S16((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint16*)(const void*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))/2))))


#define SrvX_IpoMap_U8U16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U8_U8((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))
#define SrvX_IpoMap_U8U16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16U8_S8((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))
#define SrvX_IpoMap_S8U16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S8_U8((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))
#define SrvX_IpoMap_S8U16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_U16S8_S8((Y),(X),(Ny),(Nx),(((const uint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))
#define SrvX_IpoMap_U8S16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16U8_U8((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))
#define SrvX_IpoMap_U8S16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16U8_S8((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))
#define SrvX_IpoMap_S8S16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S8_U8((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const uint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))
#define SrvX_IpoMap_S8S16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvX_IpoMap_S16S8_S8((Y),(X),(Ny),(Nx),(((const sint16*)(const void*)(&(Nx)))+(((Nx) + 3) /2)),(&(XDIST)[0]),((const sint8*)(&(Nx)) + (((Nx) + (2*(Ny)) + 2 + ((Nx) &( 0x01)))))))

 /*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - CREATION OF GAPS - 32-bit functionalities
 *
 ***********************************************************************************************************************
 */
 #define SrvX_IpoMap_S16S16_S32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_IpoMap_S16S16_S32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)((&(XDIST)[0]) + (Nx)),(const sint32*)(const void*)((&(XDIST)[0]) + (Nx) + (Ny) + (((Nx) + (Ny)) & 1L))))
 
 
 
  /*
 ***********************************************************************************************************************
 *
 *  LOOKUP MAPS - NO GAP IS CREATED
 *
 ***********************************************************************************************************************
 */
 
#define SrvX_LkUpMap_U8U8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_LkUpMap_U8U8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_LkUpMap_S8S8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvX_LkUpMap_S8S8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_LkUpMap_U16U16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_LkUpMap_U16U16_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_LkUpMap_S16S16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvX_LkUpMap_S16S16_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_LkUpNearMap_U8U8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)     (SrvX_LkUpNearMap_U8U8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_LkUpNearMap_S8S8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)     (SrvX_LkUpNearMap_S8S8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_LkUpNearMap_U16U16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)  (SrvX_LkUpNearMap_U16U16_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvX_LkUpNearMap_S16S16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)  (SrvX_LkUpNearMap_S16S16_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))
/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION CURVES NO GAPS ARE CREATED - Floating point
 *
 ***********************************************************************************************************************
 */
#define SrvF_IpoCurve_R32_R32_AdsCalc(X,N,XDIST,VAL) 	        (SrvF_IpoCurve_R32_R32((X),(N),(&(XDIST)[0]),((&(XDIST)[0]) + (N))))

/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - NO GAPS ARE CREATED - Floating point
 *
 ***********************************************************************************************************************
 */
#define SrvF_IpoMap_R32R32_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvF_IpoMap_R32R32_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),((&(XDIST)[0]) + ((Nx) + (Ny)))))

/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - MIXED DATATYPE IPO
 *
 ***********************************************************************************************************************
 */
#define SrvF_IpoMap_U8U8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_U8U8_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const real32*)(const void*)((&(Nx)) + ((((Nx) + (Ny)) + 5L) & (~3L)))))
#define SrvF_IpoMap_S8S8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_S8S8_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const real32*)(const void*)((&(Nx)) + ((((Nx) + (Ny)) + 5L) & (~3L)))))
#define SrvF_IpoMap_U8S8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_U8S8_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)(const void*)((&(XDIST)[0]) + (Nx)),(const real32*)(const void*)((&(Nx)) + ((((Nx) + (Ny)) + 5L) & (~3L)))))

#define SrvF_IpoMap_S16S16_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_S16S16_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const real32*)(const void*)((&(XDIST)[0]) + (Nx) + (Ny) + (((Nx) + (Ny)) & 1L))))

#define SrvF_IpoMap_U16U8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_U16U8_R32( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)(((&(XDIST)[0]))+ ((Nx))),(const real32*)(const void*)((const uint8*)(&(Nx))+ ((( 2* (Nx)) + (Ny) + 7L) & (~3L)))))
#define SrvF_IpoMap_U16S8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_U16S8_R32( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)(((&(XDIST)[0]))+ ((Nx))),(const real32*)(const void*)((const uint8*)(&(Nx))+ ((( 2* (Nx)) + (Ny) + 7L) & (~3L)))))
#define SrvF_IpoMap_S16U8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_S16U8_R32( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)(((&(XDIST)[0]))+ ((Nx))),(const real32*)(const void*)((const uint8*)(&(Nx))+ ((( 2* (Nx)) + (Ny) + 7L) & (~3L)))))
#define SrvF_IpoMap_S16S8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_S16S8_R32( (X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)(((&(XDIST)[0]))+ ((Nx))),(const real32*)(const void*)((const uint8*)(&(Nx))+ ((( 2* (Nx)) + (Ny) + 7L) & (~3L)))))

#define SrvF_IpoMap_R32U8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32U8_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)(const void*)((&(XDIST)[0]) + (Nx)),((const uint16*)(const void*)(((const uint8*)(((&(XDIST)[0]) + (Nx)))) + (Ny) + ((Ny) & 1L)))))
#define SrvF_IpoMap_R32S8_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32S8_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)(const void*)((&(XDIST)[0]) + (Nx)),((const uint16*)(const void*)(((const uint8*)(((&(XDIST)[0]) + (Nx)))) + (Ny) + ((Ny) & 1L)))))

#define SrvF_IpoMap_R32U16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_R32U16_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint16*)(const void*)((&(XDIST)[0]) + (Nx)),(((const uint16*)(const void*)(((&(XDIST)[0]) + (Nx)))) + (Ny))))
#define SrvF_IpoMap_R32S16_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_R32S16_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)(const void*)((&(XDIST)[0]) + (Nx)),(((const uint16*)(const void*)(((&(XDIST)[0]) + (Nx)))) + (Ny))))

#define SrvF_IpoMap_R32R32_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32R32_S8 ((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const sint8*) ((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvF_IpoMap_R32R32_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32R32_U8 ((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const uint8*) ((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvF_IpoMap_R32R32_U16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)	   (SrvF_IpoMap_R32R32_U16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const uint16*)((&(XDIST)[0]) + ((Nx) + (Ny)))))
#define SrvF_IpoMap_R32R32_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_R32R32_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((&(XDIST)[0]) + (Nx)),(const sint16*)((&(XDIST)[0]) + ((Nx) + (Ny)))))

#define SrvF_IpoMap_U16U16_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_U16U16_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint16*)((&(XDIST)[0]) + (Nx)),(const real32*)(const void*)((&(XDIST)[0]) + (Nx) + (Ny) + (((Nx) + (Ny)) & 1L))))
#define SrvF_IpoMap_U16S16_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)	   (SrvF_IpoMap_U16S16_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint16*)((&(XDIST)[0]) + (Nx)),(const real32*)(const void*)((&(XDIST)[0]) + (Nx) + (Ny) + (((Nx) + (Ny)) & 1L))))

#define SrvF_IpoMap_R32U8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32U8_S16((X),(Y),(Nx),(Ny),(&(XDIST[0])),((const uint8*)((&(XDIST[0]))+((Nx)))),((const sint16*)(const void*) (((const uint8*)(const void*)(((&(XDIST)[0]) + (Nx)))) + (Ny) + ((Ny) & 1L)))))
#define SrvF_IpoMap_R32S8_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32S8_S16((X),(Y),(Nx),(Ny),(&(XDIST[0])),((const sint8*)((&(XDIST[0]))+((Nx)))),((const sint16*)(const void*) (((const sint8*)(const void*)(((&(XDIST)[0]) + (Nx)))) + (Ny) + ((Ny) & 1L)))))
#define SrvF_IpoMap_R32U16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_R32U16_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((const uint16*)((&(XDIST)[0]) + (Nx))),(((const sint16*)((&(XDIST)[0]) + (Nx))) + (Ny))))
#define SrvF_IpoMap_R32S16_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_R32S16_S16((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((const sint16*)((&(XDIST)[0]) + (Nx))),(((const sint16*)((&(XDIST)[0]) + (Nx))) + (Ny))))

#define SrvF_IpoMap_R32U8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_R32U8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)(((&(XDIST)[0]))+ ((Nx))),(const uint8*) ((const uint8*)(((&(XDIST)[0]))+ ((Nx)))+(Ny))))
#define SrvF_IpoMap_R32S8_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_R32S8_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)(((&(XDIST)[0]))+ ((Nx))),((const uint8*)(const void*)((const sint8*)((&(XDIST)[0]) + (Nx)) + (Ny)))))
#define SrvF_IpoMap_R32U16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_R32U16_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint16*)(((&(XDIST)[0]))+ ((Nx))),((const uint8*)(const void*)((const uint16*)((&(XDIST)[0])+(Nx))+(Ny)))))
#define SrvF_IpoMap_R32S16_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32S16_U8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)(((&(XDIST)[0]))+ ((Nx))),((const uint8*)(const void*)((const sint16*)((&(XDIST)[0])+(Nx))+(Ny)))))
  
#define SrvF_IpoMap_R32U8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_R32U8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint8*)(((&(XDIST)[0]))+ ((Nx))),((const sint8*) ((const uint8*)(((&(XDIST)[0]))+ ((Nx)))+(Ny)))))
#define SrvF_IpoMap_R32S8_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_R32S8_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint8*)(((&(XDIST)[0]))+ ((Nx))),((const sint8*) ((const sint8*)(((&(XDIST)[0]))+ ((Nx)))+(Ny)))))
#define SrvF_IpoMap_R32U16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32U16_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint16*)(((&(XDIST)[0]))+ ((Nx))),((const sint8*)(const void*)((const uint16*)((&(XDIST)[0])+(Nx))+(Ny)))))
#define SrvF_IpoMap_R32S16_S8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32S16_S8((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)(((&(XDIST)[0]))+ ((Nx))),((const sint8*)(const void*)((const sint16*)((&(XDIST)[0])+(Nx))+(Ny)))))

#define SrvF_IpoMap_R32U8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32U8_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((const uint8*)((&(XDIST)[0]) + (Nx))),(const real32*)(const void*)(((const uint8*)((&(XDIST)[0])+(Nx)))+(((Ny)+3) & (~3L))))) 
#define SrvF_IpoMap_R32S8_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)       (SrvF_IpoMap_R32S8_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),((const sint8*)((&(XDIST)[0]) + (Nx))),(const real32*)(const void*)(((const sint8*)((&(XDIST)[0])+(Nx)))+(((Ny)+3) & (~3L))))) 
#define SrvF_IpoMap_R32U16_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_R32U16_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const uint16*)(((&(XDIST)[0]))+ ((Nx))),((const real32*)(const void*)((((const uint16*)(((&XDIST)[0]) + (Nx))) + (Ny) +((Ny) & 1L))))))
#define SrvF_IpoMap_R32S16_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)      (SrvF_IpoMap_R32S16_R32((X),(Y),(Nx),(Ny),(&(XDIST)[0]),(const sint16*)(((&(XDIST)[0]))+ ((Nx))),((const real32*)(const void*)((((const sint16*)(((&XDIST)[0]) + (Nx))) + (Ny) +((Ny) & 1L))))))


/*
 ***********************************************************************************************************************
 *
 *  INTERPOLATION MAPS - Swapped X-Y interfaces
 *
 ***********************************************************************************************************************
 */
#define SrvF_IpoMap_S16R32_S16_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_R32S16_S16((Y),(X),(Ny),(Nx),(const real32*)(const void*)((&(XDIST)[0]) + ((Nx) + ((Nx) & 1L))),(&(XDIST)[0]),(const sint16*)(const void*)((const sint32*)(const void*)((&(XDIST)[0]) + ((Nx) + ((Nx) & 1L))) + (Ny))))
#define SrvF_IpoMap_S16R32_U8_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)         (SrvF_IpoMap_R32S16_U8((Y),(X),(Ny),(Nx),(const real32*)(const void*)((&(XDIST)[0]) + ((Nx) + ((Nx) & 1L))),(&(XDIST)[0]),(const uint8*)(const void*)((const sint32*)(const void*)((&(XDIST)[0]) + ((Nx) + ((Nx) & 1L))) + (Ny))))
#define SrvF_IpoMap_S16R32_R32_AdsCalc(X,Y,Nx,Ny,XDIST,YDIST,VAL)        (SrvF_IpoMap_R32S16_R32((Y),(X),(Ny),(Nx),(const real32*)(const void*)((&(XDIST)[0]) + ((Nx) + ((Nx) & 1L))),(&(XDIST)[0]),(const real32*)(const void*)((&(XDIST)[0]) + ((Nx) + ((Nx) & 1L))) + (Ny)))




 

#endif
#endif
