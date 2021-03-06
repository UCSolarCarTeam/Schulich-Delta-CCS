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
#include <LedBmuErrorOutputService.h>

namespace
{
   enum BmuErrorFlags
   {
      CellOverVoltage = 0x0001,
      CellUnderVoltage = 0x0002,
      CellOverTemperature = 0x0004,
      MeasurementUntrusted = 0x0008,
      CmuCommunicationsTimeout = 0x0010,
      VehicleCommunicationTimout = 0x0020,
      BmuInSetupMode = 0x0040,
      CmuCanPowerBusStatus = 0x0080,
      PackIsolationTestFailure = 0x0100,
      SocMeasurementIsNotValid = 0x0200,
      CanSupplyIsLow = 0x0400,
      ContactorIsStuck = 0x0800,
      CmuDetectedExtraCell = 0x1000
   };
}

LedBmuErrorOutputService::LedBmuErrorOutputService(VehicleData& vehicleData)
: vehicleData_(vehicleData)
, led1_(LED1)
, led2_(LED2)
, led3_(LED3)
, led4_(LED4)
{
    led1_ = 0;
    led2_ = 0;
    led3_ = 0;
    led4_ = 0;
}

void LedBmuErrorOutputService::updateLeds()
{
   led1_ = led1_.read() || vehicleData_.bmuStatusFlagsExtended & CellOverVoltage;
   led2_ = led2_.read() || vehicleData_.bmuStatusFlagsExtended & CellUnderVoltage;
   led3_ = led3_.read() || vehicleData_.bmuStatusFlagsExtended & CmuCommunicationsTimeout;
   led4_ = led4_.read() || vehicleData_.bmuStatusFlagsExtended & CanSupplyIsLow;
}
