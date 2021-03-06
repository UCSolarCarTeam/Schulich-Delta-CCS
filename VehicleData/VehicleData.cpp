/**
 *  Schulich Delta Central Communication System
 *  Made for the Mbed LPC-1768
 *  By Jordan Heinrichs for the University of Calgary Solar Car Team
 *
 *  Copyright (C) 2015 University of Calgary Solar Car Team
 *
 *  This file is part of the Schulich Delta Central Communication System
 *
 *  The Schulich Delta Central Communication System is free software: 
 *  you can redistribute it and/or modify it under the terms 
 *  of the GNU                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ,                                                                                                                                                                                                                                                                                                                                                     General Public License as published by 
 *  the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  The Schulich Delta Central Communication System is distributed 
 *  in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
 *  without even the implied warranty of MERCHANTABILITY or 
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ,                                                                                                                                                                                                                                                                                                                                                     
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ,                                                                                                                                                                                                                                                                                                                                                     General 
 *  Public License along with the Schulich Delta Central Communication 
 *  System. If not, see <http://www.gnu.org/licenses/>.
 *
 *  For further contact, email <software@calgarysolarcar.ca>
 */

#include <VehicleData.h>

VehicleData::VehicleData()
: reportedMotorCurrent(0.0f)
, driverSetCurrent(0.0f)
, driverSetCurrentPercentage(0.0f)
, driverSetSpeedRpm(0.0f)
, deadmanPressed(false)
, carDirection(VehicleData::Forward)
, busCurrent(0.0f)
, busVoltage(0.0f)
, vehicleVelocity(0.0f)
, motorVelocityRpm(0.0f)
, phaseCCurrent(0.0f)
, phaseBCurrent(0.0f)
, motorVoltageReal(0.0f)
, motorVoltageImaginary(0.0f)
, motorCurrentReal(0.0f)
, motorCurrentImaginary(0.0f)
, backEmfImaginary(0.0f)
, ipmHeatSinkTemp(0.0f)
, motorTemp(0.0f)
, dspBoardTemp(0.0f)
, dcBusAmpHours(0.0f)
, odometer(0.0f)
, motorOneReceivedErrorCount(0)
, motorOneTransmittedErrorCount(0)
, motorOneActiveMotor(0)
, motorOneErrorFlags(0)
, motorOneLimitFlags(0)
, motorTwoReceivedErrorCount(0)
, motorTwoTransmittedErrorCount(0)
, motorTwoActiveMotor(0)
, motorTwoErrorFlags(0)
, motorTwoLimitFlags(0)
, packStateOfCharge(0.0f)
, packStateOfChargePercentage(0.0f)
, balancePackStateOfCharge(0)
, balancePackStateOfChargePercentage(0)
, prechargeDriverStatusFlags(0)
, prechargeState(Idle)
, contactorSupplyVoltage(0)
, prechargeTimerElapsedFlag(0)
, prechargeTimerCounter(0)
, batteryVoltage(0)
, batteryCurrent(0)
, batteryVoltageThresholdRising(0)
, batteryVoltageThresholdFalling(0)
, bmuStatusFlagsExtended(0)
, fanSpeed0(0)
, fanSpeed1(0)
, fanCurrentConsumption(0)
, cmuCurrentConsumption(0)
, dynamicModeActivated(false)
, secondaryBatteryUnderVoltage(false)
, leftBlinkerActivated(false)
, rightBlinkerActivated(false)
, brakelightOn(false)
, hazardsActivated(false)
, arrayActivated(false)
, highVoltageActivated(false)
, overcurrentProtectionTripped(false)
, pc(USBTX, USBRX)
{
}
