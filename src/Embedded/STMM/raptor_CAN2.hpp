/******************************************************************************
    
    This file was generated automatically from a DBC file by the dbctocpp 
    utility, which is part of the StateCAN library, 
    a component of SR-Libraries.

    https://github.com/msfrt/SR-Libraries
    
******************************************************************************/

#ifndef RAPTOR_CAN2_HPP
#define RAPTOR_CAN2_HPP

#include <FlexCAN_T4.h>
#include <StateCAN.h>
#include <map>
#include <string>

using std::map;
using std::string;

// Message: STMM_1839F380 [0x1839f380]
StateSignal STMM_thermModNum(8, false, 1, 0.0, 0, 255, 0.0, -1, 406451072);
StateSignal STMM_lowestThermVal(8, true, 1, 0.0, -5, 120, 0.0, -1, 406451072);
StateSignal STMM_highestThermVal(8, true, 1, 0.0, -5, 120, 0.0, -1, 406451072);
StateSignal STMM_avgThermVal(8, true, 1, 0.0, -5, 120, 0.0, -1, 406451072);
StateSignal STMM_numThermsEnabled(8, false, 1, 0.0, 0, 255, 0.0, -1, 406451072);
StateSignal STMM_highestThermID(8, false, 1, 0.0, 0, 255, 0.0, -1, 406451072);
StateSignal STMM_lowestThermID(8, false, 1, 0.0, 0, 255, 0.0, -1, 406451072);
StateSignal STMM_checksum(8, false, 1, 0.0, 0, 255, 0.0, -1, 406451072);

// Message: STMM_331 [0x14b]
StateSignal STMM_counterMsg331(4, false, 1, 0.0, 0, 15, 0.0, -1, 331);
StateSignal STMM_segmentTemp809(16, true, 10, 0.0, -5, 120, 0.0, -1, 331);
StateSignal STMM_segmentTemp810(16, true, 10, 0.0, -5, 120, 0.0, -1, 331);
StateSignal STMM_segmentTemp811(16, true, 10, 0.0, -5, 120, 0.0, -1, 331);

// Message: STMM_330 [0x14a]
StateSignal STMM_counterMsg330(4, false, 1, 0.0, 0, 15, 0.0, -1, 330);
StateSignal STMM_segmentTemp806(16, true, 10, 0.0, -5, 120, 0.0, -1, 330);
StateSignal STMM_segmentTemp807(16, true, 10, 0.0, -5, 120, 0.0, -1, 330);
StateSignal STMM_segmentTemp808(16, true, 10, 0.0, -5, 120, 0.0, -1, 330);

// Message: STMM_329 [0x149]
StateSignal STMM_counterMsg329(4, false, 1, 0.0, 0, 15, 0.0, -1, 329);
StateSignal STMM_segmentTemp803(16, true, 10, 0.0, -5, 120, 0.0, -1, 329);
StateSignal STMM_segmentTemp804(16, true, 10, 0.0, -5, 120, 0.0, -1, 329);
StateSignal STMM_segmentTemp805(16, true, 10, 0.0, -5, 120, 0.0, -1, 329);

// Message: STMM_328 [0x148]
StateSignal STMM_counterMsg328(4, false, 1, 0.0, 0, 15, 0.0, -1, 328);
StateSignal STMM_segmentTemp800(16, true, 10, 0.0, -5, 120, 0.0, -1, 328);
StateSignal STMM_segmentTemp801(16, true, 10, 0.0, -5, 120, 0.0, -1, 328);
StateSignal STMM_segmentTemp802(16, true, 10, 0.0, -5, 120, 0.0, -1, 328);

// Message: STMM_327 [0x147]
StateSignal STMM_counterMsg327(4, false, 1, 0.0, 0, 15, 0.0, -1, 327);
StateSignal STMM_segmentTemp709(16, true, 10, 0.0, -5, 120, 0.0, -1, 327);
StateSignal STMM_segmentTemp710(16, true, 10, 0.0, -5, 120, 0.0, -1, 327);
StateSignal STMM_segmentTemp711(16, true, 10, 0.0, -5, 120, 0.0, -1, 327);

// Message: STMM_326 [0x146]
StateSignal STMM_counterMsg326(4, false, 1, 0.0, 0, 15, 0.0, -1, 326);
StateSignal STMM_segmentTemp706(16, true, 10, 0.0, -5, 120, 0.0, -1, 326);
StateSignal STMM_segmentTemp707(16, true, 10, 0.0, -5, 120, 0.0, -1, 326);
StateSignal STMM_segmentTemp708(16, true, 10, 0.0, -5, 120, 0.0, -1, 326);

// Message: STMM_325 [0x145]
StateSignal STMM_counterMsg325(4, false, 1, 0.0, 0, 15, 0.0, -1, 325);
StateSignal STMM_segmentTemp703(16, true, 10, 0.0, -5, 120, 0.0, -1, 325);
StateSignal STMM_segmentTemp704(16, true, 10, 0.0, -5, 120, 0.0, -1, 325);
StateSignal STMM_segmentTemp705(16, true, 10, 0.0, -5, 120, 0.0, -1, 325);

// Message: STMM_324 [0x144]
StateSignal STMM_counterMsg324(4, false, 1, 0.0, 0, 15, 0.0, -1, 324);
StateSignal STMM_segmentTemp700(16, true, 10, 0.0, -5, 120, 0.0, -1, 324);
StateSignal STMM_segmentTemp701(16, true, 10, 0.0, -5, 120, 0.0, -1, 324);
StateSignal STMM_segmentTemp702(16, true, 10, 0.0, -5, 120, 0.0, -1, 324);

// Message: STMM_323 [0x143]
StateSignal STMM_counterMsg323(4, false, 1, 0.0, 0, 15, 0.0, -1, 323);
StateSignal STMM_segmentTemp609(16, true, 10, 0.0, -5, 120, 0.0, -1, 323);
StateSignal STMM_segmentTemp610(16, true, 10, 0.0, -5, 120, 0.0, -1, 323);
StateSignal STMM_segmentTemp611(16, true, 10, 0.0, -5, 120, 0.0, -1, 323);

// Message: STMM_322 [0x142]
StateSignal STMM_counterMsg322(4, false, 1, 0.0, 0, 15, 0.0, -1, 322);
StateSignal STMM_segmentTemp606(16, true, 10, 0.0, -5, 120, 0.0, -1, 322);
StateSignal STMM_segmentTemp607(16, true, 10, 0.0, -5, 120, 0.0, -1, 322);
StateSignal STMM_segmentTemp608(16, true, 10, 0.0, -5, 120, 0.0, -1, 322);

// Message: STMM_321 [0x141]
StateSignal STMM_counterMsg321(4, false, 1, 0.0, 0, 15, 0.0, -1, 321);
StateSignal STMM_segmentTemp603(16, true, 10, 0.0, -5, 120, 0.0, -1, 321);
StateSignal STMM_segmentTemp604(16, true, 10, 0.0, -5, 120, 0.0, -1, 321);
StateSignal STMM_segmentTemp605(16, true, 10, 0.0, -5, 120, 0.0, -1, 321);

// Message: STMM_320 [0x140]
StateSignal STMM_counterMsg320(4, false, 1, 0.0, 0, 15, 0.0, -1, 320);
StateSignal STMM_segmentTemp600(16, true, 10, 0.0, -5, 120, 0.0, -1, 320);
StateSignal STMM_segmentTemp601(16, true, 10, 0.0, -5, 120, 0.0, -1, 320);
StateSignal STMM_segmentTemp602(16, true, 10, 0.0, -5, 120, 0.0, -1, 320);

// Message: STMM_319 [0x13f]
StateSignal STMM_counterMsg319(4, false, 1, 0.0, 0, 15, 0.0, -1, 319);
StateSignal STMM_segmentTemp509(16, true, 10, 0.0, -5, 120, 0.0, -1, 319);
StateSignal STMM_segmentTemp510(16, true, 10, 0.0, -5, 120, 0.0, -1, 319);
StateSignal STMM_segmentTemp511(16, true, 10, 0.0, -5, 120, 0.0, -1, 319);

// Message: STMM_318 [0x13e]
StateSignal STMM_counterMsg318(4, false, 1, 0.0, 0, 15, 0.0, -1, 318);
StateSignal STMM_segmentTemp506(16, true, 10, 0.0, -5, 120, 0.0, -1, 318);
StateSignal STMM_segmentTemp507(16, true, 10, 0.0, -5, 120, 0.0, -1, 318);
StateSignal STMM_segmentTemp508(16, true, 10, 0.0, -5, 120, 0.0, -1, 318);

// Message: STMM_317 [0x13d]
StateSignal STMM_counterMsg317(4, false, 1, 0.0, 0, 15, 0.0, -1, 317);
StateSignal STMM_segmentTemp503(16, true, 10, 0.0, -5, 120, 0.0, -1, 317);
StateSignal STMM_segmentTemp504(16, true, 10, 0.0, -5, 120, 0.0, -1, 317);
StateSignal STMM_segmentTemp505(16, true, 10, 0.0, -5, 120, 0.0, -1, 317);

// Message: STMM_316 [0x13c]
StateSignal STMM_counterMsg316(4, false, 1, 0.0, 0, 15, 0.0, -1, 316);
StateSignal STMM_segmentTemp500(16, true, 10, 0.0, -5, 120, 0.0, -1, 316);
StateSignal STMM_segmentTemp501(16, true, 10, 0.0, -5, 120, 0.0, -1, 316);
StateSignal STMM_segmentTemp502(16, true, 10, 0.0, -5, 120, 0.0, -1, 316);

// Message: STMM_315 [0x13b]
StateSignal STMM_counterMsg315(4, false, 1, 0.0, 0, 15, 0.0, -1, 315);
StateSignal STMM_segmentTemp409(16, true, 10, 0.0, -5, 120, 0.0, -1, 315);
StateSignal STMM_segmentTemp410(16, true, 10, 0.0, -5, 120, 0.0, -1, 315);
StateSignal STMM_segmentTemp411(16, true, 10, 0.0, -5, 120, 0.0, -1, 315);

// Message: STMM_314 [0x13a]
StateSignal STMM_counterMsg314(4, false, 1, 0.0, 0, 15, 0.0, -1, 314);
StateSignal STMM_segmentTemp406(16, true, 10, 0.0, -5, 120, 0.0, -1, 314);
StateSignal STMM_segmentTemp407(16, true, 10, 0.0, -5, 120, 0.0, -1, 314);
StateSignal STMM_segmentTemp408(16, true, 10, 0.0, -5, 120, 0.0, -1, 314);

// Message: STMM_313 [0x139]
StateSignal STMM_counterMsg313(4, false, 1, 0.0, 0, 15, 0.0, -1, 313);
StateSignal STMM_segmentTemp403(16, true, 10, 0.0, -5, 120, 0.0, -1, 313);
StateSignal STMM_segmentTemp404(16, true, 10, 0.0, -5, 120, 0.0, -1, 313);
StateSignal STMM_segmentTemp405(16, true, 10, 0.0, -5, 120, 0.0, -1, 313);

// Message: STMM_312 [0x138]
StateSignal STMM_counterMsg312(4, false, 1, 0.0, 0, 15, 0.0, -1, 312);
StateSignal STMM_segmentTemp400(16, true, 10, 0.0, -5, 120, 0.0, -1, 312);
StateSignal STMM_segmentTemp401(16, true, 10, 0.0, -5, 120, 0.0, -1, 312);
StateSignal STMM_segmentTemp402(16, true, 10, 0.0, -5, 120, 0.0, -1, 312);

// Message: STMM_311 [0x137]
StateSignal STMM_counterMsg311(4, false, 1, 0.0, 0, 15, 0.0, -1, 311);
StateSignal STMM_segmentTemp309(16, true, 10, 0.0, -5, 120, 0.0, -1, 311);
StateSignal STMM_segmentTemp310(16, true, 10, 0.0, -5, 120, 0.0, -1, 311);
StateSignal STMM_segmentTemp311(16, true, 10, 0.0, -5, 120, 0.0, -1, 311);

// Message: STMM_310 [0x136]
StateSignal STMM_counterMsg310(4, false, 1, 0.0, 0, 15, 0.0, -1, 310);
StateSignal STMM_segmentTemp306(16, true, 10, 0.0, -5, 120, 0.0, -1, 310);
StateSignal STMM_segmentTemp307(16, true, 10, 0.0, -5, 120, 0.0, -1, 310);
StateSignal STMM_segmentTemp308(16, true, 10, 0.0, -5, 120, 0.0, -1, 310);

// Message: STMM_309 [0x135]
StateSignal STMM_counterMsg309(4, false, 1, 0.0, 0, 15, 0.0, -1, 309);
StateSignal STMM_segmentTemp303(16, true, 10, 0.0, -5, 120, 0.0, -1, 309);
StateSignal STMM_segmentTemp304(16, true, 10, 0.0, -5, 120, 0.0, -1, 309);
StateSignal STMM_segmentTemp305(16, true, 10, 0.0, -5, 120, 0.0, -1, 309);

// Message: STMM_308 [0x134]
StateSignal STMM_counterMsg308(4, false, 1, 0.0, 0, 15, 0.0, -1, 308);
StateSignal STMM_segmentTemp300(16, true, 10, 0.0, -5, 120, 0.0, -1, 308);
StateSignal STMM_segmentTemp301(16, true, 10, 0.0, -5, 120, 0.0, -1, 308);
StateSignal STMM_segmentTemp302(16, true, 10, 0.0, -5, 120, 0.0, -1, 308);

// Message: STMM_307 [0x133]
StateSignal STMM_counterMsg307(4, false, 1, 0.0, 0, 15, 0.0, -1, 307);
StateSignal STMM_segmentTemp209(16, true, 10, 0.0, -5, 120, 0.0, -1, 307);
StateSignal STMM_segmentTemp210(16, true, 10, 0.0, -5, 120, 0.0, -1, 307);
StateSignal STMM_segmentTemp211(16, true, 10, 0.0, -5, 120, 0.0, -1, 307);

// Message: STMM_306 [0x132]
StateSignal STMM_counterMsg306(4, false, 1, 0.0, 0, 15, 0.0, -1, 306);
StateSignal STMM_segmentTemp206(16, true, 10, 0.0, -5, 120, 0.0, -1, 306);
StateSignal STMM_segmentTemp207(16, true, 10, 0.0, -5, 120, 0.0, -1, 306);
StateSignal STMM_segmentTemp208(16, true, 10, 0.0, -5, 120, 0.0, -1, 306);

// Message: STMM_305 [0x131]
StateSignal STMM_counterMsg305(4, false, 1, 0.0, 0, 15, 0.0, -1, 305);
StateSignal STMM_segmentTemp203(16, true, 10, 0.0, -5, 120, 0.0, -1, 305);
StateSignal STMM_segmentTemp204(16, true, 10, 0.0, -5, 120, 0.0, -1, 305);
StateSignal STMM_segmentTemp205(16, true, 10, 0.0, -5, 120, 0.0, -1, 305);

// Message: STMM_304 [0x130]
StateSignal STMM_counterMsg304(4, false, 1, 0.0, 0, 15, 0.0, -1, 304);
StateSignal STMM_segmentTemp200(16, true, 10, 0.0, -5, 120, 0.0, -1, 304);
StateSignal STMM_segmentTemp201(16, true, 10, 0.0, -5, 120, 0.0, -1, 304);
StateSignal STMM_segmentTemp202(16, true, 10, 0.0, -5, 120, 0.0, -1, 304);

// Message: STMM_303 [0x12f]
StateSignal STMM_counterMsg303(4, false, 1, 0.0, 0, 15, 0.0, -1, 303);
StateSignal STMM_segmentTemp109(16, true, 10, 0.0, -5, 120, 0.0, -1, 303);
StateSignal STMM_segmentTemp110(16, true, 10, 0.0, -5, 120, 0.0, -1, 303);
StateSignal STMM_segmentTemp111(16, true, 10, 0.0, -5, 120, 0.0, -1, 303);

// Message: STMM_302 [0x12e]
StateSignal STMM_counterMsg302(4, false, 1, 0.0, 0, 15, 0.0, -1, 302);
StateSignal STMM_segmentTemp106(16, true, 10, 0.0, -5, 120, 0.0, -1, 302);
StateSignal STMM_segmentTemp107(16, true, 10, 0.0, -5, 120, 0.0, -1, 302);
StateSignal STMM_segmentTemp108(16, true, 10, 0.0, -5, 120, 0.0, -1, 302);

// Message: STMM_301 [0x12d]
StateSignal STMM_counterMsg301(4, false, 1, 0.0, 0, 15, 0.0, -1, 301);
StateSignal STMM_segmentTemp103(16, true, 10, 0.0, -5, 120, 0.0, -1, 301);
StateSignal STMM_segmentTemp104(16, true, 10, 0.0, -5, 120, 0.0, -1, 301);
StateSignal STMM_segmentTemp105(16, true, 10, 0.0, -5, 120, 0.0, -1, 301);

// Message: STMM_300 [0x12c]
StateSignal STMM_counterMsg300(4, false, 1, 0.0, 0, 15, 0.0, -1, 300);
StateSignal STMM_segmentTemp100(16, true, 10, 0.0, -5, 120, 0.0, -1, 300);
StateSignal STMM_segmentTemp101(16, true, 10, 0.0, -5, 120, 0.0, -1, 300);
StateSignal STMM_segmentTemp102(16, true, 10, 0.0, -5, 120, 0.0, -1, 300);

//Map that serves as a reference for all STMM signals; key: signal ID, value: Reference to the signal
map<string,&StateSignal> stmm_signals = 
								   {{"STMM_segmentTemp100",&STMM_segmentTemp100},
									{"STMM_segmentTemp101",&STMM_segmentTemp101},
									{"STMM_segmentTemp102",&STMM_segmentTemp102},
									{"STMM_segmentTemp103",&STMM_segmentTemp103},
									{"STMM_segmentTemp104",&STMM_segmentTemp104},
									{"STMM_segmentTemp105",&STMM_segmentTemp105},
									{"STMM_segmentTemp106",&STMM_segmentTemp106},
									{"STMM_segmentTemp107",&STMM_segmentTemp107},
									{"STMM_segmentTemp108",&STMM_segmentTemp108},
									{"STMM_segmentTemp109",&STMM_segmentTemp109},
									{"STMM_segmentTemp110",&STMM_segmentTemp110},
									{"STMM_segmentTemp111",&STMM_segmentTemp111},
									{"STMM_segmentTemp200",&STMM_segmentTemp200},
									{"STMM_segmentTemp201",&STMM_segmentTemp201},
									{"STMM_segmentTemp202",&STMM_segmentTemp202},
									{"STMM_segmentTemp203",&STMM_segmentTemp203},
									{"STMM_segmentTemp204",&STMM_segmentTemp204},
									{"STMM_segmentTemp205",&STMM_segmentTemp205},
									{"STMM_segmentTemp206",&STMM_segmentTemp206},
									{"STMM_segmentTemp207",&STMM_segmentTemp207},
									{"STMM_segmentTemp208",&STMM_segmentTemp208},
									{"STMM_segmentTemp209",&STMM_segmentTemp209},
									{"STMM_segmentTemp210",&STMM_segmentTemp210},
									{"STMM_segmentTemp211",&STMM_segmentTemp211},
									{"STMM_segmentTemp300",&STMM_segmentTemp300},
									{"STMM_segmentTemp301",&STMM_segmentTemp301},
									{"STMM_segmentTemp302",&STMM_segmentTemp302},
									{"STMM_segmentTemp303",&STMM_segmentTemp303},
									{"STMM_segmentTemp304",&STMM_segmentTemp304},
									{"STMM_segmentTemp305",&STMM_segmentTemp305},
									{"STMM_segmentTemp306",&STMM_segmentTemp306},
									{"STMM_segmentTemp307",&STMM_segmentTemp307},
									{"STMM_segmentTemp308",&STMM_segmentTemp308},
									{"STMM_segmentTemp309",&STMM_segmentTemp309},
									{"STMM_segmentTemp310",&STMM_segmentTemp310},
									{"STMM_segmentTemp311",&STMM_segmentTemp311},
									{"STMM_segmentTemp400",&STMM_segmentTemp400},
									{"STMM_segmentTemp401",&STMM_segmentTemp401},
									{"STMM_segmentTemp402",&STMM_segmentTemp402},
									{"STMM_segmentTemp403",&STMM_segmentTemp403},
									{"STMM_segmentTemp404",&STMM_segmentTemp404},
									{"STMM_segmentTemp405",&STMM_segmentTemp405},
									{"STMM_segmentTemp406",&STMM_segmentTemp406},
									{"STMM_segmentTemp407",&STMM_segmentTemp407},
									{"STMM_segmentTemp408",&STMM_segmentTemp408},
									{"STMM_segmentTemp409",&STMM_segmentTemp409},
									{"STMM_segmentTemp410",&STMM_segmentTemp410},
									{"STMM_segmentTemp411",&STMM_segmentTemp411},
									{"STMM_segmentTemp500",&STMM_segmentTemp500},
									{"STMM_segmentTemp501",&STMM_segmentTemp501},
									{"STMM_segmentTemp502",&STMM_segmentTemp502},
									{"STMM_segmentTemp503",&STMM_segmentTemp503},
									{"STMM_segmentTemp504",&STMM_segmentTemp504},
									{"STMM_segmentTemp505",&STMM_segmentTemp505},
									{"STMM_segmentTemp506",&STMM_segmentTemp506},
									{"STMM_segmentTemp507",&STMM_segmentTemp507},
									{"STMM_segmentTemp508",&STMM_segmentTemp508},
									{"STMM_segmentTemp509",&STMM_segmentTemp509},
									{"STMM_segmentTemp510",&STMM_segmentTemp510},
									{"STMM_segmentTemp511",&STMM_segmentTemp511},
									{"STMM_segmentTemp600",&STMM_segmentTemp600},
									{"STMM_segmentTemp601",&STMM_segmentTemp601},
									{"STMM_segmentTemp602",&STMM_segmentTemp602},
									{"STMM_segmentTemp603",&STMM_segmentTemp603},
									{"STMM_segmentTemp604",&STMM_segmentTemp604},
									{"STMM_segmentTemp605",&STMM_segmentTemp605},
									{"STMM_segmentTemp606",&STMM_segmentTemp606},
									{"STMM_segmentTemp607",&STMM_segmentTemp607},
									{"STMM_segmentTemp608",&STMM_segmentTemp608},
									{"STMM_segmentTemp609",&STMM_segmentTemp609},
									{"STMM_segmentTemp610",&STMM_segmentTemp610},
									{"STMM_segmentTemp611",&STMM_segmentTemp611},
									{"STMM_segmentTemp700",&STMM_segmentTemp700},
									{"STMM_segmentTemp701",&STMM_segmentTemp701},
									{"STMM_segmentTemp702",&STMM_segmentTemp702},
									{"STMM_segmentTemp703",&STMM_segmentTemp703},
									{"STMM_segmentTemp704",&STMM_segmentTemp704},
									{"STMM_segmentTemp705",&STMM_segmentTemp705},
									{"STMM_segmentTemp706",&STMM_segmentTemp706},
									{"STMM_segmentTemp707",&STMM_segmentTemp707},
									{"STMM_segmentTemp708",&STMM_segmentTemp708},
									{"STMM_segmentTemp709",&STMM_segmentTemp709},
									{"STMM_segmentTemp710",&STMM_segmentTemp710},
									{"STMM_segmentTemp711",&STMM_segmentTemp711},
									{"STMM_segmentTemp800",&STMM_segmentTemp800},
									{"STMM_segmentTemp801",&STMM_segmentTemp801},
									{"STMM_segmentTemp802",&STMM_segmentTemp802},
									{"STMM_segmentTemp803",&STMM_segmentTemp803},
									{"STMM_segmentTemp804",&STMM_segmentTemp804},
									{"STMM_segmentTemp805",&STMM_segmentTemp805},
									{"STMM_segmentTemp806",&STMM_segmentTemp806},
									{"STMM_segmentTemp807",&STMM_segmentTemp807},
									{"STMM_segmentTemp808",&STMM_segmentTemp808},
									{"STMM_segmentTemp809",&STMM_segmentTemp809},
									{"STMM_segmentTemp810",&STMM_segmentTemp810},
									{"STMM_segmentTemp811",&STMM_segmentTemp811}};


// Message: DD_250 [0xfa]
StateSignal DD_counterMsg250(4, false, 1, 0.0, 0, 15, 0.0, -1, 250);
StateSignal DD_boardTemp(16, true, 10, 0.0, 0, 150, 0.0, -1, 250);
StateSignal DD_teensyTemp(16, true, 10, 0.0, 0, 150, 0.0, -1, 250);

// Message: PDM_414 [0x19e]
StateSignal PDM_counterMsg414(4, false, 1, 0.0, 0, 15, 0.0, -1, 414);
StateSignal PDM_carMiles(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 414);
StateSignal PDM_runtimeHours(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 414);
StateSignal PDM_runtimeMinutes(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 414);

// Message: PDM_413 [0x19d]
StateSignal PDM_counterMsg413(4, false, 1, 0.0, 0, 15, 0.0, -1, 413);
StateSignal PDM_keepAliveVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 413);
StateSignal PDM_keepAliveVoltMax(16, true, 1000, 0.0, -32, 32, 0.0, -1, 413);
StateSignal PDM_keepAliveVoltMin(16, true, 1000, 0.0, -32, 32, 0.0, -1, 413);

// Message: PDM_412 [0x19c]
StateSignal PDM_counterMsg412(4, false, 1, 0.0, 0, 15, 0.0, -1, 412);
StateSignal PDM_dataVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 412);
StateSignal PDM_dataVoltMax(16, true, 1000, 0.0, -32, 32, 0.0, -1, 412);
StateSignal PDM_dataVoltMin(16, true, 1000, 0.0, -32, 32, 0.0, -1, 412);

// Message: PDM_411 [0x19b]
StateSignal PDM_counterMsg411(4, false, 1, 0.0, 0, 15, 0.0, -1, 411);
StateSignal PDM_glvVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 411);
StateSignal PDM_glvVoltMax(16, true, 1000, 0.0, -32, 32, 0.0, -1, 411);
StateSignal PDM_glvVoltMin(16, true, 1000, 0.0, -32, 32, 0.0, -1, 411);

// Message: PDM_410 [0x19a]
StateSignal PDM_uptime(32, false, 1, 0.0, 0, 4294967295, 0.0, -1, 410);

// Message: PDM_409 [0x199]
StateSignal PDM_counterMsg409(4, false, 1, 0.0, 0, 15, 0.0, -1, 409);
StateSignal PDM_fanLeftDutyCycle(8, false, 1, 0.0, 0, 100, 0.0, -1, 409);
StateSignal PDM_fanRightDutyCycle(8, false, 1, 0.0, 0, 100, 0.0, -1, 409);
StateSignal PDM_wpDutyCycle(8, false, 1, 0.0, 0, 100, 0.0, -1, 409);
StateSignal PDM_teensyTemp(16, true, 10, 0.0, -5, 100, 0.0, -1, 409);

// Message: PDM_408 [0x198]
StateSignal PDM_counterMsg408(4, false, 1, 0.0, 0, 15, 0.0, -1, 408);
StateSignal PDM_wpVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 408);
StateSignal PDM_wpVoltMax(16, true, 1000, 0.0, -32, 32, 0.0, -1, 408);
StateSignal PDM_wpVoltMin(16, true, 1000, 0.0, -32, 32, 0.0, -1, 408);

// Message: PDM_407 [0x197]
StateSignal PDM_counterMsg407(4, false, 1, 0.0, 0, 15, 0.0, -1, 407);
StateSignal PDM_wpCurrentAvg(16, true, 100, 0.0, -327, 327, 0.0, -1, 407);
StateSignal PDM_wpCurrentMax(16, true, 100, 0.0, -327, 327, 0.0, -1, 407);
StateSignal PDM_wpCurrentMin(16, true, 100, 0.0, -327, 327, 0.0, -1, 407);

// Message: PDM_406 [0x196]
StateSignal PDM_counterMsg406(4, false, 1, 0.0, 0, 15, 0.0, -1, 406);
StateSignal PDM_fanLeftVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 406);
StateSignal PDM_fanLeftVoltMax(16, true, 1000, 0.0, -32, 32, 0.0, -1, 406);
StateSignal PDM_fanLeftVoltMin(16, true, 1000, 0.0, -32, 32, 0.0, -1, 406);

// Message: PDM_405 [0x195]
StateSignal PDM_counterMsg405(4, false, 1, 0.0, 0, 15, 0.0, -1, 405);
StateSignal PDM_fanLeftCurrentAvg(16, true, 100, 0.0, -327, 327, 0.0, -1, 405);
StateSignal PDM_fanLeftCurrentMax(16, true, 100, 0.0, -327, 327, 0.0, -1, 405);
StateSignal PDM_fanLeftCurrentMin(16, true, 100, 0.0, -327, 327, 0.0, -1, 405);

// Message: PDM_404 [0x194]
StateSignal PDM_counterMsg404(4, false, 1, 0.0, 0, 15, 0.0, -1, 404);
StateSignal PDM_fanRightVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 404);
StateSignal PDM_fanRightVoltMax(16, true, 1000, 0.0, -32, 32, 0.0, -1, 404);
StateSignal PDM_fanRightVoltMin(16, true, 1000, 0.0, -32, 32, 0.0, -1, 404);

// Message: PDM_403 [0x193]
StateSignal PDM_counterMsg403(4, false, 1, 0.0, 0, 15, 0.0, -1, 403);
StateSignal PDM_fanRightCurrentAvg(16, true, 100, 0.0, -327, 327, 0.0, -1, 403);
StateSignal PDM_fanRightCurrentMax(16, true, 100, 0.0, -327, 327, 0.0, -1, 403);
StateSignal PDM_fanRightCurrentMin(16, true, 100, 0.0, -327, 327, 0.0, -1, 403);

// Message: PDM_402 [0x192]
StateSignal PDM_counterMsg402(4, false, 1, 0.0, 0, 15, 0.0, -1, 402);
StateSignal PDM_pdmVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 402);
StateSignal PDM_pdmVoltMax(16, true, 1000, 0.0, -32, 32, 0.0, -1, 402);
StateSignal PDM_pdmVoltMin(16, true, 1000, 0.0, -32, 32, 0.0, -1, 402);

// Message: PDM_401 [0x191]
StateSignal PDM_counterMsg401(4, false, 1, 0.0, 0, 15, 0.0, -1, 401);
StateSignal PDM_pdmCurrentAvg(16, true, 100, 0.0, -327, 327, 0.0, -1, 401);
StateSignal PDM_pdmCurrentMax(16, true, 100, 0.0, -327, 327, 0.0, -1, 401);
StateSignal PDM_pdmCurrentMin(16, true, 100, 0.0, -327, 327, 0.0, -1, 401);

// Message: PDM_400 [0x190]
StateSignal PDM_counterMsg400(4, false, 1, 0.0, 0, 15, 0.0, -1, 400);
StateSignal PDM_boardTemp(16, true, 10, 0.0, -5, 100, 0.0, -1, 400);
StateSignal PDM_brakelightVoltAvg(16, true, 1000, 0.0, -32, 32, 0.0, -1, 400);
StateSignal PDM_vehicleState(8, false, 1, 0.0, 0, 255, 0.0, -1, 400);
StateSignal PDM_coolingOverrideActive(1, false, 1, 0.0, 0, 1, 0.0, -1, 400);

// Message: BMS_215 [0xd7]
StateSignal BMS_rollingCounter215(8, false, 1, 0.0, 0, 255, 0.0, -1, 215);
StateSignal BMS_relayState(16, false, 1, 0.0, 0, 65535, 0.0, -1, 215);
StateSignal BMS_failsafeStatus(16, false, 1, 0.0, 0, 65535, 0.0, -1, 215);
StateSignal BMS_dtcStatus2(16, false, 1, 0.0, 0, 65535, 0.0, -1, 215);

// Message: BMS_214 [0xd6]
StateSignal BMS_rollingCounter214(8, false, 1, 0.0, 0, 255, 0.0, -1, 214);
StateSignal BMS_maxCellNumber(8, false, 1, 0.0, 0, 255, 0.0, -1, 214);
StateSignal BMS_totalPackCycles(16, false, 1, 0.0, 0, 65535, 0.0, -1, 214);
StateSignal BMS_dtcStatus1(16, false, 1, 0.0, 0, 65535, 0.0, -1, 214);
StateSignal BMS_populatedCells(8, false, 1, 0.0, 0, 255, 0.0, -1, 214);

// Message: BMS_213 [0xd5]
StateSignal BMS_rollingCounter213(8, false, 1, 0.0, 0, 255, 0.0, -1, 213);
StateSignal BMS_adaptiveTotalCapacity(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 213);
StateSignal BMS_adaptiveAmphours(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 213);
StateSignal BMS_currLimStatus(16, false, 1, 0.0, 0, 65535, 0.0, -1, 213);

// Message: BMS_212 [0xd4]
StateSignal BMS_rollingCounter212(8, false, 1, 0.0, 0, 255, 0.0, -1, 212);
StateSignal BMS_fanSpeed(8, false, 1, 0.0, 0, 6, 0.0, -1, 212);
StateSignal BMS_requestedFanSpeed(8, false, 1, 0.0, 0, 6, 0.0, -1, 212);
StateSignal BMS_adaptiveSOC(8, true, 2, 0.0, 0, 100, 0.0, -1, 212);
StateSignal BMS_fanVolt(16, true, 100, 0.0, -327, 327, 0.0, -1, 212);

// Message: BMS_211 [0xd3]
StateSignal BMS_rollingCounter211(8, false, 1, 0.0, 0, 255, 0.0, -1, 211);
StateSignal BMS_maxPackDCL(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 211);
StateSignal BMS_maxPackCCL(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 211);
StateSignal BMS_avgPackCurr(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 211);

// Message: BMS_210 [0xd2]
StateSignal BMS_rollingCounter210(8, false, 1, 0.0, 0, 255, 0.0, -1, 210);
StateSignal BMS_packDischargeCurrLim(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 210);
StateSignal BMS_packDischargeCurrLimkW(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 210);
StateSignal BMS_packOpenVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 210);

// Message: BMS_209 [0xd1]
StateSignal BMS_rollingCounter209(8, false, 1, 0.0, 0, 255, 0.0, -1, 209);
StateSignal BMS_packChargeCurrLim(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 209);
StateSignal BMS_packChargeCurrLimkW(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 209);
StateSignal BMS_totalPackADC(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 209);

// Message: BMS_208 [0xd0]
StateSignal BMS_rollingCounter208(8, false, 1, 0.0, 0, 255, 0.0, -1, 208);
StateSignal BMS_lowCellVoltID(8, false, 1, 0.0, 1, 180, 0.0, -1, 208);
StateSignal BMS_highCellVoltID(8, false, 1, 0.0, 1, 180, 0.0, -1, 208);
StateSignal BMS_lowCellOpenVoltID(8, false, 1, 0.0, 1, 180, 0.0, -1, 208);
StateSignal BMS_highCellOpenVoltID(8, false, 1, 0.0, 1, 180, 0.0, -1, 208);
StateSignal BMS_lowCellResistanceID(8, false, 1, 0.0, 1, 180, 0.0, -1, 208);
StateSignal BMS_highCellResistanceID(8, false, 1, 0.0, 1, 180, 0.0, -1, 208);

// Message: BMS_207 [0xcf]
StateSignal BMS_rollingCounter207(8, false, 1, 0.0, 0, 255, 0.0, -1, 207);
StateSignal BMS_maxCellVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 207);
StateSignal BMS_minCellVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 207);
StateSignal BMS_pwrInputVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 207);

// Message: BMS_206 [0xce]
StateSignal BMS_rollingCounter206(8, false, 1, 0.0, 0, 255, 0.0, -1, 206);
StateSignal BMS_lowCellInternalResistance(16, true, 100, 0.0, -327, 327, 0.0, -1, 206);
StateSignal BMS_highCellInternalResistance(16, true, 100, 0.0, -327, 327, 0.0, -1, 206);
StateSignal BMS_avgCellInternalResistance(16, true, 100, 0.0, -327, 327, 0.0, -1, 206);

// Message: BMS_205 [0xcd]
StateSignal BMS_rollingCounter205(8, false, 1, 0.0, 0, 255, 0.0, -1, 205);
StateSignal BMS_lowCellOpenVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 205);
StateSignal BMS_highCellOpenVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 205);
StateSignal BMS_avgCellOpenVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 205);

// Message: BMS_204 [0xcc]
StateSignal BMS_rollingCounter204(8, false, 1, 0.0, 0, 255, 0.0, -1, 204);
StateSignal BMS_lowCellVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 204);
StateSignal BMS_highCellVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 204);
StateSignal BMS_avgCellVolt(16, true, 10000, 0.0, -3, 3, 0.0, -1, 204);

// Message: BMS_203 [0xcb]
StateSignal BMS_rollingCounter203(8, false, 1, 0.0, 0, 255, 0.0, -1, 203);
StateSignal BMS_highestTemp(8, true, 1, 0.0, -5, 100, 0.0, -1, 203);
StateSignal BMS_highestThermistorID(8, false, 1, 0.0, 1, 180, 0.0, -1, 203);
StateSignal BMS_lowestTemp(8, true, 1, 0.0, -5, 100, 0.0, -1, 203);
StateSignal BMS_lowestThermistorID(8, false, 1, 0.0, 1, 180, 0.0, -1, 203);
StateSignal BMS_avgTemp(8, true, 1, 0.0, -5, 100, 0.0, -1, 203);
StateSignal BMS_internalTemp(8, true, 1, 0.0, -5, 100, 0.0, -1, 203);

// Message: BMS_202 [0xca]
StateSignal BMS_rollingCounter202(8, false, 1, 0.0, 0, 255, 0.0, -1, 202);
StateSignal BMS_packDOD(8, true, 2, 0.0, 0, 100, 0.0, -1, 202);
StateSignal BMS_packSOH(8, true, 1, 0.0, 0, 100, 0.0, -1, 202);
StateSignal BMS_packAmphours(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 202);
StateSignal BMS_packResistance(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 202);

// Message: BMS_201 [0xc9]
StateSignal BMS_rollingCounter201(8, false, 1, 0.0, 0, 255, 0.0, -1, 201);
StateSignal BMS_packSummedVolt(16, true, 100, 0.0, -327, 327, 0.0, -1, 201);
StateSignal BMS_maxPackVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 201);
StateSignal BMS_minPackVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 201);

// Message: BMS_200 [0xc8]
StateSignal BMS_rollingCounter200(8, false, 1, 0.0, 0, 255, 0.0, -1, 200);
StateSignal BMS_packCurr(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 200);
StateSignal BMS_packVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 200);
StateSignal BMS_packSOC(8, true, 2, 0.0, 0, 100, 0.0, -1, 200);

// Message: PM_194 [0xc2]
StateSignal PM_parameterAddressResponse(16, false, 1, 0.0, 0, 65535, 0.0, -1, 194);
StateSignal PM_writeSuccess(1, false, 1, 0.0, 0, 1, 0.0, -1, 194);
StateSignal PM_dataResponse(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 194);

// Message: PM_193 [0xc1]
StateSignal PM_parameterAddressCommand(16, false, 1, 0.0, 0, 65535, 0.0, -1, 193);
StateSignal PM_readWriteCommand(1, false, 1, 0.0, 0, 1, 0.0, -1, 193);
StateSignal PM_dataCommand(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 193);

// Message: PM_176 [0xb0]
StateSignal PM_fastTorqueCommand(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 176);
StateSignal PM_fastTorqueFeedback(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 176);
StateSignal PM_fastMotorSpeed(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 176);
StateSignal PM_fastDCBusVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 176);

// Message: PM_175 [0xaf]
StateSignal PM_bufferRecord(8, false, 1, 0.0, 0, 255, 0.0, -1, 175);
StateSignal PM_bufferSegment(8, false, 1, 0.0, 0, 5, 0.0, -1, 175);
StateSignal PM_diagData1(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 175);
StateSignal PM_diagData2(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 175);
StateSignal PM_diagData3(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 175);

// Message: PM_174 [0xae]
StateSignal PM_projectCodeEEPVer(16, false, 1, 0.0, 0, 65535, 0.0, -1, 174);
StateSignal PM_swVersion(16, false, 1, 0.0, 0, 65535, 0.0, -1, 174);
StateSignal PM_datecodeMMDD(16, false, 1, 0.0, 0, 65535, 0.0, -1, 174);
StateSignal PM_datecodeYYYY(16, false, 1, 0.0, 0, 65535, 0.0, -1, 174);

// Message: PM_173 [0xad]
StateSignal PM_modulationIndex(16, true, 10000, 0.0, -3, 3, 0.0, -1, 173);
StateSignal PM_fluxWeakeningOutput(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 173);
StateSignal PM_idCommand(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 173);
StateSignal PM_iqCommand(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 173);

// Message: PM_172 [0xac]
StateSignal PM_commandedTorque(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 172);
StateSignal PM_torqueFeedback(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 172);
StateSignal PM_powerOnTimer(32, false, 333, 0.0, 0, 12884800, 0.0, -1, 172);

// Message: PM_171 [0xab]
StateSignal PM_postFaultLo(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 171);
StateSignal PM_postFaultHi(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 171);
StateSignal PM_runFaultLo(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 171);
StateSignal PM_runFaultHi(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 171);

// Message: PM_169 [0xa9]
StateSignal PM_refVolt15(16, true, 100, 0.0, -327, 327, 0.0, -1, 169);
StateSignal PM_refVolt25(16, true, 100, 0.0, -327, 327, 0.0, -1, 169);
StateSignal PM_refVolt50(16, true, 100, 0.0, -327, 327, 0.0, -1, 169);
StateSignal PM_refVolt120(16, true, 100, 0.0, -327, 327, 0.0, -1, 169);

// Message: PM_168 [0xa8]
StateSignal PM_fluxCommand(16, true, 1000, 0.0, -32, 32, 0.0, -1, 168);
StateSignal PM_fluxFeedback(16, true, 1000, 0.0, -32, 32, 0.0, -1, 168);
StateSignal PM_id(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 168);
StateSignal PM_iq(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 168);

// Message: PM_167 [0xa7]
StateSignal PM_dcBusVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 167);
StateSignal PM_outputVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 167);
StateSignal PM_vabVdVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 167);
StateSignal PM_vbcVqVolt(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 167);

// Message: PM_166 [0xa6]
StateSignal PM_phaseACurrent(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 166);
StateSignal PM_phaseBCurrent(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 166);
StateSignal PM_phaseCCurrent(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 166);
StateSignal PM_dcBusCurrent(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 166);

// Message: PM_165 [0xa5]
StateSignal PM_electricalMotorAngle(16, false, 10, 0.0, 0, 6553, 0.0, -1, 165);
StateSignal PM_motorSpeed(16, true, 1, 0.0, -32768, 32767, 0.0, -1, 165);
StateSignal PM_electricalOutputFrequency(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 165);
StateSignal PM_deltaResolverFiltered(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 165);

// Message: PM_164 [0xa4]
StateSignal PM_digitalInputStatus1(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);
StateSignal PM_digitalInputStatus2(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);
StateSignal PM_digitalInputStatus3(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);
StateSignal PM_digitalInputStatus4(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);
StateSignal PM_digitalInputStatus5(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);
StateSignal PM_digitalInputStatus6(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);
StateSignal PM_digitalInputStatus7(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);
StateSignal PM_digitalInputStatus8(1, false, 1, 0.0, 0, 1, 0.0, -1, 164);

// Message: PM_163 [0xa3]
StateSignal PM_analogInputVolt1(10, false, 100, 0.0, 0, 10, 0.0, -1, 163);
StateSignal PM_analogInputVolt2(10, false, 100, 0.0, 0, 10, 0.0, -1, 163);
StateSignal PM_analogInputVolt3(10, false, 100, 0.0, 0, 10, 0.0, -1, 163);
StateSignal PM_analogInputVolt4(10, false, 100, 0.0, 0, 10, 0.0, -1, 163);
StateSignal PM_analogInputVolt5(10, false, 100, 0.0, 0, 10, 0.0, -1, 163);
StateSignal PM_analogInputVolt6(10, false, 100, 0.0, 0, 10, 0.0, -1, 163);

// Message: PM_162 [0xa2]
StateSignal PM_rtd4Temp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 162);
StateSignal PM_rtd5Temp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 162);
StateSignal PM_motorTemp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 162);
StateSignal PM_torqueShudder(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 162);

// Message: PM_161 [0xa1]
StateSignal PM_controlBoardTemp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 161);
StateSignal PM_rtd1Temp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 161);
StateSignal PM_rtd2Temp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 161);
StateSignal PM_rtd3Temp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 161);

// Message: PM_160 [0xa0]
StateSignal PM_moduleATemp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 160);
StateSignal PM_moduleBTemp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 160);
StateSignal PM_moduleCTemp(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 160);
StateSignal PM_gateDriverBoard(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 160);

// Message: VCU_115 [0x73]
StateSignal VCU_counterMsg115(4, false, 1, 0.0, 0, 15, 0.0, -1, 115);
StateSignal VCU_wheelLockupFL(1, false, 1, 0.0, 0, 1, 0.0, -1, 115);
StateSignal VCU_wheelLockupFR(1, false, 1, 0.0, 0, 1, 0.0, -1, 115);
StateSignal VCU_wheelLockupRL(1, false, 1, 0.0, 0, 1, 0.0, -1, 115);
StateSignal VCU_wheelLockupRR(1, false, 1, 0.0, 0, 1, 0.0, -1, 115);

// Message: VCU_114 [0x72]
StateSignal VCU_counterMsg114(4, false, 1, 0.0, 0, 15, 0.0, -1, 114);
StateSignal VCU_tcTorqueReduction(16, true, 10, 0.0, 0, 75, 0.0, -1, 114);
StateSignal VCU_tcSlipAimError(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 114);
StateSignal VCU_tcSlipAimValue(16, true, 10, 0.0, -3276, 3276, 0.0, -1, 114);

// Message: VCU_113 [0x71]
StateSignal VCU_counterMsg113(4, false, 1, 0.0, 0, 15, 0.0, -1, 113);
StateSignal VCU_brakePressureF(16, true, 10, 0.0, 0, 2000, 0.0, -1, 113);
StateSignal VCU_brakePressureR(16, true, 10, 0.0, 0, 2000, 0.0, -1, 113);
StateSignal VCU_brakeBias(16, true, 10, 0.0, 0, 100, 0.0, -1, 113);

// Message: VCU_112 [0x70]
StateSignal VCU_counterMsg112(4, false, 1, 0.0, 0, 15, 0.0, -1, 112);
StateSignal VCU_driveSpeed(16, true, 10, 0.0, 0, 120, 0.0, -1, 112);
StateSignal VCU_driveSpeedLeft(16, true, 10, 0.0, 0, 120, 0.0, -1, 112);
StateSignal VCU_driveSpeedRight(16, true, 10, 0.0, 0, 120, 0.0, -1, 112);

// Message: VCU_111 [0x6f]
StateSignal VCU_counterMsg111(4, false, 1, 0.0, 0, 15, 0.0, -1, 111);
StateSignal VCU_groundSpeed(16, true, 10, 0.0, 0, 120, 0.0, -1, 111);
StateSignal VCU_groundSpeedLeft(16, true, 10, 0.0, 0, 120, 0.0, -1, 111);
StateSignal VCU_groundSpeedRight(16, true, 10, 0.0, 0, 120, 0.0, -1, 111);

// Message: VCU_110 [0x6e]
StateSignal VCU_counterMsg110(4, false, 1, 0.0, 0, 15, 0.0, -1, 110);
StateSignal VCU_suspensionTravelFL(16, true, 1000, 0.0, -4, 4, 0.0, -1, 110);
StateSignal VCU_suspensionTravelFR(16, true, 1000, 0.0, -4, 4, 0.0, -1, 110);

// Message: VCU_109 [0x6d]
StateSignal VCU_counterMsg109(4, false, 1, 0.0, 0, 15, 0.0, -1, 109);
StateSignal VCU_flowRateMotorIn(16, true, 10, 0.0, 0, 20, 0.0, -1, 109);
StateSignal VCU_flowRateInverterIn(16, true, 10, 0.0, 0, 20, 0.0, -1, 109);
StateSignal VCU_flowRateInverterOut(16, true, 10, 0.0, 0, 20, 0.0, -1, 109);

// Message: VCU_108 [0x6c]
StateSignal VCU_counterMsg108(4, false, 1, 0.0, 0, 15, 0.0, -1, 108);
StateSignal VCU_tireTempRRI(16, true, 10, 0.0, 0, 100, 0.0, -1, 108);
StateSignal VCU_tireTempRRM(16, true, 10, 0.0, 0, 100, 0.0, -1, 108);
StateSignal VCU_tireTempRRO(16, true, 10, 0.0, 0, 100, 0.0, -1, 108);

// Message: VCU_107 [0x6b]
StateSignal VCU_counterMsg107(4, false, 1, 0.0, 0, 15, 0.0, -1, 107);
StateSignal VCU_tireTempRLI(16, true, 10, 0.0, 0, 100, 0.0, -1, 107);
StateSignal VCU_tireTempRLM(16, true, 10, 0.0, 0, 100, 0.0, -1, 107);
StateSignal VCU_tireTempRLO(16, true, 10, 0.0, 0, 100, 0.0, -1, 107);

// Message: VCU_106 [0x6a]
StateSignal VCU_counterMsg106(4, false, 1, 0.0, 0, 15, 0.0, -1, 106);
StateSignal VCU_coolantTempMotorIn(16, true, 10, 0.0, 0, 80, 0.0, -1, 106);
StateSignal VCU_coolantTempInverterIn(16, true, 10, 0.0, 0, 80, 0.0, -1, 106);
StateSignal VCU_coolantTempInverterOut(16, true, 10, 0.0, 0, 80, 0.0, -1, 106);

// Message: VCU_105 [0x69]
StateSignal VCU_counterMsg105(4, false, 1, 0.0, 0, 15, 0.0, -1, 105);
StateSignal VCU_rotorTempRL(16, true, 10, 0.0, 0, 1000, 0.0, -1, 105);
StateSignal VCU_rotorTempRR(16, true, 10, 0.0, 0, 1000, 0.0, -1, 105);

// Message: VCU_104 [0x68]
StateSignal VCU_counterMsg104(4, false, 1, 0.0, 0, 15, 0.0, -1, 104);
StateSignal VCU_suspensionTravelRL(16, true, 1000, 0.0, -4, 4, 0.0, -1, 104);
StateSignal VCU_suspensionTravelRR(16, true, 1000, 0.0, -4, 4, 0.0, -1, 104);

// Message: VCU_103 [0x67]
StateSignal VCU_counterMsg103(4, false, 1, 0.0, 0, 15, 0.0, -1, 103);
StateSignal VCU_tireTempFRI(16, true, 10, 0.0, 0, 100, 0.0, -1, 103);
StateSignal VCU_tireTempFRM(16, true, 10, 0.0, 0, 100, 0.0, -1, 103);
StateSignal VCU_tireTempFRO(16, true, 10, 0.0, 0, 100, 0.0, -1, 103);

// Message: VCU_102 [0x66]
StateSignal VCU_counterMsg102(4, false, 1, 0.0, 0, 15, 0.0, -1, 102);
StateSignal VCU_tireTempFLI(16, true, 10, 0.0, 0, 100, 0.0, -1, 102);
StateSignal VCU_tireTempFLM(16, true, 10, 0.0, 0, 100, 0.0, -1, 102);
StateSignal VCU_tireTempFLO(16, true, 10, 0.0, 0, 100, 0.0, -1, 102);

// Message: VCU_101 [0x65]
StateSignal VCU_counterMsg101(4, false, 1, 0.0, 0, 15, 0.0, -1, 101);
StateSignal VCU_rotorTempFL(16, true, 10, 0.0, 0, 1000, 0.0, -1, 101);
StateSignal VCU_rotorTempFR(16, true, 10, 0.0, 0, 1000, 0.0, -1, 101);

// Message: VCU_100 [0x64]
StateSignal VCU_counterMsg100(4, false, 1, 0.0, 0, 15, 0.0, -1, 100);
StateSignal VCU_throttlePosition(16, true, 10, 0.0, 0, 100, 0.0, -1, 100);
StateSignal VCU_brakePosition(16, true, 10, 0.0, 0, 100, 0.0, -1, 100);
StateSignal VCU_tcSet(8, false, 1, 0.0, 0, 11, 0.0, -1, 100);




/************************************************************************************
    
    Incoming CAN frame decoding functions

************************************************************************************/


/*
 * Decode a CAN frame for the message STMM_1839F380
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_1839F380(const CAN_message_t &imsg) {

	STMM_thermModNum.set_can_value((imsg.buf[0]));
	STMM_lowestThermVal.set_can_value((imsg.buf[1]));
	STMM_highestThermVal.set_can_value((imsg.buf[2]));
	STMM_avgThermVal.set_can_value((imsg.buf[3]));
	STMM_numThermsEnabled.set_can_value((imsg.buf[4]));
	STMM_highestThermID.set_can_value((imsg.buf[5]));
	STMM_lowestThermID.set_can_value((imsg.buf[6]));
	STMM_checksum.set_can_value((imsg.buf[7]));

}

/*
 * Decode a CAN frame for the message STMM_331
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_331(const CAN_message_t &imsg) {

	STMM_counterMsg331.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp809.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp810.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp811.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_330
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_330(const CAN_message_t &imsg) {

	STMM_counterMsg330.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp806.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp807.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp808.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_329
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_329(const CAN_message_t &imsg) {

	STMM_counterMsg329.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp803.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp804.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp805.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_328
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_328(const CAN_message_t &imsg) {

	STMM_counterMsg328.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp800.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp801.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp802.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_327
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_327(const CAN_message_t &imsg) {

	STMM_counterMsg327.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp709.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp710.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp711.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_326
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_326(const CAN_message_t &imsg) {

	STMM_counterMsg326.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp706.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp707.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp708.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_325
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_325(const CAN_message_t &imsg) {

	STMM_counterMsg325.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp703.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp704.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp705.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_324
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_324(const CAN_message_t &imsg) {

	STMM_counterMsg324.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp700.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp701.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp702.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_323
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_323(const CAN_message_t &imsg) {

	STMM_counterMsg323.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp609.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp610.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp611.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_322
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_322(const CAN_message_t &imsg) {

	STMM_counterMsg322.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp606.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp607.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp608.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_321
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_321(const CAN_message_t &imsg) {

	STMM_counterMsg321.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp603.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp604.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp605.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_320
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_320(const CAN_message_t &imsg) {

	STMM_counterMsg320.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp600.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp601.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp602.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_319
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_319(const CAN_message_t &imsg) {

	STMM_counterMsg319.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp509.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp510.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp511.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_318
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_318(const CAN_message_t &imsg) {

	STMM_counterMsg318.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp506.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp507.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp508.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_317
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_317(const CAN_message_t &imsg) {

	STMM_counterMsg317.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp503.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp504.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp505.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_316
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_316(const CAN_message_t &imsg) {

	STMM_counterMsg316.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp500.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp501.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp502.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_315
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_315(const CAN_message_t &imsg) {

	STMM_counterMsg315.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp409.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp410.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp411.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_314
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_314(const CAN_message_t &imsg) {

	STMM_counterMsg314.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp406.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp407.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp408.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_313
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_313(const CAN_message_t &imsg) {

	STMM_counterMsg313.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp403.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp404.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp405.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_312
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_312(const CAN_message_t &imsg) {

	STMM_counterMsg312.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp400.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp401.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp402.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_311
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_311(const CAN_message_t &imsg) {

	STMM_counterMsg311.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp309.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp310.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp311.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_310
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_310(const CAN_message_t &imsg) {

	STMM_counterMsg310.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp306.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp307.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp308.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_309
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_309(const CAN_message_t &imsg) {

	STMM_counterMsg309.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp303.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp304.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp305.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_308
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_308(const CAN_message_t &imsg) {

	STMM_counterMsg308.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp300.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp301.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp302.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_307
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_307(const CAN_message_t &imsg) {

	STMM_counterMsg307.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp209.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp210.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp211.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_306
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_306(const CAN_message_t &imsg) {

	STMM_counterMsg306.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp206.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp207.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp208.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_305
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_305(const CAN_message_t &imsg) {

	STMM_counterMsg305.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp203.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp204.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp205.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_304
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_304(const CAN_message_t &imsg) {

	STMM_counterMsg304.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp200.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp201.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp202.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_303
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_303(const CAN_message_t &imsg) {

	STMM_counterMsg303.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp109.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp110.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp111.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_302
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_302(const CAN_message_t &imsg) {

	STMM_counterMsg302.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp106.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp107.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp108.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_301
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_301(const CAN_message_t &imsg) {

	STMM_counterMsg301.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp103.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp104.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp105.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message STMM_300
 * \param imsg A reference to the incoming CAN message frame
 */
void read_STMM_300(const CAN_message_t &imsg) {

	STMM_counterMsg300.set_can_value(((imsg.buf[0] & 0b00001111)));
	STMM_segmentTemp100.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	STMM_segmentTemp101.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	STMM_segmentTemp102.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message DD_250
 * \param imsg A reference to the incoming CAN message frame
 */
void read_DD_250(const CAN_message_t &imsg) {

	DD_counterMsg250.set_can_value(((imsg.buf[0] & 0b00001111)));
	DD_boardTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	DD_teensyTemp.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message PDM_414
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_414(const CAN_message_t &imsg) {

	PDM_counterMsg414.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_carMiles.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_runtimeHours.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_runtimeMinutes.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_413
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_413(const CAN_message_t &imsg) {

	PDM_counterMsg413.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_keepAliveVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_keepAliveVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_keepAliveVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_412
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_412(const CAN_message_t &imsg) {

	PDM_counterMsg412.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_dataVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_dataVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_dataVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_411
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_411(const CAN_message_t &imsg) {

	PDM_counterMsg411.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_glvVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_glvVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_glvVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_410
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_410(const CAN_message_t &imsg) {

	PDM_uptime.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8) | (imsg.buf[2] << 16) | (imsg.buf[3] << 24));

}

/*
 * Decode a CAN frame for the message PDM_409
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_409(const CAN_message_t &imsg) {

	PDM_counterMsg409.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanLeftDutyCycle.set_can_value((imsg.buf[2]));
	PDM_fanRightDutyCycle.set_can_value((imsg.buf[3]));
	PDM_wpDutyCycle.set_can_value((imsg.buf[4]));
	PDM_teensyTemp.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_408
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_408(const CAN_message_t &imsg) {

	PDM_counterMsg408.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_wpVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_wpVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_wpVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_407
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_407(const CAN_message_t &imsg) {

	PDM_counterMsg407.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_wpCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_wpCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_wpCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_406
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_406(const CAN_message_t &imsg) {

	PDM_counterMsg406.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanLeftVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanLeftVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanLeftVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_405
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_405(const CAN_message_t &imsg) {

	PDM_counterMsg405.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanLeftCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanLeftCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanLeftCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_404
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_404(const CAN_message_t &imsg) {

	PDM_counterMsg404.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanRightVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanRightVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanRightVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_403
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_403(const CAN_message_t &imsg) {

	PDM_counterMsg403.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanRightCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanRightCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanRightCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_402
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_402(const CAN_message_t &imsg) {

	PDM_counterMsg402.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_pdmVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_pdmVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_pdmVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_401
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_401(const CAN_message_t &imsg) {

	PDM_counterMsg401.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_pdmCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_pdmCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_pdmCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_400
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_400(const CAN_message_t &imsg) {

	PDM_counterMsg400.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_boardTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_brakelightVoltAvg.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_vehicleState.set_can_value((imsg.buf[6]));
	PDM_coolingOverrideActive.set_can_value(((imsg.buf[7] & 0b00000001)));

}

/*
 * Decode a CAN frame for the message BMS_215
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_215(const CAN_message_t &imsg) {

	BMS_rollingCounter215.set_can_value((imsg.buf[0]));
	BMS_relayState.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_failsafeStatus.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_dtcStatus2.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_214
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_214(const CAN_message_t &imsg) {

	BMS_rollingCounter214.set_can_value((imsg.buf[0]));
	BMS_maxCellNumber.set_can_value((imsg.buf[1]));
	BMS_totalPackCycles.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_dtcStatus1.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_populatedCells.set_can_value((imsg.buf[6]));

}

/*
 * Decode a CAN frame for the message BMS_213
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_213(const CAN_message_t &imsg) {

	BMS_rollingCounter213.set_can_value((imsg.buf[0]));
	BMS_adaptiveTotalCapacity.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_adaptiveAmphours.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_currLimStatus.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_212
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_212(const CAN_message_t &imsg) {

	BMS_rollingCounter212.set_can_value((imsg.buf[0]));
	BMS_fanSpeed.set_can_value((imsg.buf[1]));
	BMS_requestedFanSpeed.set_can_value((imsg.buf[2]));
	BMS_adaptiveSOC.set_can_value((imsg.buf[3]));
	BMS_fanVolt.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message BMS_211
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_211(const CAN_message_t &imsg) {

	BMS_rollingCounter211.set_can_value((imsg.buf[0]));
	BMS_maxPackDCL.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_maxPackCCL.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_avgPackCurr.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_210
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_210(const CAN_message_t &imsg) {

	BMS_rollingCounter210.set_can_value((imsg.buf[0]));
	BMS_packDischargeCurrLim.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_packDischargeCurrLimkW.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_packOpenVolt.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_209
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_209(const CAN_message_t &imsg) {

	BMS_rollingCounter209.set_can_value((imsg.buf[0]));
	BMS_packChargeCurrLim.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_packChargeCurrLimkW.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_totalPackADC.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_208
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_208(const CAN_message_t &imsg) {

	BMS_rollingCounter208.set_can_value((imsg.buf[0]));
	BMS_lowCellVoltID.set_can_value((imsg.buf[1]));
	BMS_highCellVoltID.set_can_value((imsg.buf[2]));
	BMS_lowCellOpenVoltID.set_can_value((imsg.buf[3]));
	BMS_highCellOpenVoltID.set_can_value((imsg.buf[4]));
	BMS_lowCellResistanceID.set_can_value((imsg.buf[5]));
	BMS_highCellResistanceID.set_can_value((imsg.buf[6]));

}

/*
 * Decode a CAN frame for the message BMS_207
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_207(const CAN_message_t &imsg) {

	BMS_rollingCounter207.set_can_value((imsg.buf[0]));
	BMS_maxCellVolt.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_minCellVolt.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_pwrInputVolt.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_206
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_206(const CAN_message_t &imsg) {

	BMS_rollingCounter206.set_can_value((imsg.buf[0]));
	BMS_lowCellInternalResistance.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_highCellInternalResistance.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_avgCellInternalResistance.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_205
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_205(const CAN_message_t &imsg) {

	BMS_rollingCounter205.set_can_value((imsg.buf[0]));
	BMS_lowCellOpenVolt.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_highCellOpenVolt.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_avgCellOpenVolt.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_204
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_204(const CAN_message_t &imsg) {

	BMS_rollingCounter204.set_can_value((imsg.buf[0]));
	BMS_lowCellVolt.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_highCellVolt.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_avgCellVolt.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_203
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_203(const CAN_message_t &imsg) {

	BMS_rollingCounter203.set_can_value((imsg.buf[0]));
	BMS_highestTemp.set_can_value((imsg.buf[1]));
	BMS_highestThermistorID.set_can_value((imsg.buf[2]));
	BMS_lowestTemp.set_can_value((imsg.buf[3]));
	BMS_lowestThermistorID.set_can_value((imsg.buf[4]));
	BMS_avgTemp.set_can_value((imsg.buf[5]));
	BMS_internalTemp.set_can_value((imsg.buf[6]));

}

/*
 * Decode a CAN frame for the message BMS_202
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_202(const CAN_message_t &imsg) {

	BMS_rollingCounter202.set_can_value((imsg.buf[0]));
	BMS_packDOD.set_can_value((imsg.buf[1]));
	BMS_packSOH.set_can_value((imsg.buf[2]));
	BMS_packAmphours.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_packResistance.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_201
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_201(const CAN_message_t &imsg) {

	BMS_rollingCounter201.set_can_value((imsg.buf[0]));
	BMS_packSummedVolt.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_maxPackVolt.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_minPackVolt.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message BMS_200
 * \param imsg A reference to the incoming CAN message frame
 */
void read_BMS_200(const CAN_message_t &imsg) {

	BMS_rollingCounter200.set_can_value((imsg.buf[0]));
	BMS_packCurr.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	BMS_packVolt.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	BMS_packSOC.set_can_value((imsg.buf[6]));

}

/*
 * Decode a CAN frame for the message PM_194
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_194(const CAN_message_t &imsg) {

	PM_parameterAddressResponse.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_writeSuccess.set_can_value(((imsg.buf[2] & 0b00000001)));
	PM_dataResponse.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message PM_193
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_193(const CAN_message_t &imsg) {

	PM_parameterAddressCommand.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_readWriteCommand.set_can_value(((imsg.buf[2] & 0b00000001)));
	PM_dataCommand.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message PM_176
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_176(const CAN_message_t &imsg) {

	PM_fastTorqueCommand.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_fastTorqueFeedback.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_fastMotorSpeed.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_fastDCBusVolt.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_175
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_175(const CAN_message_t &imsg) {

	PM_bufferRecord.set_can_value((imsg.buf[0]));
	PM_bufferSegment.set_can_value((imsg.buf[1]));
	PM_diagData1.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_diagData2.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_diagData3.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_174
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_174(const CAN_message_t &imsg) {

	PM_projectCodeEEPVer.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_swVersion.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_datecodeMMDD.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_datecodeYYYY.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_173
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_173(const CAN_message_t &imsg) {

	PM_modulationIndex.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_fluxWeakeningOutput.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_idCommand.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_iqCommand.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_172
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_172(const CAN_message_t &imsg) {

	PM_commandedTorque.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_torqueFeedback.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_powerOnTimer.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8) | (imsg.buf[6] << 16) | (imsg.buf[7] << 24));

}

/*
 * Decode a CAN frame for the message PM_171
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_171(const CAN_message_t &imsg) {

	PM_postFaultLo.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_postFaultHi.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_runFaultLo.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_runFaultHi.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_169
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_169(const CAN_message_t &imsg) {

	PM_refVolt15.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_refVolt25.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_refVolt50.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_refVolt120.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_168
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_168(const CAN_message_t &imsg) {

	PM_fluxCommand.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_fluxFeedback.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_id.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_iq.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_167
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_167(const CAN_message_t &imsg) {

	PM_dcBusVolt.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_outputVolt.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_vabVdVolt.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_vbcVqVolt.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_166
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_166(const CAN_message_t &imsg) {

	PM_phaseACurrent.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_phaseBCurrent.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_phaseCCurrent.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_dcBusCurrent.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_165
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_165(const CAN_message_t &imsg) {

	PM_electricalMotorAngle.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_motorSpeed.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_electricalOutputFrequency.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_deltaResolverFiltered.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_164
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_164(const CAN_message_t &imsg) {

	PM_digitalInputStatus1.set_can_value(((imsg.buf[0] & 0b00000001)));
	PM_digitalInputStatus2.set_can_value(((imsg.buf[1] & 0b00000001)));
	PM_digitalInputStatus3.set_can_value(((imsg.buf[2] & 0b00000001)));
	PM_digitalInputStatus4.set_can_value(((imsg.buf[3] & 0b00000001)));
	PM_digitalInputStatus5.set_can_value(((imsg.buf[4] & 0b00000001)));
	PM_digitalInputStatus6.set_can_value(((imsg.buf[5] & 0b00000001)));
	PM_digitalInputStatus7.set_can_value(((imsg.buf[6] & 0b00000001)));
	PM_digitalInputStatus8.set_can_value(((imsg.buf[7] & 0b00000001)));

}

/*
 * Decode a CAN frame for the message PM_163
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_163(const CAN_message_t &imsg) {

	PM_analogInputVolt1.set_can_value((imsg.buf[0]) | ((imsg.buf[1] & 0b00000011) << 8));
	PM_analogInputVolt2.set_can_value((((imsg.buf[1] & 0b11111100)) | ((imsg.buf[2] & 0b00001111) << 8) >> 2));
	PM_analogInputVolt3.set_can_value((((imsg.buf[2] & 0b11110000)) | ((imsg.buf[3] & 0b00111111) << 8) >> 4));
	PM_analogInputVolt4.set_can_value((imsg.buf[4]) | ((imsg.buf[5] & 0b00000011) << 8));
	PM_analogInputVolt5.set_can_value((((imsg.buf[5] & 0b11111100)) | ((imsg.buf[6] & 0b00001111) << 8) >> 2));
	PM_analogInputVolt6.set_can_value((((imsg.buf[6] & 0b11110000)) | ((imsg.buf[7] & 0b00111111) << 8) >> 4));

}

/*
 * Decode a CAN frame for the message PM_162
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_162(const CAN_message_t &imsg) {

	PM_rtd4Temp.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_rtd5Temp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_motorTemp.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_torqueShudder.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_161
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_161(const CAN_message_t &imsg) {

	PM_controlBoardTemp.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_rtd1Temp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_rtd2Temp.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_rtd3Temp.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PM_160
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PM_160(const CAN_message_t &imsg) {

	PM_moduleATemp.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	PM_moduleBTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PM_moduleCTemp.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PM_gateDriverBoard.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_115
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_115(const CAN_message_t &imsg) {

	VCU_counterMsg115.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_wheelLockupFL.set_can_value((((imsg.buf[0] & 0b00010000)) >> 4));
	VCU_wheelLockupFR.set_can_value((((imsg.buf[0] & 0b00100000)) >> 5));
	VCU_wheelLockupRL.set_can_value((((imsg.buf[0] & 0b01000000)) >> 6));
	VCU_wheelLockupRR.set_can_value((((imsg.buf[0] & 0b10000000)) >> 7));

}

/*
 * Decode a CAN frame for the message VCU_114
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_114(const CAN_message_t &imsg) {

	VCU_counterMsg114.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_tcTorqueReduction.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_tcSlipAimError.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_tcSlipAimValue.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_113
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_113(const CAN_message_t &imsg) {

	VCU_counterMsg113.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_brakePressureF.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_brakePressureR.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_brakeBias.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_112
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_112(const CAN_message_t &imsg) {

	VCU_counterMsg112.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_driveSpeed.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_driveSpeedLeft.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_driveSpeedRight.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_111
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_111(const CAN_message_t &imsg) {

	VCU_counterMsg111.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_groundSpeed.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_groundSpeedLeft.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_groundSpeedRight.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_110
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_110(const CAN_message_t &imsg) {

	VCU_counterMsg110.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_suspensionTravelFL.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_suspensionTravelFR.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message VCU_109
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_109(const CAN_message_t &imsg) {

	VCU_counterMsg109.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_flowRateMotorIn.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_flowRateInverterIn.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_flowRateInverterOut.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_108
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_108(const CAN_message_t &imsg) {

	VCU_counterMsg108.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_tireTempRRI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_tireTempRRM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_tireTempRRO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_107
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_107(const CAN_message_t &imsg) {

	VCU_counterMsg107.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_tireTempRLI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_tireTempRLM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_tireTempRLO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_106
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_106(const CAN_message_t &imsg) {

	VCU_counterMsg106.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_coolantTempMotorIn.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_coolantTempInverterIn.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_coolantTempInverterOut.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_105
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_105(const CAN_message_t &imsg) {

	VCU_counterMsg105.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_rotorTempRL.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_rotorTempRR.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message VCU_104
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_104(const CAN_message_t &imsg) {

	VCU_counterMsg104.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_suspensionTravelRL.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_suspensionTravelRR.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message VCU_103
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_103(const CAN_message_t &imsg) {

	VCU_counterMsg103.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_tireTempFRI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_tireTempFRM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_tireTempFRO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_102
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_102(const CAN_message_t &imsg) {

	VCU_counterMsg102.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_tireTempFLI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_tireTempFLM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_tireTempFLO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_101
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_101(const CAN_message_t &imsg) {

	VCU_counterMsg101.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_rotorTempFL.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_rotorTempFR.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message VCU_100
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_100(const CAN_message_t &imsg) {

	VCU_counterMsg100.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_throttlePosition.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_brakePosition.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	VCU_tcSet.set_can_value((imsg.buf[6]));

}




/************************************************************************************

    Distribute incoming messages to the correct decoding functions

************************************************************************************/


/*
 * Decode a CAN message for the bus captured in raptor_CAN2.dbc.
 * To more efficiently allocate microcontroller resources, simply comment
 * out unnecessary messages that do not need to be decoded.
 * \param imsg A reference to the incoming CAN frame
 */
void decode_raptor_CAN2(const CAN_message_t &imsg) {

	switch (imsg.id) {

		case 406451072:
			read_STMM_1839F380(imsg);
			break;

		case 331:
			read_STMM_331(imsg);
			break;

		case 330:
			read_STMM_330(imsg);
			break;

		case 329:
			read_STMM_329(imsg);
			break;

		case 328:
			read_STMM_328(imsg);
			break;

		case 327:
			read_STMM_327(imsg);
			break;

		case 326:
			read_STMM_326(imsg);
			break;

		case 325:
			read_STMM_325(imsg);
			break;

		case 324:
			read_STMM_324(imsg);
			break;

		case 323:
			read_STMM_323(imsg);
			break;

		case 322:
			read_STMM_322(imsg);
			break;

		case 321:
			read_STMM_321(imsg);
			break;

		case 320:
			read_STMM_320(imsg);
			break;

		case 319:
			read_STMM_319(imsg);
			break;

		case 318:
			read_STMM_318(imsg);
			break;

		case 317:
			read_STMM_317(imsg);
			break;

		case 316:
			read_STMM_316(imsg);
			break;

		case 315:
			read_STMM_315(imsg);
			break;

		case 314:
			read_STMM_314(imsg);
			break;

		case 313:
			read_STMM_313(imsg);
			break;

		case 312:
			read_STMM_312(imsg);
			break;

		case 311:
			read_STMM_311(imsg);
			break;

		case 310:
			read_STMM_310(imsg);
			break;

		case 309:
			read_STMM_309(imsg);
			break;

		case 308:
			read_STMM_308(imsg);
			break;

		case 307:
			read_STMM_307(imsg);
			break;

		case 306:
			read_STMM_306(imsg);
			break;

		case 305:
			read_STMM_305(imsg);
			break;

		case 304:
			read_STMM_304(imsg);
			break;

		case 303:
			read_STMM_303(imsg);
			break;

		case 302:
			read_STMM_302(imsg);
			break;

		case 301:
			read_STMM_301(imsg);
			break;

		case 300:
			read_STMM_300(imsg);
			break;

		case 250:
			read_DD_250(imsg);
			break;

		case 414:
			read_PDM_414(imsg);
			break;

		case 413:
			read_PDM_413(imsg);
			break;

		case 412:
			read_PDM_412(imsg);
			break;

		case 411:
			read_PDM_411(imsg);
			break;

		case 410:
			read_PDM_410(imsg);
			break;

		case 409:
			read_PDM_409(imsg);
			break;

		case 408:
			read_PDM_408(imsg);
			break;

		case 407:
			read_PDM_407(imsg);
			break;

		case 406:
			read_PDM_406(imsg);
			break;

		case 405:
			read_PDM_405(imsg);
			break;

		case 404:
			read_PDM_404(imsg);
			break;

		case 403:
			read_PDM_403(imsg);
			break;

		case 402:
			read_PDM_402(imsg);
			break;

		case 401:
			read_PDM_401(imsg);
			break;

		case 400:
			read_PDM_400(imsg);
			break;

		case 215:
			read_BMS_215(imsg);
			break;

		case 214:
			read_BMS_214(imsg);
			break;

		case 213:
			read_BMS_213(imsg);
			break;

		case 212:
			read_BMS_212(imsg);
			break;

		case 211:
			read_BMS_211(imsg);
			break;

		case 210:
			read_BMS_210(imsg);
			break;

		case 209:
			read_BMS_209(imsg);
			break;

		case 208:
			read_BMS_208(imsg);
			break;

		case 207:
			read_BMS_207(imsg);
			break;

		case 206:
			read_BMS_206(imsg);
			break;

		case 205:
			read_BMS_205(imsg);
			break;

		case 204:
			read_BMS_204(imsg);
			break;

		case 203:
			read_BMS_203(imsg);
			break;

		case 202:
			read_BMS_202(imsg);
			break;

		case 201:
			read_BMS_201(imsg);
			break;

		case 200:
			read_BMS_200(imsg);
			break;

		case 194:
			read_PM_194(imsg);
			break;

		case 193:
			read_PM_193(imsg);
			break;

		case 176:
			read_PM_176(imsg);
			break;

		case 175:
			read_PM_175(imsg);
			break;

		case 174:
			read_PM_174(imsg);
			break;

		case 173:
			read_PM_173(imsg);
			break;

		case 172:
			read_PM_172(imsg);
			break;

		case 171:
			read_PM_171(imsg);
			break;

		case 169:
			read_PM_169(imsg);
			break;

		case 168:
			read_PM_168(imsg);
			break;

		case 167:
			read_PM_167(imsg);
			break;

		case 166:
			read_PM_166(imsg);
			break;

		case 165:
			read_PM_165(imsg);
			break;

		case 164:
			read_PM_164(imsg);
			break;

		case 163:
			read_PM_163(imsg);
			break;

		case 162:
			read_PM_162(imsg);
			break;

		case 161:
			read_PM_161(imsg);
			break;

		case 160:
			read_PM_160(imsg);
			break;

		case 115:
			read_VCU_115(imsg);
			break;

		case 114:
			read_VCU_114(imsg);
			break;

		case 113:
			read_VCU_113(imsg);
			break;

		case 112:
			read_VCU_112(imsg);
			break;

		case 111:
			read_VCU_111(imsg);
			break;

		case 110:
			read_VCU_110(imsg);
			break;

		case 109:
			read_VCU_109(imsg);
			break;

		case 108:
			read_VCU_108(imsg);
			break;

		case 107:
			read_VCU_107(imsg);
			break;

		case 106:
			read_VCU_106(imsg);
			break;

		case 105:
			read_VCU_105(imsg);
			break;

		case 104:
			read_VCU_104(imsg);
			break;

		case 103:
			read_VCU_103(imsg);
			break;

		case 102:
			read_VCU_102(imsg);
			break;

		case 101:
			read_VCU_101(imsg);
			break;

		case 100:
			read_VCU_100(imsg);
			break;

	}
}


#endif
