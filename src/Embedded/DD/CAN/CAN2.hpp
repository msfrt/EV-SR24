/******************************************************************************
    
    This file was generated automatically from a DBC file by the dbctocpp 
    utility, which is part of the StateCAN library, 
    a component of SR-Libraries.

    https://github.com/msfrt/SR-Libraries
    
******************************************************************************/

#ifndef EMBEDDED_DD_CAN_CAN2_HPP
#define EMBEDDED_DD_CAN_CAN2_HPP

#include <FlexCAN_T4.h>
#include <StateCAN.h>

// Message: ATCCR_17 [0x1d3]
StateSignal ATCCR_counterMsg467(4, false, 1, 0.0, 0, 15, 0.0, 0, 467);
StateSignal ATCCR_egt4(16, true, 10, 0.0, 0, 1000, 0.0, 0, 467);
StateSignal ATCCR_rectifierCurrent(16, true, 10, 0.0, -200, 200, 0.0, 0, 467);
StateSignal ATCCR_coolantTempRadMiddle(16, true, 10, 0.0, 0, 120, 0.0, 0, 467);

// Message: ATCCR_16 [0x1d2]
StateSignal ATCCR_counterMsg466(4, false, 1, 0.0, 0, 15, 0.0, 0, 466);
StateSignal ATCCR_egt1(16, true, 10, 0.0, 0, 1000, 0.0, 0, 466);
StateSignal ATCCR_egt2(16, true, 10, 0.0, 0, 1000, 0.0, 0, 466);
StateSignal ATCCR_egt3(16, true, 10, 0.0, 0, 1000, 0.0, 0, 466);

// Message: ATCCR_15 [0x1d1]
StateSignal ATCCR_counterMsg465(4, false, 1, 0.0, 0, 15, 0.0, 0, 465);
StateSignal ATCCR_uptime(32, false, 1, 0.0, 0, 4294967295, 0.0, 0, 465);
StateSignal ATCCR_shiftingPressure(16, true, 10, 0.0, -5, 200, 0.0, 0, 465);

// Message: ATCCF_15 [0x19f]
StateSignal ATCCF_uptime(32, false, 1, 0.0, 0, 4294967295, 0.0, 0, 415);

// Message: PDM_26 [0x114]
StateSignal PDM_uptime(32, false, 1, 0.0, 0, 4294967295, 0.0, 0, 276);

// Message: PDM_09 [0x103]
StateSignal PDM_OBD_oilPressure(1, false, 1, 0.0, 0, 0, 0.0, 0, 259);
StateSignal PDM_OBD_oilTemp(1, false, 1, 0.0, 0, 0, 0.0, 0, 259);
StateSignal PDM_OBD_fuelPressure(1, false, 1, 0.0, 0, 0, 0.0, 0, 259);
StateSignal PDM_coolingOverrideActive(1, false, 1, 0.0, 0, 0, 0.0, 0, 259);
StateSignal PDM_engineState(8, true, 1, 0.0, 0, 3, 0.0, 0, 259);

// Message: PDM_25 [0x113]
StateSignal PDM_counterMsg275(4, false, 1, 0.0, 0, 15, 0.0, 0, 275);
StateSignal PDM_carMiles(16, true, 10, 0.0, 0, 0, 0.0, 0, 275);
StateSignal PDM_engineHours(16, true, 1, 0.0, -32768, 32767, 0.0, 0, 275);
StateSignal PDM_engineMinutes(16, true, 1, 0.0, -32768, 32767, 0.0, 0, 275);

// Message: PDM_24 [0x112]
StateSignal PDM_counterMsg274(4, false, 1, 0.0, 0, 15, 0.0, 0, 274);
StateSignal PDM_fanLeftDutyCycle(8, false, 1, 0.0, 0, 100, 0.0, 0, 274);
StateSignal PDM_fanRightDutyCycle(8, false, 1, 0.0, 0, 100, 0.0, 0, 274);
StateSignal PDM_wpDutyCycle(8, false, 1, 0.0, 0, 255, 0.0, 0, 274);
StateSignal PDM_teensyTemp(16, true, 10, 0.0, -5, 20, 0.0, 0, 274);

// Message: VCU_10 [0xa0]
StateSignal VCU_counterMsg160(4, false, 1, 0.0, 0, 15, 0.0, 0, 160);
StateSignal VCU_boardTemp(16, true, 10, 0.0, 0, 150, 0.0, 0, 160);
StateSignal VCU_teensyTemp(16, true, 10, 0.0, 0, 150, 0.0, 0, 160);

// Message: DD_10 [0x2c6]
StateSignal DD_counterMsg210(4, false, 1, 0.0, 0, 15, 0.0, 0, 710);
StateSignal DD_boardTemp(16, true, 10, 0.0, 0, 150, 0.0, 0, 710);
StateSignal DD_teensyTemp(16, true, 10, 0.0, 0, 150, 0.0, 0, 710);

// Message: PDM_23 [0x111]
StateSignal PDM_counterMsg273(4, false, 1, 0.0, 0, 15, 0.0, 0, 273);
StateSignal PDM_boardTemp(16, true, 10, 0.0, -5, 100, 0.0, 0, 273);
StateSignal PDM_brakelightVoltAvg(16, true, 1000, 0.0, -5, 100, 0.0, 0, 273);
StateSignal PDM_starterRelayVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 273);

// Message: PDM_22 [0x110]
StateSignal PDM_counterMsg272(4, false, 1, 0.0, 0, 15, 0.0, 0, 272);
StateSignal PDM_keepAliveVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 272);
StateSignal PDM_keepAliveVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 272);
StateSignal PDM_keepAliveVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 272);

// Message: PDM_21 [0x10f]
StateSignal PDM_counterMsg271(4, false, 1, 0.0, 0, 15, 0.0, 0, 271);
StateSignal PDM_dataVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 271);
StateSignal PDM_dataVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 271);
StateSignal PDM_dataVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 271);

// Message: PDM_20 [0x10e]
StateSignal PDM_counterMsg270(4, false, 1, 0.0, 0, 15, 0.0, 0, 270);
StateSignal PDM_mainVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 270);
StateSignal PDM_mainVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 270);
StateSignal PDM_mainVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 270);

// Message: PDM_19 [0x10d]
StateSignal PDM_counterMsg269(4, false, 1, 0.0, 0, 15, 0.0, 0, 269);
StateSignal PDM_fuelVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 269);
StateSignal PDM_fuelVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 269);
StateSignal PDM_fuelVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 269);

// Message: PDM_18 [0x10c]
StateSignal PDM_counterMsg268(4, false, 1, 0.0, 0, 15, 0.0, 0, 268);
StateSignal PDM_fuelCurrentAvg(16, true, 100, 0.0, -5, 20, 0.0, 0, 268);
StateSignal PDM_fuelCurrentMax(16, true, 100, 0.0, -5, 20, 0.0, 0, 268);
StateSignal PDM_fuelCurrentMin(16, true, 100, 0.0, -5, 20, 0.0, 0, 268);

// Message: PDM_17 [0x10b]
StateSignal PDM_counterMsg267(4, false, 1, 0.0, 0, 15, 0.0, 0, 267);
StateSignal PDM_wpVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 267);
StateSignal PDM_wpVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 267);
StateSignal PDM_wpVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 267);

// Message: PDM_16 [0x10a]
StateSignal PDM_counterMsg266(4, false, 1, 0.0, 0, 15, 0.0, 0, 266);
StateSignal PDM_wpCurrentAvg(16, true, 100, 0.0, -5, 20, 0.0, 0, 266);
StateSignal PDM_wpCurrentMax(16, true, 100, 0.0, -5, 20, 0.0, 0, 266);
StateSignal PDM_wpCurrentMin(16, true, 100, 0.0, -5, 20, 0.0, 0, 266);

// Message: PDM_15 [0x109]
StateSignal PDM_counterMsg265(4, false, 1, 0.0, 0, 15, 0.0, 0, 265);
StateSignal PDM_fanLeftVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 265);
StateSignal PDM_fanLeftVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 265);
StateSignal PDM_fanLeftVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 265);

// Message: PDM_14 [0x108]
StateSignal PDM_counterMsg264(4, false, 1, 0.0, 0, 15, 0.0, 0, 264);
StateSignal PDM_fanLeftCurrentAvg(16, true, 100, 0.0, -5, 20, 0.0, 0, 264);
StateSignal PDM_fanLeftCurrentMax(16, true, 100, 0.0, -5, 20, 0.0, 0, 264);
StateSignal PDM_fanLeftCurrentMin(16, true, 100, 0.0, -5, 20, 0.0, 0, 264);

// Message: PDM_11 [0x105]
StateSignal PDM_counterMsg261(4, false, 1, 0.0, 0, 15, 0.0, 0, 261);
StateSignal PDM_pdmVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 261);
StateSignal PDM_pdmVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 261);
StateSignal PDM_pdmVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 261);

// Message: PDM_13 [0x107]
StateSignal PDM_counterMsg263(4, false, 1, 0.0, 0, 15, 0.0, 0, 263);
StateSignal PDM_fanRightVoltAvg(16, true, 1000, 0.0, -5, 20, 0.0, 0, 263);
StateSignal PDM_fanRightVoltMax(16, true, 1000, 0.0, -5, 20, 0.0, 0, 263);
StateSignal PDM_fanRightVoltMin(16, true, 1000, 0.0, -5, 20, 0.0, 0, 263);

// Message: PDM_12 [0x106]
StateSignal PDM_counterMsg262(4, false, 1, 0.0, 0, 15, 0.0, 0, 262);
StateSignal PDM_fanRightCurrentAvg(16, true, 100, 0.0, -5, 20, 0.0, 0, 262);
StateSignal PDM_fanRightCurrentMax(16, true, 100, 0.0, -5, 20, 0.0, 0, 262);
StateSignal PDM_fanRightCurrentMin(16, true, 100, 0.0, -5, 20, 0.0, 0, 262);

// Message: PDM_10 [0x104]
StateSignal PDM_counterMsg260(4, false, 1, 0.0, 0, 15, 0.0, 0, 260);
StateSignal PDM_dataLog(1, false, 1, 0.0, 0, 1, 0.0, 0, 260);
StateSignal PDM_pdmCurrentAvg(16, true, 100, 0.0, -5, 20, 0.0, 0, 260);
StateSignal PDM_pdmCurrentMax(16, true, 100, 0.0, -5, 20, 0.0, 0, 260);
StateSignal PDM_pdmCurrentMin(16, true, 100, 0.0, -5, 20, 0.0, 0, 260);

// Message: ATCCR_14 [0x1d0]
StateSignal ATCCR_counterMsg464(4, false, 1, 0.0, 0, 15, 0.0, 0, 464);
StateSignal ATCCR_tireTempRRI(16, true, 10, 0.0, 0, 100, 0.0, 0, 464);
StateSignal ATCCR_tireTempRRM(16, true, 10, 0.0, 0, 100, 0.0, 0, 464);
StateSignal ATCCR_tireTempRRO(16, true, 10, 0.0, 0, 100, 0.0, 0, 464);

// Message: ATCCR_13 [0x1cf]
StateSignal ATCCR_counterMsg463(4, false, 1, 0.0, 0, 15, 0.0, 0, 463);
StateSignal ATCCR_tireTempRLI(16, true, 10, 0.0, 0, 100, 0.0, 0, 463);
StateSignal ATCCR_tireTempRLM(16, true, 10, 0.0, 0, 100, 0.0, 0, 463);
StateSignal ATCCR_tireTempRLO(16, true, 10, 0.0, 0, 100, 0.0, 0, 463);

// Message: ATCCR_12 [0x1ce]
StateSignal ATCCR_counterMsg462(4, false, 1, 0.0, 0, 15, 0.0, 0, 462);
StateSignal ATCCR_teensyTemp(16, true, 10, 0.0, -5, 100, 0.0, 0, 462);
StateSignal ATCCR_coolantTempRadInlet(16, true, 10, 0.0, 0, 120, 0.0, 0, 462);
StateSignal ATCCR_coolantTempRadOutlet(16, true, 10, 0.0, 0, 120, 0.0, 0, 462);

// Message: ATCCR_11 [0x1cd]
StateSignal ATCCR_counterMsg461(4, false, 1, 0.0, 0, 15, 0.0, 0, 461);
StateSignal ATCCR_boardTemp(16, true, 10, 0.0, -5, 100, 0.0, 0, 461);
StateSignal ATCCR_rotorTempRL(16, true, 10, 0.0, 0, 1000, 0.0, 0, 461);
StateSignal ATCCR_rotorTempRR(16, true, 10, 0.0, 0, 1000, 0.0, 0, 461);

// Message: ATCCR_10 [0x1cc]
StateSignal ATCCR_counterMsg460(4, false, 1, 0.0, 0, 15, 0.0, 0, 460);
StateSignal ATCCR_batteryCurrent(16, true, 10, 0.0, -200, 200, 0.0, 0, 460);
StateSignal ATCCR_suspensionTravelRL(16, true, 1000, 0.0, -4, 4, 0.0, 0, 460);
StateSignal ATCCR_suspensionTravelRR(16, true, 1000, 0.0, -4, 4, 0.0, 0, 460);

// Message: ATCCF_14 [0x19e]
StateSignal ATCCF_counterMsg414(4, false, 1, 0.0, 0, 15, 0.0, 0, 414);
StateSignal ATCCF_tireTempFRI(16, true, 10, 0.0, 0, 100, 0.0, 0, 414);
StateSignal ATCCF_tireTempFRM(16, true, 10, 0.0, 0, 100, 0.0, 0, 414);
StateSignal ATCCF_tireTempFRO(16, true, 10, 0.0, 0, 100, 0.0, 0, 414);

// Message: ATCCF_13 [0x19d]
StateSignal ATCCF_counterMsg413(4, false, 1, 0.0, 0, 15, 0.0, 0, 413);
StateSignal ATCCF_tireTempFLI(16, true, 10, 0.0, 0, 100, 0.0, 0, 413);
StateSignal ATCCF_tireTempFLM(16, true, 10, 0.0, 0, 100, 0.0, 0, 413);
StateSignal ATCCF_tireTempFLO(16, true, 10, 0.0, 0, 100, 0.0, 0, 413);

// Message: ATCCF_12 [0x19c]
StateSignal ATCCF_counterMsg412(4, false, 1, 0.0, 0, 15, 0.0, 0, 412);
StateSignal ATCCF_teensyTemp(16, true, 10, 0.0, -5, 100, 0.0, 0, 412);
StateSignal ATCCF_rotorTempFL(16, true, 10, 0.0, 0, 1000, 0.0, 0, 412);
StateSignal ATCCF_rotorTempFR(16, true, 10, 0.0, 0, 1000, 0.0, 0, 412);

// Message: ATCCF_11 [0x19b]
StateSignal ATCCF_counterMsg411(4, false, 1, 0.0, 0, 15, 0.0, 0, 411);
StateSignal ATCCF_brakePressureF(16, true, 10, 0.0, 0, 2000, 0.0, 0, 411);
StateSignal ATCCF_brakePressureR(16, true, 10, 0.0, 0, 2000, 0.0, 0, 411);
StateSignal ATCCF_boardTemp(16, true, 10, 0.0, -5, 100, 0.0, 0, 411);

// Message: ATCCF_10 [0x19a]
StateSignal ATCCF_counterMsg410(4, false, 1, 0.0, 0, 15, 0.0, 0, 410);
StateSignal ATCCF_brakeBias(16, true, 10, 0.0, 0, 100, 0.0, 0, 410);
StateSignal ATCCF_suspensionTravelFL(16, true, 1000, 0.0, -32, 32, 0.0, 0, 410);
StateSignal ATCCF_suspensionTravelFR(16, true, 1000, 0.0, -32, 32, 0.0, 0, 410);




/************************************************************************************
    
    Incoming CAN frame decoding functions

************************************************************************************/


/*
 * Decode a CAN frame for the message ATCCR_17
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_17(const CAN_message_t &imsg) {

	ATCCR_counterMsg467.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_egt4.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCR_rectifierCurrent.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCR_coolantTempRadMiddle.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCR_16
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_16(const CAN_message_t &imsg) {

	ATCCR_counterMsg466.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_egt1.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCR_egt2.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCR_egt3.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCR_15
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_15(const CAN_message_t &imsg) {

	ATCCR_counterMsg465.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_uptime.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8) | (imsg.buf[4] << 16) | (imsg.buf[5] << 24));
	ATCCR_shiftingPressure.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCF_15
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCF_15(const CAN_message_t &imsg) {

	ATCCF_uptime.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8) | (imsg.buf[2] << 16) | (imsg.buf[3] << 24));

}

/*
 * Decode a CAN frame for the message PDM_26
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_26(const CAN_message_t &imsg) {

	PDM_uptime.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8) | (imsg.buf[2] << 16) | (imsg.buf[3] << 24));

}

/*
 * Decode a CAN frame for the message PDM_09
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_09(const CAN_message_t &imsg) {

	PDM_OBD_oilPressure.set_can_value(((imsg.buf[0] & 0b00000001)));
	PDM_OBD_oilTemp.set_can_value(((imsg.buf[1] & 0b00000001)));
	PDM_OBD_fuelPressure.set_can_value(((imsg.buf[2] & 0b00000001)));
	PDM_coolingOverrideActive.set_can_value(((imsg.buf[3] & 0b00000001)));
	PDM_engineState.set_can_value((imsg.buf[7]));

}

/*
 * Decode a CAN frame for the message PDM_25
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_25(const CAN_message_t &imsg) {

	PDM_counterMsg275.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_carMiles.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_engineHours.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_engineMinutes.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_24
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_24(const CAN_message_t &imsg) {

	PDM_counterMsg274.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanLeftDutyCycle.set_can_value((imsg.buf[2]));
	PDM_fanRightDutyCycle.set_can_value((imsg.buf[3]));
	PDM_wpDutyCycle.set_can_value((imsg.buf[4]));
	PDM_teensyTemp.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message VCU_10
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_10(const CAN_message_t &imsg) {

	VCU_counterMsg160.set_can_value(((imsg.buf[0] & 0b00001111)));
	VCU_boardTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	VCU_teensyTemp.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message DD_10
 * \param imsg A reference to the incoming CAN message frame
 */
void read_DD_10(const CAN_message_t &imsg) {

	DD_counterMsg210.set_can_value(((imsg.buf[0] & 0b00001111)));
	DD_boardTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	DD_teensyTemp.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message PDM_23
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_23(const CAN_message_t &imsg) {

	PDM_counterMsg273.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_boardTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_brakelightVoltAvg.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_starterRelayVoltAvg.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_22
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_22(const CAN_message_t &imsg) {

	PDM_counterMsg272.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_keepAliveVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_keepAliveVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_keepAliveVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_21
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_21(const CAN_message_t &imsg) {

	PDM_counterMsg271.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_dataVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_dataVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_dataVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_20
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_20(const CAN_message_t &imsg) {

	PDM_counterMsg270.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_mainVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_mainVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_mainVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_19
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_19(const CAN_message_t &imsg) {

	PDM_counterMsg269.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fuelVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fuelVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fuelVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_18
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_18(const CAN_message_t &imsg) {

	PDM_counterMsg268.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fuelCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fuelCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fuelCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_17
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_17(const CAN_message_t &imsg) {

	PDM_counterMsg267.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_wpVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_wpVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_wpVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_16
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_16(const CAN_message_t &imsg) {

	PDM_counterMsg266.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_wpCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_wpCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_wpCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_15
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_15(const CAN_message_t &imsg) {

	PDM_counterMsg265.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanLeftVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanLeftVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanLeftVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_14
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_14(const CAN_message_t &imsg) {

	PDM_counterMsg264.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanLeftCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanLeftCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanLeftCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_11
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_11(const CAN_message_t &imsg) {

	PDM_counterMsg261.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_pdmVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_pdmVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_pdmVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_13
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_13(const CAN_message_t &imsg) {

	PDM_counterMsg263.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanRightVoltAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanRightVoltMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanRightVoltMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_12
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_12(const CAN_message_t &imsg) {

	PDM_counterMsg262.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_fanRightCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_fanRightCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_fanRightCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message PDM_10
 * \param imsg A reference to the incoming CAN message frame
 */
void read_PDM_10(const CAN_message_t &imsg) {

	PDM_counterMsg260.set_can_value(((imsg.buf[0] & 0b00001111)));
	PDM_dataLog.set_can_value((((imsg.buf[0] & 0b10000000)) >> 7));
	PDM_pdmCurrentAvg.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	PDM_pdmCurrentMax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	PDM_pdmCurrentMin.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCR_14
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_14(const CAN_message_t &imsg) {

	ATCCR_counterMsg464.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_tireTempRRI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCR_tireTempRRM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCR_tireTempRRO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCR_13
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_13(const CAN_message_t &imsg) {

	ATCCR_counterMsg463.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_tireTempRLI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCR_tireTempRLM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCR_tireTempRLO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCR_12
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_12(const CAN_message_t &imsg) {

	ATCCR_counterMsg462.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_teensyTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCR_coolantTempRadInlet.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCR_coolantTempRadOutlet.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCR_11
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_11(const CAN_message_t &imsg) {

	ATCCR_counterMsg461.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_boardTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCR_rotorTempRL.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCR_rotorTempRR.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCR_10
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCR_10(const CAN_message_t &imsg) {

	ATCCR_counterMsg460.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCR_batteryCurrent.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCR_suspensionTravelRL.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCR_suspensionTravelRR.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCF_14
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCF_14(const CAN_message_t &imsg) {

	ATCCF_counterMsg414.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCF_tireTempFRI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCF_tireTempFRM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCF_tireTempFRO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCF_13
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCF_13(const CAN_message_t &imsg) {

	ATCCF_counterMsg413.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCF_tireTempFLI.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCF_tireTempFLM.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCF_tireTempFLO.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCF_12
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCF_12(const CAN_message_t &imsg) {

	ATCCF_counterMsg412.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCF_teensyTemp.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCF_rotorTempFL.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCF_rotorTempFR.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCF_11
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCF_11(const CAN_message_t &imsg) {

	ATCCF_counterMsg411.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCF_brakePressureF.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCF_brakePressureR.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCF_boardTemp.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}

/*
 * Decode a CAN frame for the message ATCCF_10
 * \param imsg A reference to the incoming CAN message frame
 */
void read_ATCCF_10(const CAN_message_t &imsg) {

	ATCCF_counterMsg410.set_can_value(((imsg.buf[0] & 0b00001111)));
	ATCCF_brakeBias.set_can_value((imsg.buf[2]) | (imsg.buf[3] << 8));
	ATCCF_suspensionTravelFL.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));
	ATCCF_suspensionTravelFR.set_can_value((imsg.buf[6]) | (imsg.buf[7] << 8));

}




/************************************************************************************

    Distribute incoming messages to the correct decoding functions

************************************************************************************/


/*
 * Decode a CAN message for the bus captured in CAN2.dbc.
 * To more efficiently allocate microcontroller resources, simply comment
 * out unnecessary messages that do not need to be decoded.
 * \param imsg A reference to the incoming CAN frame
 */
void decode_CAN2(const CAN_message_t &imsg) {

	switch (imsg.id) {

		case 467:
			read_ATCCR_17(imsg);
			break;

		case 466:
			read_ATCCR_16(imsg);
			break;

		case 465:
			read_ATCCR_15(imsg);
			break;

		case 415:
			read_ATCCF_15(imsg);
			break;

		case 276:
			read_PDM_26(imsg);
			break;

		case 259:
			read_PDM_09(imsg);
			break;

		case 275:
			read_PDM_25(imsg);
			break;

		case 274:
			read_PDM_24(imsg);
			break;

		case 160:
			read_VCU_10(imsg);
			break;

		case 710:
			read_DD_10(imsg);
			break;

		case 273:
			read_PDM_23(imsg);
			break;

		case 272:
			read_PDM_22(imsg);
			break;

		case 271:
			read_PDM_21(imsg);
			break;

		case 270:
			read_PDM_20(imsg);
			break;

		case 269:
			read_PDM_19(imsg);
			break;

		case 268:
			read_PDM_18(imsg);
			break;

		case 267:
			read_PDM_17(imsg);
			break;

		case 266:
			read_PDM_16(imsg);
			break;

		case 265:
			read_PDM_15(imsg);
			break;

		case 264:
			read_PDM_14(imsg);
			break;

		case 261:
			read_PDM_11(imsg);
			break;

		case 263:
			read_PDM_13(imsg);
			break;

		case 262:
			read_PDM_12(imsg);
			break;

		case 260:
			read_PDM_10(imsg);
			break;

		case 464:
			read_ATCCR_14(imsg);
			break;

		case 463:
			read_ATCCR_13(imsg);
			break;

		case 462:
			read_ATCCR_12(imsg);
			break;

		case 461:
			read_ATCCR_11(imsg);
			break;

		case 460:
			read_ATCCR_10(imsg);
			break;

		case 414:
			read_ATCCF_14(imsg);
			break;

		case 413:
			read_ATCCF_13(imsg);
			break;

		case 412:
			read_ATCCF_12(imsg);
			break;

		case 411:
			read_ATCCF_11(imsg);
			break;

		case 410:
			read_ATCCF_10(imsg);
			break;

	}
}


#endif
