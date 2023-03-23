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
 * $Filename__:epmhcas_sigbuf_pub.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:new function added in emphcas_sigbuf beacause new process is 
 *             included in Epmhwe_Ini$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OMO2FE$
 * $Date______:17.12.2009$
 * $Class_____:SWHDR$
 * $Name______:epmhcas_sigbuf_pub$
 * $Variant___:1.23.0$
 * $Revision__:3$
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
 * 1.23.0; 3     17.12.2009 OMO2FE
 *   new function added in emphcas_sigbuf beacause new process is included in 
 *   Epmhwe_Ini
 * 
 * 1.23.0; 2     16.12.2009 OMO2FE
 *   new function added in emphcas_sigbuf beacause new process is included in 
 *   Epmhwe_Ini
 * 
 * 1.23.0; 1     16.12.2009 OMO2FE
 *   new function added in emphcas_sigbuf beacause new process is included in 
 *   Epmhwe_Ini
 * 
 * 1.23.0; 0     15.12.2009 OMO2FE
 *   new function added in emphcas_sigbuf beacause new process is included in 
 *   Epmhwe_Ini
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCAS_SIGBUF_PUB_H
#define _EPMHCAS_SIGBUF_PUB_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
 #include "epmhcas_auto_pub.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**  max. value of camshaft edge counter by function EpmHCaS_GetCtEdge(); */
#define EPMHCAS_EDGECNT_MAX  0x7FFF

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/** control structure for camshaft-bufferaccesses. The functions for bufferaccesses need a variable
    of this type to perform the access. The values for this variable must be set with the function
    EpmHCaS_PrepBuf(...). After this, valid data could be read from the buffer */
typedef struct
{
    sint32 ctEdge;                  /**< number of camshaftedges since init                 */
    sint8 ctValidTime;              /**< number of valid edges (angle) in camshaftbuffer    */
    sint8 ctValidEdge;              /**< number of valid times in camshaftbuffer            */
    sint8 ctBufIdx;                 /**< index to the next entry in buffer to be writter    */
    sint8 ctEdgeWcy;                /**< number of edges during one working cycle           */
    enum EpmHCaS_numCaS_t numCaS;   /**< camshaft for which the structure was copied        */
}EpmHCaS_stBufCtr_t;

/** structure for bufferaccesses to get values from equidistant edges */
typedef struct
{
    sint32 tiEdge;                  /**< time at which the equidistant edge occured         */
    sint16 phiEdge;                 /**< angle of the equidistant edge                      */
    sint8  ctEdgeEquid;              /**< index of the equidistant edge during working cycle */
}EpmHCaS_BufValEquid_t;

/** structure for temporary copy buffer */
typedef struct
{
    sint16 phiEdge;
    uint8  stLev;
} EpmHCaS_CopyBuf_t;


/** defines for return values of function EpmHCaS_GetAgTimeEquid */
 enum EpmHCaS_BufAgTimeEquidReturn
{
    AG_AND_TIME_INVALID   = 0,
    AG_VALID              = 1,
    TIME_VALID            = 2,
    AG_AND_TIME_VALID     = 3
};

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

extern bool EpmHCaS_PrepBuf(            enum EpmHCaS_numCaS_t numCaS,
                                        EpmHCaS_stBufCtr_t *stBufCtr);
extern bool EpmHCaS_GetBufAngRel(       const EpmHCaS_stBufCtr_t *stBufCtr,
                                        sint16 *phiEdge,
                                        sint32 numEdge);
extern bool EpmHCaS_GetBufAngAbs(       const EpmHCaS_stBufCtr_t *stBufCtr,
                                        sint16 *phiEdge,
                                        sint32 numEdge);
extern bool EpmHCaS_GetBufTime(         const EpmHCaS_stBufCtr_t *stBufCtr,
                                        sint32 *tiEdge,
                                        sint32 numEdge);
extern bool EpmHCaS_GetBufLev(          const EpmHCaS_stBufCtr_t *stBufCtr,
                                        uint8 *stLev,
                                        sint32 numEdge);
extern uint8 EpmHCaS_GetBufEntr(        const EpmHCaS_stBufCtr_t *stBufCtr);
extern uint8 EpmHCaS_GetBufAngEntr(     const EpmHCaS_stBufCtr_t *stBufCtr);
extern sint16 EpmHCaS_GetCtEdge(        const EpmHCaS_stBufCtr_t *stBufCtr);
extern uint8 EpmHCaS_GetCurLev(         enum EpmHCaS_numCaS_t numCaS);
extern uint8 EpmHCaS_GetBufAgTimEquid(  const EpmHCaS_stBufCtr_t *stBufCtr,
                                        EpmHCaS_BufValEquid_t *BufValEquid,
                                        sint32 numEdge);
extern bool EpmHCaS_GetBufTimeAtLev(    const EpmHCaS_stBufCtr_t *stBufCtr,
                                        sint32 *tiEdge,
                                        uint8 stLev,
                                        sint32 numEdge);

extern bool EpmHCaS_CopyBuf(            enum EpmHCaS_numCaS_t numCaS,
                                        sint32 numEdge,
                                        EpmHCaS_CopyBuf_t *stCpyBuf);


/* _EPMHCAS_SIGBUF_PUB_H */
#endif
