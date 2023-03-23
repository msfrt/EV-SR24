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
 * $Filename__:igndd.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:UWDAEMMR$
 * $Date______:22.12.2010$
 * $Class_____:SWHDR$
 * $Name______:igndd$
 * $Variant___:2.22.0$
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
 * 2.22.0; 1     22.12.2010 UWDAEMMR
 *   Removed residual MISRA warnings
 * 
 * 2.22.0; 0     08.09.2010 YAK1KOR
 *   CRQ:342359 
 *   Header file  generation during Make using core configuration.
 * 
 * 2.21.0; 0     27.08.2010 KUV2SI
 *   New ignition fade out request source is added (Engine Stall conditions)
 *   
 *   CRQ no 338021
 * 
 * 2.20.0; 1     14.06.2010 KUV2SI
 *   After review changes.
 *   Review ID 14997
 * 
 * 2.20.0; 0     21.05.2010 KUV2SI
 *   New API added to read zzaehl_w counter
 *   New Fade out request added for Back Up Camshaft Mode
 *   CRQ no 328544
 * 
 * 2.19.0; 0     01.03.2010 BUA2ABT
 *   merge between 2.17.0 and 2.18.0
 * 
 * 2.17.0; 0     19.10.2009 BUA2ABT
 *   changes for support of 12 cylinders
 * 
 * 2.15.0; 0     25.11.2008 GUH1SI
 *   Component Toolbox-Import
 * 
 * 2.14.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * 2.13.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef IGNDD_H
#define IGNDD_H

/** \defgroup IGNDD ignition device driver

    \brief      Component driver M17 ignition.

    The modul IGNDD serves mainly to adapt the interface between the applicaton software layer and the hardware driver IGNH for the ingnition output through the hardware. IGNH and IGNDD are part of the CDRV (complex driver).  Figure "architecture" showes architecture in the M17.

    \image html igndd_architecture.jpg "architecture"
    \image latex igndd_architecture.eps "architecture" width=14cm


    \image html igndd_ignition.jpg "ignition"
    \image latex igndd_ignition.eps "ignition" width=14cm

    A state machine is implemented in the igndd device driver. In figure "state machine" the control flow of the driver can be seen. In a normal driving cycle the states are run through in the following order: INI, SyncIni, Wait4Syn, Running. The state "IGNDD_STATE_SWOFF" is only reached, if the engine turns at least 2 revolutions after KL15 off. Ignition output is only possible in the state "IGNDD_STATE_RUNNING". Figure "state machine (SY_KT=1)" shows a slightly changed version for a test functionality called cold test, where time based and angle synchronous ignition tests are possible.

    \image html igndd_statemachine_new.png "state machine (SY_KT=0)"
    \image latex igndd_statemachine_new.eps "state machine (SY_KT=0)" width=14cm

    \image html igndd_statemachine_kt.png "state machine (SY_KT=1)"
    \image latex igndd_statemachine_kt.eps "state machine (SY_KT=1)" width=14cm

    In state "IGNDD_STATE_RUNNING" will be ignitions requested, so far there is no ignition fade out through igndd_fadeOutIgnPattern()/ igndd_fadeOutIgn() is desired. A fade out of cylinders could be seen through the bit coded variable \ref igndd_fdOutPattern_u16. The fade out source is seen through the bit coded variable \ref ignFadeStatBits_w, bit positions are equal to the value in the typedef enum \ref igndd_fdoutSources_t.

    \par Actuator Test
    For actuator test there are the API functions \ref igndd_Test() and \ref igndd_StopTest() available (TSWR_103159_xx). A further description is found at the function documentation.

    \par Ueberwachung
    Die Groesse, die die aktuelle Ausblendmaske anzeigt - azoffmsk_w wird von der Ueberwachung benutzt, um zu sehen, ob die Zuendung aktiv ist. Die Ueberwachung liest die Groesse im Zeitraster. Wenn die Zuendung nicht aktiv ist, soll 0xFF in dieser Groesse stehen (Der Wert sollte in Zukunft auf 0xFFFF geaendert werden, da azoffmsk_w eine 16Bit Groesse ist). Aktiv ist die Zuendung, wenn Zuendungen vom IGNDD an den IGNH angefordert werden koennen. Nach der SyncInit-Task ist die Zündung inaktiv bis der Synchronisationszustand Zündungen erlaubt.

    \par Neustart ohne Reset
    Fuer den Neustart ohne Reset (TSWR_166220_1) wurde, damit die Anwender Schicht nichts aendern muss, eine Initialiserung aller RAM Zellen, die ueber Damos angelegt werden im laufenden Betrieb eingefuehrt. Dies ist fuer die Zuendungausgabe nicht gewuenscht. Deshalb ist das Adressierschema in der kgs-Datei entsprechend geaendert worden.

    \par Zuendungszaehler
    Die Zuendungszaehler \ref zzaehl, \ref zzaehl_w wurden Aufgrund der Anforderung TSWR_127623_1 in Version 2.110 in den 10ms Process (\ref igndd_Proc_10ms()) verschoben. Die Start-Stop Software nutzt den Zuendungszaehler zum Abregeln der Motor Start Funktionalitaet. Hierfuer muss der Zuendungszaehler, schon zum Zeitpunkt wo die ASW Processe abgearbeitet werden, aktuell sein.

    \par Overlapcounter für die Piezo-Einspritzung
    Die ASW der Piezo Einspritzung benoetigt im Synchro den aktuellen Zündungs Overlap (TSWR_215718_1). Aufgrund dieser Anforderung liefert die API Funktion \ref igndd_Getzzylzuear() den aktuellen Overlap zurueck (ab Version 2.110).

    \par Zuendung Ausblendung
    Ueber die API Schnittstellen \ref igndd_fadeOutIgn() und  \ref igndd_fadeOutIgnPattern() kann das Anfordern von neuen Zuendungen verboten werden. Laufenden Zuendungen werden durch diese Funktionen nicht beeinflusst. Um Zuendungen abzubrechen bei denen der Ladevorgang der Spule schon gestartet ist, gibt es die Funktion \ref igndd_fadeOutImmediate() (ab Version 2.110). Bei Erkennung von Rueckdrehen will man zum Beispiel Zuendungen sofort abrechen (TSWR_216897_1).\n
    Durch \ref igndd_fadeInIgn() und \ref igndd_fadeInIgnPattern() kann das Anfordern von Zuendungen wieder erlaubt werden.
*/


/** \defgroup   IGNDD_API       API Interface
    \ingroup    IGNDD

    \brief      API interface of IGNDD
*/


/** \defgroup   IGNDD_PROCESSES     Processes
    \ingroup    IGNDD

    \brief      Processes of igndd.
*/


/** \defgroup   IGNDD_CONF      Configuration
    \ingroup    IGNDD

    \brief      Configuration of the ignition driver.

    Most of the configuration of IGNDD is done through system constants. \n
    Integration instructions are found in Nestor by IGNCL.
*/


/** \internal
    \defgroup   IGNDD_PRIV      Internals
    \ingroup    IGNDD

    \brief      Privat functions, defines and variables. \n
                Only for internal things available!
*/

/** \addtogroup IGNDD_API
    @{
*/

/* Include Headerfiles */
/* =================== */
#include PROJECT_H
#include "igndd_auto_conf.h"
#include "igndd_priv.h"         /* module private header */

#include <cdrv_shared.h>        /* cdrv configuration header             */
#include <ignh.h>               /* Header-file for ignition driver       */
#include <cdrv_memlay.h>        /* Macros to support flexible memory allocation for CDRV modules */
#include <gpta.h>               /* timer macros */


/*   compatibility definitions/macros to ME7/9 */
#define AZUE_FDOUT_NLZOFF           IGN_FDOUT_NLZOFF
#define fadeOutIgn                  igndd_fadeOutIgn
#define fadeInIgn                   igndd_fadeInIgn
#define kt_zuen_off                 igndd_off
#define KT_zuen_PortOff             igndd_portOff
#define kt_zuen_fadeOutIgn          igndd_fadeOutIgn
#define kt_zuen_fadeInIgn           igndd_fadeInIgn
#define kt_zuen_fadeOutIgnPattern   igndd_fadeOutIgnPattern
#define kt_zuen_fadeInIgnPattern    igndd_fadeInIgnPattern
#define kt_zuen_testFadeOutSrc      igndd_testFadeOutSrc
#define ht2ktigni_Getzzylzuear      igndd_Getzzylzuear
#define ht2ktigni_off               igndd_off
#define ht2ktigni_portoff           igndd_portOff
#define ht2ktigni_fadeOutIgn        igndd_fadeOutIgn
#define ht2ktigni_fadeInIgn         igndd_fadeInIgn
#define ht2ktigni_fadeOutIgnPattern igndd_fadeOutIgnPattern
#define ht2ktigni_fadeInIgnPattern  igndd_fadeInIgnPattern
#define ht2ktigni_testFadeOutSrc    igndd_testFadeOutSrc
#define igndd_portoff               igndd_portOff

/** Name of the actuator test function. The test function of future ECU generations should be availabe under the same name and with the same parameters. Description is found at \ref igndd_Test(). */
#define IGNtest                     igndd_Test

/** Name of the actuator stop function. The stop function of future ECU generations shoulb be also available under this name. Description is found at \ref igndd_StopTest. */
#define IGNstopTest                 igndd_StopTest

/** Typedef enum of the returned status of the \ref IGNtest() call. The return value of the test function of future ECU generations should be availabe under the same name. The different values of this typedef enum are found at \ref igndd_testStatus_t */
#define IGNtestStatus_t             igndd_testStatus_t

/** number of ignition circuits */
#define ZKANZAHL                (SY_ZYLZA/SY_ZNDAUS)

/** Ignition Fade Out Management - pattern to fade out all chans.
    \remarks    Fade out pattern is stored in a 16bit value, so all bits will be set with this macro.
    \attention  Die Ueberwachung prueft hart auf 0xFF ab, deshalb kann der Wert momentan nicht auf ( (1ull << 16) - 1 ) oder ( (1ul << SY_ZYLZA) - 1 ). Mit diesen Werten koennten auch mehr als 8 Zylinder dargestellt werden.
*/
#if (ZKANZAHL <= 8)
#define IGN_FDOUT_ALL               ( (1ul << 8) - 1 ) // 0xFF wegen Ueberwachung
#else
#define IGN_FDOUT_ALL               ( (1ul << 16) - 1 ) // 0xFFFF wegen Ueberwachung
#endif

/** Minimum guaranteed dwell length [1us/inc]. */
#define IGNDD_T_DWELL_LNGTH_MN_GUARANTEED   300

/** Minimum periode length in direct mode (\ref igndd_Test()) [1us/inc]. */
#define IGNDD_T_DM_PERIOD_MN        (IGNDD_T_DWELL_LNGTH_MN_GUARANTEED + IGNDD_T_DM_DIFF_MN)

/** Maximum period length in direct mode [1us/inc]. */
#define IGNDD_T_DM_PERIOD_MX        GPTA_GT0_TICKS_TO_US( (1ul << 24) / 2 - 1 )

/** Minmum differenz between period and dwell time [1us/inc] in direct mode. */
#define IGNDD_T_DM_DIFF_MN          1000


/** Definitions for cold test */
/** code words for activation of test */
#if (SY_KT > 0 )
#define IGNDD_KT_Rls_ON 179
#define IGNDD_KT_RlsCpl_ON 76
#endif


/* *************************************************************** */
/** Ignition fade out control - List of fade out sources */
typedef enum
{
    IGN_FDOUT_POSTDRV       = 0,    /**< Reserved for IGN                       */
    IGN_FDOUT_WFS           = 1,    /**< interface for immobilizer              */
    IGN_FDOUT_NLZOFF        = 2,    /**< interface for supervisor               */
    IGN_FDOUT_COMPTST       = 3,    /**< interface for compression test         */
    IGN_FDOUT_DMDZAG        = 4,    /**< interface for missfire generator       */
    IGN_FDOUT_AIRBAG        = 5,    /**< interface for airbag switch            */
    IGN_FDOUT_WDA           = 6,    /**< interface for WDA                      */
    IGN_FDOUT_RDE           = 7,    /**< recognition engine turn back           */
    IGN_FDOUT_NLPH          = 8,    /**< limb home camshaft sensor failure      */
    IGN_FDOUT_IGNSTRT       = 9,    /**< sync injection with ignition           */
    IGN_FDOUT_CYLCUTOFF     = 10,   /**< interface for cylinder cut off         */
    IGN_FDOUT_KT            = 11,   /**< interface for engine cold test         */
    IGN_FDOUT_PARTNERECUOFF = 12,   /**< connection lost to partner ecu         */
    IGN_FDOUT_BACKUP_CAS    = 13,   /**< interface to EPM for Backup Camshaft mode */
    IGN_FDOUT_ENGSTALL      = 14,   /**< interface for engine stall conditions */
    IGN_FDOUT_CUSTOM0       = 15,   /**< customer specific interface 0          */
    /* ----------------------------------------------------------------------   */
    IGN_FDOUT_EOL           = 16    /**< END OF LIST                            */
} igndd_fdoutSources_t;             /* max 16 requirements allowed !            */


/** Possible states of IGNDD. */
typedef enum
{
    IGNDD_STATE_INI         = 0,    /**< State after variable initialisation done through OS. */
    IGNDD_STATE_SyncIni     = 2,    /**< State after inisyn process \ref igndd_Proc_SyncIni(). Leave this state when ignition of \ref frstinjcyl is possible. */
    IGNDD_STATE_WAIT4SYN    = 3,    /**< State wait till revolution synchronization reaches a level where ignitions allowed. */
    IGNDD_STATE_RUNNING     = 4,    /**< State ignition is running. */
    IGNDD_STATE_SWOFF       = 5,    /**< State ignition disabled through ecu switch off . */
    IGNDD_STATE_DIRECT      = 6,    /**< State ignition is in direct mode - strikes output through time base. */
    IGNDD_STATE_MIXED       = 7,    /**< State ignition is in mode where time and angle based ignitions are allowed. For direct start. */
    IGNDD_STATE_XPROG       = 255u, /**< Factory PST no ignition output should be done. */
    /* these states are only reached if SY_KT > 0 */
    IGNDD_STATE_TEST_RUNNING = 8,   /**< angle synchronous tests possible */
    IGNDD_STATE_TEST_DIRECT  = 9    /**< time based tests possible */

}igndd_states_t;


/** Returned status of \ref igndd_Test call. Also availbe under the name \ref IGNtestStatus_t. */
typedef enum
{
    IGN_OK,             /**< Everything is fine. */
    IGN_N_ENG_GT_0,     /**< Engine speed greater than 0. */
    IGN_ALREADY_RUNNING /**< Test is already/still running.*/
}igndd_testStatus_t;

/** @} */
/* end of IGNDD_API         **************************************  */

/* **************************************************************** */
/*  process prototypes                                              */
/* **************************************************************** */
/** \addtogroup IGNDD_PROCESSES
    @{
*/

/** Ini process.
*/
CODE_SLOW( void igndd_Proc_Ini( void) );

/** SyncIni process.
    - Stoppen des Hardware Treiber.
    - Zuruecksetzen der Zuendungszaehler damit in Zeit-Tasks die zwischen igndd_Proc_SyncIni und \ref igndd_Proc_EngReStrt aufgerufen werden der Zuendungszaehler auf einem gueltigen Wert steht.
    - Zuruecksetzen des Zuendungszaehler fuer das abgasoptimale Abstellen (ignswofdly). Muesste vermutlich nicht gemacht werden, da im Fahrzyklus nur einmal KL15 aus gemacht werden duerfte.
*/
CODE_SLOW( void igndd_Proc_SyncIni( void) );

/** Engine Restart process.
    Zuruecksetzen der Zuendungszaehler (TSWR_127623_1). Die Zuendungszaehler werden im System bisher nur bei BDE verwendet. Sollte nach der EngReStrt-Task die SyncIni-Task aufgerufen werden (z.B. die EngReStrt-Task ist bei Drehzahl aufgerufen worden und Zuendungen kammen nicht mehr durch/haben keinen Drehzahlanstieg bewirkt), werden die Zuendungszaehler dort nochmal resetiert siehe \ref igndd_Proc_SyncIni.
*/
CODE_SLOW( void igndd_Proc_EngReStrt( void) );

/** Synchro 0 process.
    Put this function after the igniton calculation into synchro process.
    Check if DMDZAG requests an ignition fade out (TSWR_IGNCLDMDZAG_1). DMDZAG requests the fade out of a ignition in the synchro after the ignition TDC, i. e. fade out request of ignition 0 is at Epm_ctCyl == (0+1).
*/
CODE_NORM( void igndd_Proc_SyncS0( void) );

/** Synchro 1 process.
    only available if:
    \code
    (SY_BDE == 1) && (SY_KTIGNBI == 1)
    \endcode
    Put this function after the igniton calculation into second synchro process.
    In this Process the ignition values are passed to the ignition driver.
*/
CODE_NORM( void igndd_Proc_SyncS1( void) );

/** 10ms process.
    - If engine is turning and igndd is in direct mode, stop direct mode immediately and set igndd state to \ref IGNDD_STATE_SyncIni.
    - Update the ignition counters.

    \param[out] zzaehl          (global) ignition counter 8bit

    \param[out] zzaehl_w        (global) ignition counter 16bit
*/
CODE_NORM( void igndd_Proc_10ms( void) );

/** 100ms process.
    If
    \code
    (IGNINCIR_SY > 0)
    \endcode
    set ignition driver increment interrupt mode through a revolution
    threshold defined by \ref IGNDD_REV_THRES_TOOTH_INT.

    \internal
    \par additional internal informations:
        Engine immobiliser - fade in/out of the ignition. \n
        Conditions for using the immobiliser (Sia) release interface:
        - The release information for the SW is delivered by the function call bool Sia_Rls (uint16 CmpnId). But here actually it is a release information (e.g. (return value = true) means release for the path). The parameter gives the called function the information which module/function needs the Sia release information.
        - The modules/functions which need the release information from the Sia function should include the header file Sia_EmsRls.h to get access to:
            - the module/function related define for the component identifier (CmpnId)
            - the extern definition of the call function for Sia release
        - The modules/functions which need the release information of the Sia function should call the release function at least all 100 ms cyclic.
        - The SW default value for release information has to be "lock" (means "0" or "false") in both the Sia component and in its influenced modules/functions.
        - Because there <b>must always be a Sia module included in every PST</b> there must not be used SY_WFS brackets in the influenced modules/functions. That means there is always a Sia release information available.
*/
CODE_NORM( void igndd_Proc_100ms(void) );

/** @} */
/* end of process prototypes ************************************** */


/** \addtogroup IGNDD_API
    @{
*/

/* **************************************************************** */
/*  function prototypes                                             */
/* **************************************************************** */

/* ************************************************************** */
    /** Function for producing time based ignitions necessary for direct start of engine. Time based ignitions are only allowed at start in states
        SyncIni, Wait4Syn and Mixed of IgnDD. After the synchro (S1) of the first angle based ignition, signaled by frstinjcyl (first injected cylinder), is reached, time based ignitions must only be demanded for the preceding cylinders.
        While the dwell time is active on a cylinder, no other time based ignitions on the same cylinder can be requested. In this case the caller must wait untill the dwell time is over (including follow up sparks).
        Angle based ignitions have priority over time based ones. That means when a synchro (S1) for setting up a angle based ignition is reached, a running time based ignition on the same cylinder is aborted.



        \param[in]  cyl_u16             Number of the cylinder which shall be ignited.

        \param[in]  ignMoment_u32       Timestamp for GT0 when ignition shall happen. Use Function CDrv_GetTimeRef to create timestamp from a time stretch from now to ignition.

        \param[in]  dwellTime_u32       dwell time (in Microseconds)

        \param[in]  actvMSI_b           When using mutlispark ignition coils: 1 for MSI ignition / 0 for normal ignition
                                        With normal coils always set to 0.

        \param[in]  followCount_u8      Number of follow up pulses. (Set 1 when actvMSI is also set).

        \param[in]  followDwellTime_u16 dwell time of follow up pulses (in Microseconds)

        \param[in]  pauseTime_u16       Normal: pause time between follow up pulses. (in Microseconds)
                                        MSI and actvMSI == true: igndd_MsiMode2Pt_CUR threshold of secondary current. Pause Time of follow up count is calculated based on this value.

        \retval     bool                true: time based ignition triggered; false: ignition not triggered because of illegal state or dwell time is already reached
    */


CODE_NORM( bool igndd_IgnDirect( uint16 cyl_u16, uint32 ignMoment_u32, uint16 dwellTime_u32, bool actvMSI_b,
                      uint8 followCount_u8,  uint16 followDwellTime_u16, uint16 pauseTime_u16 ) );


/**  igndd_ChlSetAgFreeze - freezes the actual
ignition angle for the next ignition of this channel even if it is changed
later

    \param[in] chl number of channel
*/
CODE_NORM( void igndd_ChlSetAgFreeze(uint8 chl));


/** igndd_ChlIsCycleActive - test if current is already switched on

    \param[in] chl number of channel

    \retval false   if current is still off
    \retval true    if current is on or already ignited
*/
CDRV_INLINE bool igndd_ChlIsCycleActive (uint8 chl);


/** Fade in ignition of all cylinders.

    \param[in]  fdOutRequest    specific fade in request code - must be a element from the
                                enum \ref igndd_fdoutSources_t

    \par Example
        \code
        if (B_fade_out_request)
        {
            igndd_fadeOutIgn( IGN_FDOUT_CUSTOM0 );
        }
        else
        {
            igndd_fadeInIgn( IGN_FDOUT_CUSTOM0 );
        }
        \endcode
        It is strongly recommended to use these two services in an
        IF-THAN-ELSE-structure in order to refresh the required
        ignition state and avoid program mal function e.g. by EMI.
*/
CDRV_INLINE void igndd_fadeInIgn (igndd_fdoutSources_t fdOutRequest);


/** Fade in ignition via cylinder individual pattern.

    \remarks    If there has more than one source a fade out requested,
                ignition stays faded out until there is no more fade out
                requested.

    \param[in]  fdOutRequest    specific fade in request code - must be a element from the
                                enum \ref igndd_fdoutSources_t

    \param[in]  fdOutPattern    cylinders which should be faded in - bit coded
*/
CODE_NORM( void igndd_fadeInIgnPattern (igndd_fdoutSources_t fdOutRequest, uint16 fdOutPattern) );


/** Fade out ignition of all cylinders.

    \param[in]  fdOutRequest    specific fade out request code - must be a element from the
                                enum \ref igndd_fdoutSources_t

    \par Example
        \code
        if (B_fade_out_request)
        {
            igndd_fadeOutIgn( IGN_FDOUT_CUSTOM0 );
        }
        else
        {
            igndd_fadeInIgn( IGN_FDOUT_CUSTOM0 );
        }
        \endcode
        It is strongly recommended to use these two services in an
        IF-THAN-ELSE-structure in order to refresh the required
        ignition state and avoid program mal function e.g. by EMI.
*/
CDRV_INLINE void igndd_fadeOutIgn (igndd_fdoutSources_t fdOutRequest);


/** Fade out ignition via cylinder individual pattern.
    Pattern could be build up during several calls (OR).

    \remarks    If there has more than one source a fade out requested,
                ignition stays faded out until there is no more fade out
                requested.

    \param[in]  fdOutRequest            specific fade out request code - must be a element from the
                                        enum \ref igndd_fdoutSources_t

    \param[in]  fdOutPattern            cylinders which should be faded out - bit coded

    \internal
    \par        used global variables:
                \ref igndd_fdPatArray_u16 \n
                \ref igndd_fdOutPattern_u16
*/
CODE_NORM( void igndd_fadeOutIgnPattern (igndd_fdoutSources_t fdOutRequest, uint16 fdOutPattern) );

/** \~english   Function to stop running ignitions immediately - dwelling of coils will be aborted.

        \remarks    Before calling this function \ref igndd_fadeOutIgn() <b> has to </b> be called.

                Through \ref igndd_fadeInIgn() it is possible to enable the ignition output again.

        \par Example

    \~german    Ausgabe von Zuendungen sofort abschalten - laufende Ladezeiten der Spulen werden sofort abgebrochen.

        \remarks    Es \b muss zuvor \ref igndd_fadeOutIgn() aufgerufen werden.

                Zum wieder Freigeben der Zuendungsausgabe braucht nur \ref igndd_fadeInIgn() aufgerufen werden.

        \par Beispiel

    \~
        \code
            if (B_fade_out_request)
            {
                igndd_fadeOutIgn( IGN_FDOUT_CUSTOM0 );
                igndd_fadeOutImmediate();
            }
            else
            {
                igndd_fadeInIgn( IGN_FDOUT_CUSTOM0 );
            }
        \endcode
*/
CDRV_INLINE void igndd_fadeOutImmediate(void);

/** Get current state of igndd.

    \return     current state of igndd. Possible values of the state are
                defined through the enum igndd_states_t.
*/
CDRV_INLINE igndd_states_t igndd_getState (void);


/** Report next dwelling cylinder. The next 2 igniting cylinder will be written to the adress of cylar_pau8.

    \remarks    Wenn ein Zylinder ausgeblendet werden soll, fordert DMDZAG dies im Synchro nach dem Zuend-OT an. Es muss sichergestellt sein, dass dann die naechste Zuendung auf diesem Zylinder unterdrueckt wird (TSWR_IGNCLDMDZAG_1). Deshalb wird bei aktivierter DMDZAG ueber Zuendung der maximale erlaubte Overlap um 1 reduziert.

    \remarks     Bei der Bestimmung des naechsten zu zuendenten Zylinders werden ausgeblendete Zylinder, wie Zylinder behandelt bei denen die Schliesszeit gerade laeuft.

    \param[in]  cyl_u8      Current cylinder counter value for ignition.

    \param[out] cylar_pau8[2]   Pointer to an array with at least 2 elements. There will be the
                            cylinder numbers, of the 2 cylinders which ignites next written to.

    \internal
    \param[in]  SY_ZNDAUS   (system constant) Ignition output for (1) single
                            or (2) twin-spark coil

    \param[in]  SY_ZYLZA    (system constant) number of cylinders

    \par        used global variables:
                \ref ovlzue

    \return     Current overlap.
*/
CODE_NORM( uint8 igndd_Getzzylzuear(uint8 cyl_u8, uint8 cylar_au8[2]) );


/* ************************************************************** */
/** \ingroup IGNDD_PRIV
    Set state of igndd.
*/
CDRV_INLINE void igndd_setState (igndd_states_t newState);


/* ************************************************************** */
/** Stop actuator test (TSWR_103159_8). Any running pulses will be stopped immediately. See \ref igndd_Test for an example.

    \remarks    For future ECU generations the function is also under the name \ref IGNstopTest available!
*/
CODE_NORM (void igndd_StopTest(void));


#if (IGNDD_CONF_ENABLE_TEST_FUNC == TRUE)
    /* ************************************************************** */
    /** Interface for the actuator test (TSWR_103159_1). See picture "actuator test example" for an example. With the function \ref igndd_StopTest you can stop a running test immediately. If engine speed - Epm_nEng is greater than 0 at the call of this function, nothing is done except that IGN_N_ENG_GT_0 will be returned (TSWR_103159_9).
    If the engine begins turning while the test sequence, the test sequence will be aborted (TSWR_103159_10). When SY_KT=1 then test is also possible despite engine is turning.
    To get the current status of a allready requested actuator test, you can call this function with numPulses_u16 = 0.

        \image html igndd_test.jpg "actuator test example"
        \image latex igndd_test.eps "actuator test example" width=14cm

        \remarks    For future ECU generations the function is also under the name \ref IGNtest() and the type of the return value under the name \ref IGNtestStatus_t available!

        \remarks    The minimum difference between tDwell_u32 and tPeriod_u32 is limited to \ref IGNDD_T_DM_DIFF_MN. That meens that if the difference is smaller than \ref IGNDD_T_DM_DIFF_MN the length of the test impulses will be set internal to \f$ tDwell\_u32 = tPeriod\_u32 - IGNDD\_T\_DM\_DIFF\_MN \f$.

        \attention  The caller of this function is responsible for any damage on persons and hardware (TSWR_103159_2).

        \param[in]  cyl_u16         Bit coded cylinder number where the test impulses output. It is possible to output the test impulses on more than one cylinder at the same time (TSWR_103159_6).

        \param[in]  tDwell_u32      Length of one test impulse [1 us/inc]. The smallest possible duration of one impulse depends on the latency time of the ISRs - a time of \ref IGNDD_T_DWELL_LNGTH_MN_GUARANTEED is guaranteed.

        \param[in]  tPeriod_u32     Period length [1 us/inc]. The minimum periode length is limited to \ref IGNDD_T_DM_PERIOD_MN and the maximum to \ref IGNDD_T_DM_PERIOD_MX (TSWR_103159_3).

        \param[in]  numPulses_u16   Number of Pulses to be done. A max. number of \ref IGNH_NOFS_MAX+1 pulses are possible. If the value is bigger than \ref IGNH_NOFS_MAX+1 the value is set to \ref IGNH_NOFS_MAX+1. If you request (uint16)(-1) Pulses the maximum number of \ref IGNH_NOFS_MAX will be output (TSWR_103159_4).

        \retval     IGN_OK          Everything is fine (TSWR_103159_5).

        \retval     IGN_N_ENG_GT_0  Engine speed bigger than 0. Actuator test is not allowed (TSWR_103159_5).

        \retval     IGN_ALREADY_RUNNING Actuator test is already/still running (TSWR_103159_5) or called from a state where no test is possible.
    */
    igndd_testStatus_t igndd_Test(uint16 cyl_u16, uint32 tDwell_u32, uint32 tPeriod_u32, uint16 numPulses_u16);
#endif  /* (IGNDD_CONF_ENABLE_TEST_FUNC == TRUE) */


/** Test if fade out of source fdOutRequest is active.

    \param[in]  fdOutRequest    specific fade in request code - must be a element from the
                                enum \ref igndd_fdoutSources_t

    \return     fade out state of source (FALSE: ignition is faded in )
*/
CODE_NORM( bool igndd_testFadeOutSrc (igndd_fdoutSources_t fdOutRequest) );


/** stop ignition HW Driver
*/
CDRV_INLINE void igndd_off( void );


/** deactivate ignition (same as \ref igndd_off)
*/
CDRV_INLINE void igndd_portOff( void );


/*Read total number of completed ignition*/
CDRV_INLINE uint16 igndd_getIgnCnt (void);

/*
    \return     Ignition counter value (zzaehl_w)

*/

/* **************************************************************** */
/*  variables                                                       */
/* **************************************************************** */
#ifdef IGNDD_ModId
    #undef  REFORNOT
    #define REFORNOT
#else   /* IGNDD_ModId */
    #undef  REFORNOT
    #define REFORNOT    extern
#endif  /* IGNDD_ModId */

/** \ingroup IGNDD_PRIV
    State of IGNDD. Possible values of the state are defined through the enum \ref igndd_states_t.
*/
/* MISRA RULE 8.5 VIOLATION - If included in igndd.c this is handled as internal reference, if included
                              in any other module handled as external reference. */
RAM_SBSS_FAST8( REFORNOT volatile igndd_states_t igndd_state );



/* **************************************************************** */
/*  static/inline functions                                         */
/* **************************************************************** */


/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE bool igndd_ChlIsCycleActive (uint8 chl)
{
    return IgnH_ChlIsCycleActive(chl);
}


/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE void igndd_fadeOutIgn (igndd_fdoutSources_t fdOutRequest)
{
    igndd_fadeOutIgnPattern (fdOutRequest, (uint16)IGN_FDOUT_ALL);
}


/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE void igndd_fadeInIgn (igndd_fdoutSources_t fdOutRequest)
{
    igndd_fadeInIgnPattern (fdOutRequest, (uint16)IGN_FDOUT_ALL);
}


/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE igndd_states_t igndd_getState (void)
{
    return (igndd_state);
}


/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE void igndd_fadeOutImmediate(void)
{
    int i;
    for (i=0; i<(int)(SY_ZYLZA/SY_ZNDAUS); i++)
    {
        IgnH_ChlStop( (uint8)i );
    }
}

/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE void igndd_off( void )
{
    /* MISRA RULE 16.10 VIOLATION - return value intentionally not used */
    IgnH_DrvSetMode(IGNH_DRV_STOPPED);      /* Stop Driver  */
    igndd_setState(IGNDD_STATE_SyncIni);
}


/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE void igndd_portOff(void)
{
    /* deactivate ignition */
    igndd_off();
}

/* *************************************************************** */
/* function description is by prototype
*/
CDRV_INLINE void igndd_setState (igndd_states_t newState)
{
    igndd_state = newState;
}

/* *************************************************************** */
/* INLINE Function Interface to read ignition counter value (zzaehl_w)
    Input : void
    Output: uint16
*/
CDRV_INLINE uint16 igndd_getIgnCnt (void)
{
    return IgnH_DrvGetIgnCtr();
}



#endif /* IGNDD_H */

/** @} */
/* end of IGNDD_API         **************************************  */

/* ** end of file ************************************************** */
