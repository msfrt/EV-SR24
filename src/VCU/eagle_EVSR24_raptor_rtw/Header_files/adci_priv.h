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
 * $Filename__:adci_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:25.02.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:adci_priv$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 0     25.02.2010 LENZSI
 *   misra corrections
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: adci_priv.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _ADCI_PRIV_H
#define _ADCI_PRIV_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the configuration independent parts of all private
 *                 information shared by the files of the driver for the internal ADC of
 *                 the TriCore.
 *
 * \scope          INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * defines & macros
 ***************************************************************************************************
 */
/* Mask to write or evaluate one selected bit in Register MSS0 */
#define ADCI_MSS_MASK(channel)      (0x01ul << ((channel) & 0x000F))


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/**
 *  Type for describing properties of a channel.
 *
 *  This structure is used for storing some aspects of channel configuration which is
 *  used by the implementations of the access functions when they are not implemented
 *  as a macro. Is is also used for storing initialization values for channel control
 *  registers.
 */

typedef struct
{
    /// Initialization value for the corresponding channel control register
    uint32 xChConIni_u32;

    /// Reference voltage used by the channel
    sint16 uReference_s16;

    /// Resolution of the channel (in bits)
    uint8 xResolution_u8;

    /// Flags for special channel properties (not used yet, may be used e.g.
    /// for indicating an enabled "reference selection during runtime" feature)
    uint8 xFlags_u8;

} AdcI_ChannelDescriptor_t;


/* enum to define internal queue states */
typedef enum
{
    ADCI_QUEUESTATUS_STOPPED    = 0x00,
    ADCI_QUEUESTATUS_RUNNING    = 0x01,
    ADCI_QUEUESTATUS_E          = 0x80
}AdcI_SwQueue_QueueState_e;


/* typedef for queue control structure */
typedef struct
{
    AdcI_SwQueue_QueueState_e   Status_e;
    uint8                       ErrorFlags_u8;
    uint8                       ErrorCtr_u8;
    uint8                       ReadIdx_u8;
    uint8                       WriteIdx_u8;
    uint8                       ISRLostCtr_u8;
}AdcI_SwQueue_Control_t;


/* typedefs for queue element */
typedef struct
{
    AdcI_SwQueue_OrderState_e   OrderStatus_e;
    void                        (*CallBackFunction_pf)(void);
    uint8                       NofAdc_u8;
    uint8                       NofChannel_u8;
}AdcI_SwQueue_OrderStruct_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__adc__1_5ms__constant__arr32__START
    // Table of channel descriptors
    extern const AdcI_ChannelDescriptor_t * const AdcI_xChannelDescriptors_capc[];
__PRAGMA_USE__adc__1_5ms__constant__arr32__END

__PRAGMA_USE__adc__1_5ms__RAM__x16__START
    extern AdcI_stMonitoring_t AdcI_stMonitoring_a[];
__PRAGMA_USE__adc__1_5ms__RAM__x16__END


/***************************************************
 * only compile, if SW Trigger is used 
 * define commes from adci_auto_confprot.h - 
 * include order in adci_inf.h must not be changed 
 ***************************************************/
#if (((MACHINE_TYPE == TC_1766)     || \
      (MACHINE_TYPE == TC_1796))    && \
     (ADCI_NOF_SWTRIGGERS > 0)      )

__PRAGMA_USE__adc__1_5ms__RAM__s32__START
    // export queue control struct
    extern AdcI_SwQueue_Control_t AdcI_SwQueue_Control_s;
__PRAGMA_USE__adc__1_5ms__RAM__s32__END

__PRAGMA_USE__adc__1_5ms__RAM__arr32__START
    /* this is the actual queue, size is determined by the number of SW triggers configured */
    extern AdcI_SwQueue_OrderStruct_t AdcI_SwQueue_OrderQueue_as[ADCI_QUEUE_SIZE];
__PRAGMA_USE__adc__1_5ms__RAM__arr32__END



/*
 ***************************************************************************************************
 *  This inline function is used for incrementing the queue index
 *  \param      pointer to queue index (read or write index)
 *  \return     none
 *  \seealso    
 ***************************************************************************************************
 */
static inline void AdcI_SwQueue_IncQueueIdx(uint8 * QueueIdx_pu8) __attribute__ ((always_inline));
static inline void AdcI_SwQueue_IncQueueIdx(uint8 * QueueIdx_pu8)
{
    Cpu_SuspendInt();
    (*QueueIdx_pu8)++;
    if ((*QueueIdx_pu8) >= ADCI_QUEUE_SIZE)
    {
        *QueueIdx_pu8 = 0;
    }
    Cpu_ResumeInt();
}

/*
 ***************************************************************************************************
 *  This inline function is used for storing the errors in the local error managenment.
 *  For the bitpositions the enum AdcI_SwQueue_OrderState_e is used.
 *  \param      error of type AdcI_SwQueue_OrderState_e
 *  \return     none
 *  \seealso    AdcI_SwQueue_OrderState_e
 ***************************************************************************************************
 */
static inline void AdcI_SwQueue_RegisterError(AdcI_SwQueue_OrderState_e OrderState_e) __attribute__ ((always_inline));
static inline void AdcI_SwQueue_RegisterError(AdcI_SwQueue_OrderState_e OrderState_e)
{
    AdcI_SwQueue_Control_s.ErrorFlags_u8 |= (uint8)(0x01 << (OrderState_e & 0xF));
    AdcI_SwQueue_Control_s.ErrorCtr_u8++;
}

/*
 ***************************************************************************************************
 *  This function is actually writing the data into the ADC and starts the conversion.
 *  Its made a separaet function, because this sequence occures twice and its easier to maintain
 *  as one function. Perhaps it might even make sense to unmake it inline to save memory 
 *  (and of course expend runtime)
 *  \param      queue index to adress the order
 *  \return     
 *  \seealso
 ***************************************************************************************************
 */
static inline AdcI_SwQueue_OrderState_e AdcI_SwQueue_StartConversion (uint8 QueueIdx_u8) __attribute__ ((always_inline));
static inline AdcI_SwQueue_OrderState_e AdcI_SwQueue_StartConversion (uint8 QueueIdx_u8)
{
    const AdcI_ChannelDescriptor_t * xChannelDescriptor_pc;
    uint32 xChinSetup_u32;
    uint8 idxChannel16_u8 = 0;


    /* get channeldescriptor */
    xChannelDescriptor_pc = &(AdcI_xChannelDescriptors_capc
        [AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].NofAdc_u8]
        [AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].NofChannel_u8]);

     /* select GRPS, EMUX and RES of CHCON of the specified channel */
    xChinSetup_u32 = ((xChannelDescriptor_pc->xChConIni_u32) & 0x00007C00ul);

    /* check which ADC is requested, for Leda only ADC0 is available */
    if(AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].NofAdc_u8 == 0)
    {
        /* find out channel (0...15), second level multiplexer (channels 16...32) is controlled
         * by CHCON register of the specific channel */
        idxChannel16_u8 = AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].NofChannel_u8 & 0x0F;

        /* before activating the injected conversion check if an other one is running */
        Cpu_SuspendInt();

        /* write channelspecific data into CHCON register, only needed for ADC0 where channels
         * 0...15 and 16...32 share the same CHCON registers */
        ADC0.CHCON[idxChannel16_u8] = xChannelDescriptor_pc->xChConIni_u32;

        if(!Reg_GetBit(ADC0,AP,AP_CHP))
        {
            /* no other injected conversion running, start conversion and save status */
            ADC0.CHIN = 0x80000000ul | (xChinSetup_u32 >> 4) | ((uint32)idxChannel16_u8);
            AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].OrderStatus_e = ADCI_ORDERSTATUS_STARTED;
            AdcI_SwQueue_Control_s.ISRLostCtr_u8++;
        }
        else
        {
            /* injected conversion in use, but not by the queue handler */
            AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].OrderStatus_e = ADCI_ORDERSTATUS_E_ADCBUSY;
            AdcI_SwQueue_RegisterError(ADCI_ORDERSTATUS_E_ADCBUSY);
        }
        Cpu_ResumeInt();
    }
    #if (MACHINE_TYPE == TC_1766)
    /* code not necessary, will be blocked by script already */
    /* 
    else
    {
        AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].OrderStatus_e 
            = ADCI_ORDERSTATUS_E_PARAMETER;
        AdcI_SwQueue_RegisterError(ADCI_ORDERSTATUS_E_PARAMETER);
    }
    */

    #elif (MACHINE_TYPE == TC_1796)
    else
    {
        Cpu_SuspendInt();
        if(!Reg_GetBit(ADC1,AP,AP_CHP))
        {
            ADC1.CHIN = 0x80000000ul | 
                        (xChinSetup_u32 >> 4) | 
                        ((uint32)AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].NofChannel_u8);
            AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].OrderStatus_e 
                = ADCI_ORDERSTATUS_STARTED;
            AdcI_SwQueue_Control_s.ISRLostCtr_u8++;
        }
        else
        {
            AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].OrderStatus_e 
                = ADCI_ORDERSTATUS_E_ADCBUSY;
            AdcI_SwQueue_RegisterError(ADCI_ORDERSTATUS_E_ADCBUSY);
        }
        Cpu_ResumeInt();
    }
    #else
        #error >>> Unknown MACHINE_TYPE!
    #endif

    return (AdcI_SwQueue_OrderQueue_as[QueueIdx_u8].OrderStatus_e);
}



/*
 ***************************************************************************************************
 *  Function to do the queue processing after a conversion has happened, function will be 
 *  called in the Software ISR.
 *
 *  \param      none
 *  \return     none
 *  \seealso
 ***************************************************************************************************
 */
static inline void AdcI_SwQueue_Process(void) __attribute__ ((always_inline));
static inline void AdcI_SwQueue_Process(void)
{
    /* local variables */
    AdcI_SwQueue_OrderState_e returnValue_e;

    /****************************************
     * close current order
     ****************************************/
    /* select the right ADC */
    if (AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].NofAdc_u8 == 0)
    {
        /* check, if the expected bit in MSS register is set */
        if (ADC0.MSS0 & 
            ADCI_MSS_MASK(AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8]
                            .NofChannel_u8) )
        {
            /* clear the request bit in MSS0 */
            ADC0.MSS0 = ADCI_MSS_MASK(AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8]
                                        .NofChannel_u8);
            /* set order status */
            AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
                = ADCI_ORDERSTATUS_CONVERTED;

            /* call user callback function if configured */
            if (AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].CallBackFunction_pf
                != NULL)
            {
                /* call pointer from user callBack function */
                (*AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8]
                    .CallBackFunction_pf)();
                /* set order status */
                AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
                    = ADCI_ORDERSTATUS_FINISHED;

            }
        }
        else
        {
            /* the request bit of the converted channel is not set,
             * this must not occure, an error is returned to the user */
            AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e
                = ADCI_ORDERSTATUS_E_CHANNEL;
            /* store error and increment error counter */            
            AdcI_SwQueue_RegisterError(ADCI_ORDERSTATUS_E_CHANNEL);

            /* in case an error happens, the callback is not going to be called */
        }
    }
    #if (MACHINE_TYPE == TC_1766)
    /* this can not happen, is blocked by perl script already */
    /*
    else
    {
        AdcI_SwQueue_OrderQueue_as[WriteIdxOld_u8].OrderStatus_e 
            = ADCI_ORDERSTATUS_E_PARAMETER;
        AdcI_SwQueue_RegisterError(ADCI_ORDERSTATUS_E_PARAMETER);
    }
    */
    #elif (MACHINE_TYPE == TC_1796)
    else
    {
        /* check, if the expected bit in MSS register is set */
        if (ADC1.MSS0 & 
            ADCI_MSS_MASK(AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8]
                            .NofChannel_u8) )
        {
            /* clear the request bit in MSS0 */
            ADC1.MSS0 = ADCI_MSS_MASK(AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8]
                                        .NofChannel_u8);
            /* set order status */
            AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
                = ADCI_ORDERSTATUS_CONVERTED;

            /* call user callback function if configured */
            if (AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].CallBackFunction_pf
                != NULL)
            {
                /* call pointer from user callBack function */
                (*AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8]
                    .CallBackFunction_pf)();
                /* set order status */
                AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
                    = ADCI_ORDERSTATUS_FINISHED;
            }
        }
        else
        {
            /* the request bit of the converted channel is not set,
             * this must not occure, an error is returned to the user */
            AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e
                = ADCI_ORDERSTATUS_E_CHANNEL;
            /* store error and increment error counter */
            AdcI_SwQueue_RegisterError(ADCI_ORDERSTATUS_E_CHANNEL);
        }
    }
    #else
        #error >>> Unknown MACHINE_TYPE!
    #endif

    /****************************************
     * clear order in queue 
     ****************************************/
    AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
        = ADCI_ORDERSTATUS_EMPTY;
    /* increment queue read index */
    AdcI_SwQueue_IncQueueIdx(&AdcI_SwQueue_Control_s.ReadIdx_u8);


    /****************************************
     * restart queue if needed
     ****************************************/

    Cpu_SuspendInt();

    /* first: check if next queue entry is empty - most likely */
    if (AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
            == ADCI_ORDERSTATUS_EMPTY)
    {
        /* since there is no new order stop queue processing */
        AdcI_SwQueue_Control_s.Status_e = ADCI_QUEUESTATUS_STOPPED;
    }

    /* second: check if next queue entry is an accepted order */
    else if (AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
            == ADCI_ORDERSTATUS_ACCEPTED)
    {
        /************************************
         * run conversion
         ************************************/
        returnValue_e = AdcI_SwQueue_StartConversion(AdcI_SwQueue_Control_s.ReadIdx_u8);        
        
        /* if any error happend in handling the order */
        if (returnValue_e >= ADCI_ORDERSTATUS_E)
        {
            /* store error and increment error counter */
            AdcI_SwQueue_RegisterError(returnValue_e);

            /* error occured because ADC was busy with an other injected conversion,
               the measure is to stop the processing and try again later, 
               this might lead to a queue full problem, but is better than the 
               alternative of clearing the order in the queue. */
            AdcI_SwQueue_Control_s.Status_e = ADCI_QUEUESTATUS_STOPPED;
            AdcI_SwQueue_OrderQueue_as[AdcI_SwQueue_Control_s.ReadIdx_u8].OrderStatus_e 
                = ADCI_ORDERSTATUS_ACCEPTED;
        }
    }
    else
    {
        /* this must not happen, it would mean that there is an order in the queue
           that has an other status than ADCI_ORDERSTATUS_ACCEPTED,
           just stored as undefined error */
        AdcI_SwQueue_RegisterError(ADCI_ORDERSTATUS_E);
    }

    Cpu_ResumeInt();

}

#endif  // ADCI_NOF_SWTRIGGERS

/*_ADCI_PRIV_H                                                                                    */
#endif
