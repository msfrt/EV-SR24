/* EasyCASE V6.5 05.07.2012 10:42:08 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,16711680,16711680,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=57 */
/* EasyCASE ( 1
   PRAGMAS fuer die Funktionsueberwachung */
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
 * $Filename__:mo_pragma.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 **************************************************************************
*/
/* EasyCASE ( 57
   Module Information and History */
/**************************************************************************
 * $Domain____:SDOM$ 
 * $User______:TRJ2ST$ 
 * $Date______:23.11.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:mo_pragma$ 
 * $Variant___:21.5.1$ 
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
 * 21.5.1; 0     23.11.2012 TRJ2ST
 *   Pragma section SECTION_Mo_RamNCCNoReIni corrected
 * 
 * 21.5.0; 1     11.09.2012 TRJ2ST
 *   sbss Sektion korrigiert
 * 
 * 21.5.0; 0     05.07.2012 TRJ2ST
 *   NoReIni Sections, Hex neutral change of Tpyemodell, Mo_data00ItS32Msg 
 *   Mo_data01ItS32Msg
 * 
 * 21.3.0; 1     24.02.2012 GHS2SI
 *   New section for Mo_CodeIt Variables not cyclic checked
 * 
 * 21.3.0; 0     17.02.2012 TRJ2ST
 *   New section for NoReIni Variables not cyclic checked
 * 
 * 12.0.0; 0     29.10.2009 RWF2SI
 *   Common Mo_Glbl for DGS GS version
 *   5. step : add definition of Mo_stCplChk for compatibilty in an merged DS 
 *   and GS monitoring environment
 * 
 * 2.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: MO_PRAGMA
 *      Variant: 2.10
 *      Revision: 9
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/* EasyCASE ) */
/* EasyCASE ( 44
   PRAGMA-Definitionen */
/* ********************************************************************************************** */
/* PRAGMA_UNUSED dient zur Erkennung, ob ueberhaupt eines der Pragmas in diesem File ausgewaehlt  */
/* wurde. Wenn das nicht der Fall ist, handelt es sich um einen Fehler! (s.u.)                    */
/* ********************************************************************************************** */

#define PRAGMA_UNUSED
/* EasyCASE ( 41
   Deklarationen */
/* ********************************************************************************************** */
/* Zuweisungen fuer Programm-Sammel-Sektionen                                                     */
/* Die Zuweisung muss immer als Paar erfolgen: START_Section / STOP_Section. Dadurch wird der     */
/* Programmcode fuer die jeweilige Sektion geklammert (umschlossen).                              */
/* Bei manchen Compilern kann die STOP-Section leer sein.                                         */
/* ********************************************************************************************** */
/* EasyCASE ( 32
   Sektionsanweisungen fuer 
   - die Tabellen der zyklischen Speichertests und 
   - die Tabellen der kompletten Speichertests in den allgemeinen Datenbereich */
/* 
Tabellenzuweisung der zykl. Speichertests in den Codebereich der Ueberwachung     

Diese Sektion beinhaltet Tabelle/Strukturen fuer die zyklischen Speichertests.
Da diese Tabelle/Sektionen keinen aufuehrbaren Code beinhalten, darf das Flag x 
nicht gesetzt werden.
*/
#ifdef START_SECTION_Mo_CodeCyclicCheckTable
    #pragma section .Mo_CodeCyclicCheckTable a
    #undef START_SECTION_Mo_CodeCyclicCheckTable
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_CodeCyclicCheckTable
    #pragma section
    #undef STOP_SECTION_Mo_CodeCyclicCheckTable
    #undef PRAGMA_UNUSED
#endif

/* Sektion for Instructiontest                                      */
/* If OTCG is activated we need an additional Code-Sektion          */
/* which is independent from Monitoring Code section                */
/* This is needed to avoid that any code outside from monitoring is */
/* processed with the OTCG toolchain.                               */
#ifdef START_SECTION_Mo_CodeIt
    #pragma section .text.asw0 ax
    #undef START_SECTION_Mo_CodeIt
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_CodeIt
    #pragma section
    #undef STOP_SECTION_Mo_CodeIt
    #undef PRAGMA_UNUSED
#endif

/* Tabellenzuweisung der zykl. Speichertests in den Datenbereich der Ueberwachung    */
#ifdef START_SECTION_Mo_DataCyclicCheckTable
    #pragma section .Mo_DataCyclicCheckTable a
    #undef START_SECTION_Mo_DataCyclicCheckTable
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_DataCyclicCheckTable
    #pragma section
    #undef STOP_SECTION_Mo_DataCyclicCheckTable
    #undef PRAGMA_UNUSED
#endif

/* Tabellenzuweisung der kompl. Speichertests in den allgemeinen Datenbereich 1      */
#ifdef START_SECTION_Mo_RomData1Table
    #pragma section .Mo_RomData1Table a
    #undef START_SECTION_Mo_RomData1Table
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RomData1Table
    #pragma section
    #undef STOP_SECTION_Mo_RomData1Table
    #undef PRAGMA_UNUSED
#endif

/* Tabellenzuweisung der kompl. Speichertests in den allgemeinen Datenbereich 2      */
#ifdef START_SECTION_Mo_RomData2Table
    #pragma section .Mo_RomData2Table a
    #undef START_SECTION_Mo_RomData2Table
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RomData2Table
    #pragma section
    #undef STOP_SECTION_Mo_RomData2Table
    #undef PRAGMA_UNUSED
#endif

/* Tabellenzuweisung der kompl. Speichertests in den allgemeinen Datenbereich 3      */
#ifdef START_SECTION_Mo_RomData3Table
    #pragma section .Mo_RomData3Table a
    #undef START_SECTION_Mo_RomData3Table
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RomData3Table
    #pragma section
    #undef STOP_SECTION_Mo_RomData3Table
    #undef PRAGMA_UNUSED
#endif
/* EasyCASE ) */
/* EasyCASE ( 51
                    Small Adressierung 
   Sektionsanweisungen fuer 
   - die Tabelle der kompletten Speichertests fuer den Code
   - Befehlstest Stimulidaten
   - Const allgemein */
/* Zuweisung der Tabelle kompl. Speichertests in den Small adressierten Bereich      */
#ifdef START_SECTION_Mo_RomFlashTable
    #pragma section .sdata.rodata.a4 as
    #undef START_SECTION_Mo_RomFlashTable
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RomFlashTable
    #pragma section
    #undef STOP_SECTION_Mo_RomFlashTable
    #undef PRAGMA_UNUSED
#endif

/* Zuweisung der Stimulidaten fuer den Befehlstest in den Small adressierten Bereich */
#ifdef START_SECTION_Mo_ConstItTable
    #pragma section .sdata.rodata as
    #undef START_SECTION_Mo_ConstItTable
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_ConstItTable
    #pragma section
    #undef STOP_SECTION_Mo_ConstItTable
    #undef PRAGMA_UNUSED
#endif

/* Zuweisung in den Small adressierten Bereich fuer Konstanten allgemein             */
#ifdef START_SECTION_Mo_ConstSmall
    #pragma section .sdata.rodata as
    #undef START_SECTION_Mo_ConstSmall
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_ConstSmall
    #pragma section
    #undef STOP_SECTION_Mo_ConstSmall
    #undef PRAGMA_UNUSED
#endif
/* EasyCASE ) */
/* EasyCASE ( 36
   Sektionsanweisungen fuer die Codebereiche der Funktionsueberwachung */
/* Zyklisch gepruefter Codebereich der Funktionsueberwachung         */
#ifdef START_SECTION_Mo_CodeCyclicCheck
    #pragma section .text.Mo_CodeCyclicCheck ax
    #undef START_SECTION_Mo_CodeCyclicCheck
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_CodeCyclicCheck
    #pragma section
    #undef STOP_SECTION_Mo_CodeCyclicCheck
    #undef PRAGMA_UNUSED
#endif

/* Nicht zyklisch gepruefter Codebereich der Funktionsueberwachung   */
#ifdef START_SECTION_Mo_CodeNoCyclicCheck
    #pragma section .text.Mo_CodeNoCyclicCheck ax
    #undef START_SECTION_Mo_CodeNoCyclicCheck
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_CodeNoCyclicCheck
    #pragma section
    #undef STOP_SECTION_Mo_CodeNoCyclicCheck
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer importierte Linkerlabels (Speichertests)             */
#ifdef START_SECTION_Mo_LabelOnly
    #pragma section .Mo_label_only a
    #undef START_SECTION_Mo_LabelOnly
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_LabelOnly
    #pragma section
    #undef STOP_SECTION_Mo_LabelOnly
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer ASW0 Codebereich */
#ifdef START_SECTION_Mo_CodeASW0
    #pragma section .text.asw0 ax
    #undef START_SECTION_Mo_CodeASW0
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_CodeASW0
    #pragma section
    #undef STOP_SECTION_Mo_CodeASW0
    #undef PRAGMA_UNUSED
#endif
/* EasyCASE ) */
/* EasyCASE ( 40
   Sektionsanweisungen fuer die Variablen der Funktionsueberwachung */
/* Sektion fuer Temporaervariablen der Funktionsueberwachung         */
#ifdef START_SECTION_Mo_RamTmp
    #pragma section .bss.Mo_RamTmp aw
    #undef START_SECTION_Mo_RamTmp
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamTmp
    #pragma section
    #undef STOP_SECTION_Mo_RamTmp
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer Temporaervariablen der Funktionsueberwachung         */
/* Kompatibilitaet => Umlenken auf .bss.Mo_RamTmp aw                 */
#ifdef START_SECTION_Mo_RamTmp2
    #pragma section .bss.Mo_RamTmp aw
    #undef START_SECTION_Mo_RamTmp2
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamTmp2
    #pragma section
    #undef STOP_SECTION_Mo_RamTmp2
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer Variablen der Funktionsueberwachung                  */
#ifdef START_SECTION_Mo_RamCyclicCheck
    #pragma section .bss.Mo_RamCyclicCheck aw
    #undef START_SECTION_Mo_RamCyclicCheck
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamCyclicCheck
    #pragma section
    #undef STOP_SECTION_Mo_RamCyclicCheck
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer Komplementvariablen der Funktionsueberwachung        */
#ifdef START_SECTION_Mo_RamCpl
    #pragma section .bss.Mo_RamCpl aw
    #undef START_SECTION_Mo_RamCpl
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamCpl
    #pragma section
    #undef STOP_SECTION_Mo_RamCpl
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer Befehlstestvariablen der Funktionsueberwachung       */
#ifdef START_SECTION_Mo_RamIt
    #pragma section .bss.Mo_RamIt aw
    #undef START_SECTION_Mo_RamIt
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamIt
    #pragma section
    #undef STOP_SECTION_Mo_RamIt
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer Dauer-RAM-Variablen der Funktionsueberwachung        */
#ifdef START_SECTION_Mo_RamNv
    #pragma section .bss.Mo_RamNv aw
    #undef START_SECTION_Mo_RamNv
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamNv
    #pragma section
    #undef STOP_SECTION_Mo_RamNv
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer Messpunkte der Funktionsueberwachung                 */
#ifdef START_SECTION_Mo_Mp
    #pragma section .bss.mpram aw
    #undef START_SECTION_Mo_Mp
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_Mp
    #pragma section
    #undef STOP_SECTION_Mo_Mp
    #undef PRAGMA_UNUSED
#endif
/* EasyCASE ) */
/* EasyCASE ( 45
              Small Adressierung 
   Sektionsanweisungen fuer Static Variablen */
/* Sektion fuer 32 Bit Static Variablen                              */
#ifdef START_SECTION_Mo_RamStaticLong
    #pragma section .sbss.a4 aws
    #undef START_SECTION_Mo_RamStaticLong
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamStaticLong
    #pragma section
    #undef STOP_SECTION_Mo_RamStaticLong
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer 16 Bit Static Variablen                              */
#ifdef START_SECTION_Mo_RamStaticWord
    #pragma section .sbss.a2 aws
    #undef START_SECTION_Mo_RamStaticWord
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamStaticWord
    #pragma section
    #undef STOP_SECTION_Mo_RamStaticWord
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer 8 Bit Static Variablen                               */
#ifdef START_SECTION_Mo_RamStaticByte
    #pragma section .sbss.a1 aws
    #undef START_SECTION_Mo_RamStaticByte
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamStaticByte
    #pragma section
    #undef STOP_SECTION_Mo_RamStaticByte
    #undef PRAGMA_UNUSED
#endif

/* Sektion fuer Static Variablen > Long                              */
#ifdef START_SECTION_Mo_RamStatic
    #pragma section .sbss aws
    #undef START_SECTION_Mo_RamStatic
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamStatic
    #pragma section
    #undef STOP_SECTION_Mo_RamStatic
    #undef PRAGMA_UNUSED
#endif
/* EasyCASE ) */
/* EasyCASE ( 55
   Sektionsanweisungen fuer Variablen 
   die bei Systemen mit Neustart ohne Reset
   in der NoReIni Sektion eingebunden werden */
/* 
Sektion fuer Variablen in der NoReIni Sektion                  
z.B. CAN Buffer
*/
#ifdef START_SECTION_Mo_RamNCCNoReIni
    #pragma section .sbss.Mo_RamNoReIni aws
    #undef START_SECTION_Mo_RamNCCNoReIni
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Mo_RamNCCNoReIni
    #pragma section
    #undef STOP_SECTION_Mo_RamNCCNoReIni
    #undef PRAGMA_UNUSED
#endif
/* EasyCASE ) */
/* EasyCASE ) */
#ifdef  PRAGMA_UNUSED
    #error "Error: Das File MO_PRAGMA.H wurde includiert, aber es wurde kein Pragma daraus verwendet! "
#endif
/* EasyCASE ) */
/* EasyCASE ) */
