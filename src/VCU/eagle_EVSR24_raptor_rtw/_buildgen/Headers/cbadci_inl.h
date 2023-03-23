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
 * $Filename__:cbadci_inl.h$
 *
 * $Author____:LENZSI$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AMR4COB$
 * $Date______:06.04.2011$
 * $Class_____:SWHDR$
 * $Name______:cbadci_inl$
 * $Variant___:1.14.0$
 * $Revision__:2$
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
 * 1.14.0; 2     06.04.2011 AMR4COB
 *   .
 * 
 * 1.14.0; 1     05.04.2011 AMR4COB
 *   .
 * 
 * 1.14.0; 0     07.03.2011 AMR4COB
 *   CbAdcI support for TC1724
 * 
 * 1.13.0; 0     30.03.2010 LENZSI
 *   random function moved from adci to cbadci
 * 
 * 1.10.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: cbadci_inl.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _CBADCI_INL_H
#define _CBADCI_INL_H

/**
 ***************************************************************************************************
 * moduledescription
 *               Inline functions of the CBADCI module.
 *
 * scope         API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define CBADCI_UV_TO_ADCRES(voltage)        (((voltage) * 5)/1000)
#define CBADCI_MV_TO_ADCRES(voltage)        ((voltage) * 5)
#define CBADCI_V_TO_ADCRES(voltage)         ((voltage) * 5000)

/*
 ***************************************************************************************************
 * Variable declarations
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 *  Extern declarations
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Inline function declarations
 ***************************************************************************************************
 */

#if(MACHINE_TYPE == TC_1724)
static __inline__ uint8 regReg(uint8 numAdc_u8, uint8 numChannel_u8) __attribute__ ((always_inline));
static __inline__ uint8 regReg(uint8 numAdc_u8, uint8 numChannel_u8)

{
     uint8 resultReg_u8 = numChannel_u8;
     if((numAdc_u8==1) && ( (numChannel_u8==0) ||(numChannel_u8==3)  ||(numChannel_u8==7)  ||(numChannel_u8==9)  ||
                         (numChannel_u8==16) ||(numChannel_u8==17) ||(numChannel_u8==18) ||(numChannel_u8==19) ||
                         (numChannel_u8==20) ||(numChannel_u8==21) ||(numChannel_u8==22) ||(numChannel_u8==23)))
    {
                            switch(numChannel_u8)
                            {
                            case 0: resultReg_u8 = 0; break;
                            case 3: resultReg_u8 = 1; break;
                            case 7: resultReg_u8 = 2; break;
                            case 9: resultReg_u8 = 3; break;
                            default: resultReg_u8 = numChannel_u8 - 12; break;
                            }
   }

    return(resultReg_u8);
}
#endif

/**
 ***************************************************************************************************
 * CBAdcI_GetErrorStatus -
 *
 * This function returns the Error Status Information..
 *
 * \param  none
 * \return Error Information
 ***************************************************************************************************
 */
static __inline__ uint8 CBAdcI_GetErrorStatus(void) __attribute__ ((always_inline));
static __inline__ uint8 CBAdcI_GetErrorStatus(void)
{
    uint8 tempErrStat_u8 = CBAdcI_stErr_u8;
    CBAdcI_stErr_u8 = 0;

    return(tempErrStat_u8);
}

/* MISRA RULE 1 VIOLATION: Maximum '#if...' nesting exceeds 8 levels ,
 * can't do anything - levels are needed... */
#if ((defined _RAND_INF_H) || (defined _ADCI_INF_H))

/**
 ***************************************************************************************************
 *  generates a random number before the ADC is actually used
 *
 *  This function shall only be available for the TROT module.
 *  Depending on the controller type there are two differnt implementaions.
 *
 *  \param      xRndNum_pu32  adress where the random number shall be written to
 *  \return     The return value indicates, whether the operation was
 *              sucessful (TRUE) or not (FLASE)
 *  \seealso
 ***************************************************************************************************
 */

static __inline__ bool CBAdcI_GetRandom32(uint32* xRndNum_pu32) __attribute__ ((always_inline));
static __inline__ bool CBAdcI_GetRandom32(uint32* xRndNum_pu32)
#if ((MACHINE_TYPE == TC_1767) || (MACHINE_TYPE == TC_1797) || \
     (MACHINE_TYPE == TC_1782) || (MACHINE_TYPE == TC_1793) || (MACHINE_TYPE == TC_1724))
{
    /* local variabes */
    uint32  tiTimeout_u32;
    uint32  rndNum_u32 = 0;
    uint8   numAdc_u8;
    uint8   numChannel_u8;

    /* check if clock activation happend */
    if (Reg_GetBit(ADC0, CLC, CLC_DISS))
    {
        /* enable clock signals */
        Cpu_ResetEndinit();
        ADC0.CLC = 0x00000000ul;
        Cpu_SetEndinit();

        if (Reg_GetBit(ADC0, CLC, CLC_DISS))
        {
            return (FALSE);
        }
    }

    /*  find out, whether the ADC is still unused
    *  this is done via the access protection */
    if (((ADC0.APR & 0x0000003F) == 0) &&
        ((ADC1.APR & 0x0000003F) == 0) )
    {
        ADC0.GLOBCTR    = 0x0000830Ful;         // configure clock prescalers
        ADC1.GLOBCTR    = 0x0000830Ful;         // fadci = 5MHZ@80MHz FPI

        /* wait until the activation is done, normally takes 10µs */
        tiTimeout_u32   = Cpu_GetSysTicks();
        do
        {
            if ((Cpu_GetSysTicks() - tiTimeout_u32) > CPU_US_TO_TICKS(4))
            {
                return (FALSE);
            }
        }
        while ((Reg_GetBitField(ADC0, GLOBSTR, GLOBSTR_ANON) != 3) ||
               (Reg_GetBitField(ADC1, GLOBSTR, GLOBSTR_ANON) != 3) );

        ADC0.ASENR      = 0x00000002ul;         // activate trigger sources for arbiter scanning
        ADC1.ASENR      = 0x00000002ul;

        /* define input class */
        ADC0.INPCR[0]   = 0x00000100ul;         // 12 bit resolution, shortest sample time
        ADC1.INPCR[0]   = 0x00000100ul;


        #if(MACHINE_TYPE != TC_1724)
        /* initialize all CHCTR registers */
        for (numAdc_u8=0 ; numAdc_u8 < 2 ; numAdc_u8++ )
        {
            for (numChannel_u8=0 ; numChannel_u8 < 16 ; numChannel_u8++ )
            {
                ADC[numAdc_u8].CHCTR[numChannel_u8] = (uint32) numChannel_u8 << 12;        // write result register
            }
        }
        #else
        /* Channel Control Register ADC0 */
        ADC0.CHCTR[0]   = 0x00000000ul;            // result register 0
        ADC0.CHCTR[1]   = 0x00001000ul;            // result register 1
        ADC0.CHCTR[2]   = 0x00002000ul;            // result register 2
        ADC0.CHCTR[3]   = 0x00003000ul;            // result register 3
        ADC0.CHCTR[4]   = 0x00004000ul;            // result register 4
        ADC0.CHCTR[5]   = 0x00005000ul;            // result register 5
        ADC0.CHCTR[6]   = 0x00006000ul;            // result register 6
        ADC0.CHCTR[7]   = 0x00007000ul;            // result register 7
        ADC0.CHCTR[8]   = 0x00008000ul;            // result register 8
        ADC0.CHCTR[9]   = 0x00009000ul;            // result register 9
        ADC0.CHCTR[10]  = 0x0000A000ul;            // result register 10
        ADC0.CHCTR[11]  = 0x0000B000ul;            // result register 11
        ADC0.CHCTR[12]  = 0x0000C000ul;            // result register 12
        ADC0.CHCTR[13]  = 0x0000D000ul;            // result register 13
        ADC0.CHCTR[14]  = 0x0000E000ul;            // result register 14
        ADC0.CHCTR[15]  = 0x0000F000ul;            // result register 15

        /* Channel Control Register ADC1 */
        ADC1.CHCTR[0]      = 0x00000000ul;          // result register 0
        ADC1.CHCTR[3]      = 0x00001000ul;          // result register 1
        ADC1.CHCTR[7]      = 0x00002000ul;          // result register 2
        ADC1.CHCTR[9]      = 0x00003000ul;          // result register 3
        ADC1.CHCTR1623[0]  = 0x00004000ul;          // result register 4
        ADC1.CHCTR1623[1]  = 0x00005000ul;          // result register 5
        ADC1.CHCTR1623[2]  = 0x00006000ul;          // result register 6
        ADC1.CHCTR1623[3]  = 0x00007000ul;          // result register 7
        ADC1.CHCTR1623[4]  = 0x00008000ul;          // result register 8
        ADC1.CHCTR1623[5]  = 0x00009000ul;          // result register 9
        ADC1.CHCTR1623[6]  = 0x0000A000ul;          // result register 10
        ADC1.CHCTR1623[7]  = 0x0000B000ul;          // result register 11
        #endif

        ADC0.CRMR1      = 0x00000001ul;         // configure request source 1
        ADC0.CRPR1      = 0x0000FFFFul;         // starts the actual conversion
        ADC1.CRMR1      = 0x00000001ul;         // configure request source 1
        #if(MACHINE_TYPE != TC_1724)
        ADC1.CRPR1      = 0x0000FFFFul;         // starts the actual conversion
        #else
        ADC1.CRPR1      = 0x00FF0289ul;
        #endif

        /* wait until all channels have been converted */
        tiTimeout_u32   = Cpu_GetSysTicks();
        do
        {
            /* check if timeout is reached - then do a reset */
            if ((Cpu_GetSysTicks() - tiTimeout_u32) > CPU_US_TO_TICKS(96))
            {
                return (FALSE);
            }
        }
        while (Reg_GetBit(ADC0, GLOBSTR, GLOBSTR_BUSY) || Reg_GetBit(ADC1, GLOBSTR, GLOBSTR_BUSY));

        /* now form the random number */
        for (numAdc_u8=0 ; numAdc_u8 < 2 ; numAdc_u8++ )
        {
            for (numChannel_u8=0 ; numChannel_u8 < 16 ; numChannel_u8++ )
            {
                rndNum_u32 |= (ADC[numAdc_u8].RESRD[numChannel_u8] & 0x1ul);    // take the lowest bit from the result
                rndNum_u32 <<= 1;                                               // shift the random number left
            }
        }

        ADC0.GLOBCTR    = 0x000000FFul;         // switch off the ADCs
        ADC1.GLOBCTR    = 0x000000FFul;

        /* write random number and update return value */
        * xRndNum_pu32 = rndNum_u32;

        return (TRUE);
    }

    return (FALSE);

/* MISRA RULE 82 VIOLATION: This is the shortest implementation. */
}
#elif ((MACHINE_TYPE == TC_1766) || (MACHINE_TYPE == TC_1796))
{
    uint8           idxRegister_u8;
    uint32          xResult_u32;
    uint32          xAdcClc_u32 = ADC0.CLC;
    uint32          xAdcFdr_u32;
    uint32          xScuCon_u32;
    uint32          tiTimeout_u32;

    xResult_u32 = 0;

    /************************************************************************
     *                                                                      *
     * - Store reset value of register ADC0.CLC, ADC0.FDR and SCU.CON       *
     * - Activate ADC0 with normal divider mode                             *
     *                                                                      *
     ************************************************************************/
    if (Reg_GetBit(ADC0, CLC, CLC_DISS))
    {
        /* enable clock signals */
        Cpu_ResetEndinit();
        xAdcClc_u32 = ADC0.CLC;
        ADC0.CLC = 0x00000000ul;
        Cpu_SetEndinit();

        if (Reg_GetBit(ADC0, CLC, CLC_DISS))
        {
            return FALSE;
        }
    }

    /* the random number can only be generated, if the ADC
       is not yet running, this is checked by the channel
       conversion request flags of all three triggers */
    #if (MACHINE_TYPE == TC_1766)
    if (ADC0.TTC || ADC0.EXTC || ADC0.REQ0 )
    #elif (MACHINE_TYPE == TC_1796)
    if (ADC0.TTC || ADC0.EXTC || ADC0.REQ0 ||
        ADC1.TTC || ADC1.EXTC || ADC1.REQ0 )
    #endif
    {
        return FALSE;
    }
    else
    {
        Cpu_ResetEndinit();
        /* activate ADC0; set frequency */
        /*   TC1796: 18.75 MHz @ 75 MHz (system clock) */
        /*   TC1796: 20.00 MHz @ 80 MHz (system clock) */
        xAdcFdr_u32 = ADC0.FDR;
        ADC0.FDR = ((0x1UL << 14) | 1020UL); // f_out = f_in/4
        Cpu_SetEndinit();

        /************************************************************************
         *                                                                      *
         * Start conversion of the ADC0...15 channels                           *
         *                                                                      *
         ************************************************************************/
        for (idxRegister_u8 = 0; idxRegister_u8 < 16; idxRegister_u8++)
        {
            /* setting channel register of ADC channel to high resolution 12 bit */
            ADC0.CHCON[idxRegister_u8] = 0x00000400UL;
        }

        /* start conversion */
        xScuCon_u32 = SCU.CON;
        ADC0.SCN = 0x0000FFFFUL;
        ADC0.CON = 0x00000100UL;

        /* wait for timeout */
        tiTimeout_u32   = Cpu_GetSysTicks();
        while((ADC0.CON & 0x00000100UL) != 0UL)
        {
            /* check if timeout is reached - then do a reset */
            if ((Cpu_GetSysTicks() - tiTimeout_u32) > CPU_US_TO_TICKS(96))
            {
                return (FALSE);
            }
        }

        /* copy the 2LSB of each channel to the random number */
        /* MISRA RULE 52 VIOLATION: This statement is reachable, probaly the last return
           confuses the MISRA checker */
        for (idxRegister_u8 = 0; idxRegister_u8 < 16; idxRegister_u8++)
        {
            xResult_u32 |= ((ADC0.CHSTAT[idxRegister_u8] & 0x00000003UL) << (2*idxRegister_u8));
        }

        /* store the random number at user adress */
        *xRndNum_pu32 = xResult_u32;

        /************************************************************************
         *                                                                      *
         * Restore reset value of register ADC0.CLC, ADC0.FDR and SCU.CON       *
         *                                                                      *
         ************************************************************************/
        Cpu_ResetEndinit();
        ADC0.CLC    = xAdcClc_u32;
        ADC0.FDR    = xAdcFdr_u32;
        SCU.CON     = xScuCon_u32;
        ADC0.SCN    = 0;
        Cpu_SetEndinit();

        return TRUE;
    }

/* MISRA RULE 82 VIOLATION: This is the shortest implementation. */
}

/* MACHINE_TYPE */
#endif


#if ((MACHINE_TYPE == TC_1766) || (MACHINE_TYPE == TC_1796))
/**
 ***************************************************************************************************
 *  converts the die tempatature signal for TC17x6 controllers
 *
 *  This function shall only be available for the TROT module.
 *
 *  \param      AdcI_DieTemp_pu32  adress where the random number shall be written to
 *  \return     The return value indicates, whether the operation was
 *              sucessful (TRUE) or not (FLASE)
 *  \seealso
 ***************************************************************************************************
 */
static __inline__ bool CBAdcI_GetDieTemp(uint16* xDieTemp_pu16) __attribute__ ((always_inline));
static __inline__ bool CBAdcI_GetDieTemp(uint16* xDieTemp_pu16)
{
    uint32          xAdcClc_u32 = ADC0.CLC;
    uint32          xAdcFdr_u32;
    uint32          xScuCon_u32;
    uint32          tiTimeout_u32;

    /************************************************************************
     *                                                                      *
     * - Store reset value of register ADC0.CLC, ADC0.FDR and SCU.CON       *
     * - Activate ADC0 with normal divider mode                             *
     *                                                                      *
     ************************************************************************/
    if (Reg_GetBit(ADC0, CLC, CLC_DISS))
    {
        /* enable clock signals */
        Cpu_ResetEndinit();
        xAdcClc_u32 = ADC0.CLC;
        ADC0.CLC = 0x00000000ul;
        Cpu_SetEndinit();

        if (Reg_GetBit(ADC0, CLC, CLC_DISS))
        {
            return FALSE;
        }
    }

    /* the random number can only be generated, if the ADC
       is not yet running, this is checked by the channel
       conversion request flags of all three triggers */
    #if (MACHINE_TYPE == TC_1766)
    if (ADC0.TTC || ADC0.EXTC || ADC0.REQ0 )
    #elif (MACHINE_TYPE == TC_1796)
    if (ADC0.TTC || ADC0.EXTC || ADC0.REQ0 ||
        ADC1.TTC || ADC1.EXTC || ADC1.REQ0 )
    #endif
    {
        return FALSE;
    }
    else
    {
        Cpu_ResetEndinit();
        /* activate ADC0; set frequency */
        /*   TC1796: 18.75 MHz @ 75 MHz (system clock) */
        /*   TC1796: 20.00 MHz @ 80 MHz (system clock) */
        xAdcFdr_u32 = ADC0.FDR;
        ADC0.FDR = ((0x1UL << 14) | 1020UL); // f_out = f_in/4

        /* activate die temperature */
        xScuCon_u32 = SCU.CON;
        SCU.CON |= (0x1UL << 9); // CON.DTSON = 1
        Cpu_SetEndinit();

        /************************************************************************
         *                                                                      *
         * Start conversion the die temperature and 16 analog channels          *
         *                                                                      *
         ************************************************************************/
        /* setting time for the die temperature */
        tiTimeout_u32 = Cpu_GetSysTicks();
        while (((Cpu_GetSysTicks()) - tiTimeout_u32) < CPU_TICKS_PER_10US_U32)
        {
           /* wait for 10µs */
        }

        #if (MACHINE_TYPE == TC_1766)
            ADC0.CHCON[15]  = 0x00005400UL; //GRPS = 1, EMUX = 01, RES = 01
            ADC0.SCN        = 0x00008000UL;
            ADC0.CON        = 0x00000100UL;
        #elif (MACHINE_TYPE == TC_1796)
            /* Workaround for Errata ADC_TC.031 in AC-Step Microcontrollers */
            ADC0.SCON       = 0x1A;
            ADC1.SCON       = 0x1A;
            ADC0.SCON       = 0x05;
            ADC1.SCON       = 0x05;
            /* Workaround end */
            ADC1.CHCON[15]  = 0x00005400UL; //GRPS = 1, EMUX = 01, RES = 01
            ADC1.SCN        = 0x00008000UL;
            ADC1.CON        = 0x00000100UL;
        #endif

        /* Note:                                        */
        /* RES = 01, means high resolution of 12 bit    */
        /* GRPS = 1, EMUX = 01, are obligatory settings */


        /* wait for timeout */
        tiTimeout_u32   = Cpu_GetSysTicks();
        #if (MACHINE_TYPE == TC_1766)
            while(ADC0.CHSTAT[15] == 0UL)
            {
                /* check if timeout is reached - then do a reset */
                if ((Cpu_GetSysTicks() - tiTimeout_u32) > CPU_US_TO_TICKS(10))
                {
                    return (FALSE);
                }
            }
            *xDieTemp_pu16 = (uint16)ADC0.CHSTAT[15];
        #elif (MACHINE_TYPE == TC_1796)
            while(ADC1.CHSTAT[15] == 0UL)
            {
                /* check if timeout is reached - then do a reset */
                if ((Cpu_GetSysTicks() - tiTimeout_u32) > CPU_US_TO_TICKS(10))
                {
                    return (FALSE);
                }
            }
            *xDieTemp_pu16 = (uint16)ADC1.CHSTAT[15];
        #endif

         /************************************************************************
         *                                                                      *
         * Restore reset value of register ADC0.CLC, ADC0.FDR and SCU.CON       *
         *                                                                      *
         ************************************************************************/
        Cpu_ResetEndinit();
        ADC0.CLC    = xAdcClc_u32;
        ADC0.FDR    = xAdcFdr_u32;
        SCU.CON     = xScuCon_u32;
        #if (MACHINE_TYPE == TC_1766)
        ADC0.SCN    = 0;
        #else
        ADC1.SCN    = 0;
        #endif
        Cpu_SetEndinit();

        return TRUE;
    }

/* MISRA RULE 82 VIOLATION: This is the shortest implementation. */
}

/* MACHINE_TYPE */
#endif

/* _RAND_PRIV_H  */
#endif

/* #ifndef _CBADCI_INL_H */
#endif
