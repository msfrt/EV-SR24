/******************************************************************************

    This file was generated automatically from a DBC file by the dbctocpp
    utility, which is part of the StateCAN library,
    a component of SR-Libraries.

    https://github.com/msfrt/SR-Libraries

******************************************************************************/

#ifndef USERS_DAVEYONKERS_REPOSITORIES_ELECTRICAL_SR22_EMBEDDED_PDM_CAN_CAN1_HPP
#define USERS_DAVEYONKERS_REPOSITORIES_ELECTRICAL_SR22_EMBEDDED_PDM_CAN_CAN1_HPP

#include <FlexCAN_T4.h>
#include <StateCAN.h>

// Message: CMD_12 [0xd4]
StateSignal CMD_driverMessageChar0(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);
StateSignal CMD_driverMessageChar1(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);
StateSignal CMD_driverMessageChar2(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);
StateSignal CMD_driverMessageChar3(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);
StateSignal CMD_driverMessageChar4(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);
StateSignal CMD_driverMessageChar5(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);
StateSignal CMD_driverMessageChar6(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);
StateSignal CMD_driverMessageChar7(8, false, 1, 0.0, 0, 255, 0.0, 1000, 212);

// Message: CMD_11 [0xd3]
StateSignal CMD_driverNotificationLightB(8, false, 1, 0.0, 0, 255, 0.0, 1000, 211);
StateSignal CMD_driverNotificationLightG(8, false, 1, 0.0, 0, 255, 0.0, 1000, 211);
StateSignal CMD_driverNotificationLightR(8, false, 1, 0.0, 0, 255, 0.0, 1000, 211);

// Message: CMD_10 [0xd2]
StateSignal CMD_fanLeftOverride(8, true, 1, 0.0, 0, 100, -1, 1000, 210);
StateSignal CMD_fanRightOverride(8, true, 1, 0.0, 0, 100, -1, 1000, 210);
StateSignal CMD_waterPumpOverride(8, true, 1, 0.0, 0, 100, -1, 1000, 210);
StateSignal CMD_brakeLightOverride(8, true, 1, 0.0, 0, 100, -1, 1000, 210);

// Message: C50_gps [0x79]
StateSignal C50_gps_lat(32, true, 1, 0.0, -90, 90, 0.0, -1, 121);
StateSignal C50_gps_long(32, true, 1, 0.0, -180, 180, 0.0, -1, 121);

// Message: C50_m400Data [0x78]
StateSignal C50_m400ExhaustGasTemp4(16, true, 10, 0.0, 0, 0, 0.0, -1, 120);
StateSignal C50_m400ExhaustGasTemp1(16, true, 10, 0.0, 0, 0, 0.0, -1, 120);
StateSignal C50_mm5YawRate(16, true, 100, 0.0, 0, 0, 0.0, -1, 120);
StateSignal C50_m400ExhaustGasTemp2(16, true, 10, 0.0, 0, 0, 0.0, -1, 120);
StateSignal C50_tcSet(16, true, 1, 0.0, 0, 0, 0.0, -1, 120);
StateSignal C50_m400ExhaustGasTemp3(16, true, 10, 0.0, 0, 0, 0.0, -1, 120);

// Message: VCU_11 [0xa1]
StateSignal VCU_laptrigger(8, true, 1, 0.0, 0, 0, 0.0, -1, 161);

// Message: MM5_02 [0x17c]
StateSignal MM5_Az(16, false, -7849, -4.1745795, 0, 0, 0.0, -1, 380);

// Message: MM5_01 [0x178]
StateSignal MM5_rollRate(16, false, -200, 163.9, 0, 0, 0.0, -1, 376);
StateSignal MM5_Ax(16, false, -7849, 4.1745795, 0, 0, 0.0, -1, 376);

// Message: MM5_00 [0x174]
StateSignal MM5_yawRate(16, false, 200, -163.9, 0, 0, 0.0, -1, 372);
StateSignal MM5_Ay(16, false, -7849, 4.1745795, 0, 0, 0.0, -1, 372);

// Message: M400_dataSet2 [0x65]
StateSignal M400_oilTemp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_la1LongTermTrim(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ignEtComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ignBaseAdvance(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ign3Advance(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelUsed(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_fuelPressure(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelInjDutyCycle(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelEtComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelAtComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuel3IndivTrim(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_exhaustGasTemp4(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_exhaustGasTemp1(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_ecuCpuUsage(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_auxOut7DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_auxOut4DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_auxOut1DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_manifoldPressure(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ignMapComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ignComp1(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ign4Advance(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ign1Advance(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelStartingComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelLambdaComp(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_fuelFpComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelComp1(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuel4IndivTrim(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_fuel1IndivTrim(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_exhaustGasTemp2(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_ecuInternalTemp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_auxOut8DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_auxOut5DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_auxOut2DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_oilPressure(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_inletAirTemp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ignComp2(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ignAtComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_ign2Advance(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelTemp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelMapComp(16, true, 10, 0.0, 0, 0, 0.0, 1000, 101);
StateSignal M400_fuelFtComp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelComp2(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_fuelActualPulseW(16, true, 500, 0.0, -65, 65, 0.0, 1000, 101);
StateSignal M400_fuel2IndivTrim(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_exhaustGasTemp3(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_engineTemp(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 101);
StateSignal M400_batteryVoltage(16, true, 100, 0.0, -327, 327, 0.0, 1000, 101);
StateSignal M400_auxOut6DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);
StateSignal M400_auxOut3DutyCycle(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 101);

// Message: M400_dataSet1 [0x64]
StateSignal M400_la1AimValue(16, true, 1000, 0.0, -32, 32, 0.0, 1000, 100);
StateSignal M400_fuelCutLevelTotal(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_gear(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 100);
StateSignal M400_ignCutLevelTotal(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 100);
StateSignal M400_tcSlipAimError(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_tcIgnretard(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 100);
StateSignal M400_groundSpeed(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_driveSpeed(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_la1ShortTermTrim(16, true, 100, 0.0, -327, 327, 0.0, 1000, 100);
StateSignal M400_fuelOverallTrim(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_gearDet(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 100);
StateSignal M400_rpm(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 100);
StateSignal M400_tcSlipAimValue(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_tcLaunchAimRPM(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 100);
StateSignal M400_groundSpeedLeft(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_driveSpeedLeft(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_lambda1(16, true, 1000, 0.0, -32, 32, 0.0, 1000, 100);
StateSignal M400_ignOverallTrim(16, true, 1, 0.0, -32768, 32767, 0.0, 1000, 100);
StateSignal M400_gearSensorVoltage(16, true, 1000, 0.0, -32, 32, 0.0, 1000, 100);
StateSignal M400_throttlePosition(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_wheelSlip(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_tcPowerReduction(16, true, 10, 0.0, 0, 75, 0.0, 1000, 100);
StateSignal M400_groundSpeedRight(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);
StateSignal M400_driveSpeedRight(16, true, 10, 0.0, -3276, 3276, 0.0, 1000, 100);




/************************************************************************************

    Incoming CAN frame decoding functions

************************************************************************************/


/*
 * Decode a CAN frame for the message CMD_12
 * \param imsg A reference to the incoming CAN message frame
 */
void read_CMD_12(const CAN_message_t &imsg) {

	CMD_driverMessageChar0.set_can_value((imsg.buf[0]));
	CMD_driverMessageChar1.set_can_value((imsg.buf[1]));
	CMD_driverMessageChar2.set_can_value((imsg.buf[2]));
	CMD_driverMessageChar3.set_can_value((imsg.buf[3]));
	CMD_driverMessageChar4.set_can_value((imsg.buf[4]));
	CMD_driverMessageChar5.set_can_value((imsg.buf[5]));
	CMD_driverMessageChar6.set_can_value((imsg.buf[6]));
	CMD_driverMessageChar7.set_can_value((imsg.buf[7]));

}

/*
 * Decode a CAN frame for the message CMD_11
 * \param imsg A reference to the incoming CAN message frame
 */
void read_CMD_11(const CAN_message_t &imsg) {

	CMD_driverNotificationLightB.set_can_value((imsg.buf[0]));
	CMD_driverNotificationLightG.set_can_value((imsg.buf[1]));
	CMD_driverNotificationLightR.set_can_value((imsg.buf[2]));

}

/*
 * Decode a CAN frame for the message CMD_10
 * \param imsg A reference to the incoming CAN message frame
 */
void read_CMD_10(const CAN_message_t &imsg) {

	CMD_fanLeftOverride.set_can_value((imsg.buf[0]));
	CMD_fanRightOverride.set_can_value((imsg.buf[1]));
	CMD_waterPumpOverride.set_can_value((imsg.buf[2]));
	CMD_brakeLightOverride.set_can_value((imsg.buf[3]));

}

/*
 * Decode a CAN frame for the message C50_gps
 * \param imsg A reference to the incoming CAN message frame
 */
void read_C50_gps(const CAN_message_t &imsg) {

	C50_gps_lat.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8) | (imsg.buf[2] << 16) | (imsg.buf[3] << 24));
	C50_gps_long.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8) | (imsg.buf[6] << 16) | (imsg.buf[7] << 24));

}

/*
 * Decode a CAN frame for the message C50_m400Data
 * \param imsg A reference to the incoming CAN message frame
 */
void read_C50_m400Data(const CAN_message_t &imsg) {

	// multiplexer signal
	int C50rowCounterM400Data = imsg.buf[0];

	switch (C50rowCounterM400Data) {

		case 0:
			C50_m400ExhaustGasTemp1.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			C50_m400ExhaustGasTemp2.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			C50_m400ExhaustGasTemp3.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 1:
			C50_m400ExhaustGasTemp4.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			C50_mm5YawRate.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			C50_tcSet.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

	}

}

/*
 * Decode a CAN frame for the message VCU_11
 * \param imsg A reference to the incoming CAN message frame
 */
void read_VCU_11(const CAN_message_t &imsg) {

	VCU_laptrigger.set_can_value((imsg.buf[0]));

}

/*
 * Decode a CAN frame for the message MM5_02
 * \param imsg A reference to the incoming CAN message frame
 */
void read_MM5_02(const CAN_message_t &imsg) {

	MM5_Az.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message MM5_01
 * \param imsg A reference to the incoming CAN message frame
 */
void read_MM5_01(const CAN_message_t &imsg) {

	MM5_rollRate.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	MM5_Ax.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message MM5_00
 * \param imsg A reference to the incoming CAN message frame
 */
void read_MM5_00(const CAN_message_t &imsg) {

	MM5_yawRate.set_can_value((imsg.buf[0]) | (imsg.buf[1] << 8));
	MM5_Ay.set_can_value((imsg.buf[4]) | (imsg.buf[5] << 8));

}

/*
 * Decode a CAN frame for the message M400_dataSet2
 * \param imsg A reference to the incoming CAN message frame
 */
void read_M400_dataSet2(const CAN_message_t &imsg) {

	// multiplexer signal
	int M400_rowCounterDataSet2 = imsg.buf[0];

	switch (M400_rowCounterDataSet2) {

		case 0:
			M400_auxOut1DutyCycle.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_auxOut2DutyCycle.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_auxOut3DutyCycle.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 1:
			M400_auxOut4DutyCycle.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_auxOut5DutyCycle.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_auxOut6DutyCycle.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 2:
			M400_auxOut7DutyCycle.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_auxOut8DutyCycle.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_batteryVoltage.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 3:
			M400_ecuCpuUsage.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_ecuInternalTemp.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_engineTemp.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 4:
			M400_exhaustGasTemp1.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_exhaustGasTemp2.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_exhaustGasTemp3.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 5:
			M400_exhaustGasTemp4.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_fuel1IndivTrim.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_fuel2IndivTrim.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 6:
			M400_fuel3IndivTrim.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_fuel4IndivTrim.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_fuelActualPulseW.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 7:
			M400_fuelAtComp.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_fuelComp1.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_fuelComp2.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 8:
			M400_fuelEtComp.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_fuelFpComp.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_fuelFtComp.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 9:
			M400_fuelInjDutyCycle.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_fuelLambdaComp.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_fuelMapComp.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 10:
			M400_fuelPressure.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_fuelStartingComp.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_fuelTemp.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 11:
			M400_fuelUsed.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_ign1Advance.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_ign2Advance.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 12:
			M400_ign3Advance.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_ign4Advance.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_ignAtComp.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 13:
			M400_ignBaseAdvance.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_ignComp1.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_ignComp2.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 14:
			M400_ignEtComp.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_ignMapComp.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_inletAirTemp.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 15:
			M400_la1LongTermTrim.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_manifoldPressure.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_oilPressure.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 16:
			M400_oilTemp.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			break;

	}

}

/*
 * Decode a CAN frame for the message M400_dataSet1
 * \param imsg A reference to the incoming CAN message frame
 */
void read_M400_dataSet1(const CAN_message_t &imsg) {

	// multiplexer signal
	int M400_rowCounterDataSet1 = imsg.buf[0];

	switch (M400_rowCounterDataSet1) {

		case 0:
			M400_driveSpeed.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_driveSpeedLeft.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_driveSpeedRight.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 1:
			M400_groundSpeed.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_groundSpeedLeft.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_groundSpeedRight.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 2:
			M400_tcIgnretard.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_tcLaunchAimRPM.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_tcPowerReduction.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 3:
			M400_tcSlipAimError.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_tcSlipAimValue.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_wheelSlip.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 4:
			M400_ignCutLevelTotal.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_rpm.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_throttlePosition.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 5:
			M400_gear.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_gearDet.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_gearSensorVoltage.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 6:
			M400_fuelCutLevelTotal.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_fuelOverallTrim.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_ignOverallTrim.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

		case 7:
			M400_la1AimValue.set_can_value((imsg.buf[3]) | (imsg.buf[2] << 8));
			M400_la1ShortTermTrim.set_can_value((imsg.buf[5]) | (imsg.buf[4] << 8));
			M400_lambda1.set_can_value((imsg.buf[7]) | (imsg.buf[6] << 8));
			break;

	}

}




/************************************************************************************

    Distribute incoming messages to the correct decoding functions

************************************************************************************/


/*
 * Decode a CAN message for the bus captured in CAN1.dbc.
 * To more efficiently allocate microcontroller resources, simply comment
 * out unnecessary messages that do not need to be decoded.
 * \param imsg A reference to the incoming CAN frame
 */
void decode_CAN1(const CAN_message_t &imsg) {

	switch (imsg.id) {

		case 212:
			read_CMD_12(imsg);
			break;

		case 211:
			read_CMD_11(imsg);
			break;

		case 210:
			read_CMD_10(imsg);
			break;

		case 121:
			read_C50_gps(imsg);
			break;

		case 120:
			read_C50_m400Data(imsg);
			break;

		case 161:
			read_VCU_11(imsg);
			break;

		case 380:
			read_MM5_02(imsg);
			break;

		case 376:
			read_MM5_01(imsg);
			break;

		case 372:
			read_MM5_00(imsg);
			break;

		case 101:
			read_M400_dataSet2(imsg);
			break;

		case 100:
			read_M400_dataSet1(imsg);
			break;

	}
}


#endif
