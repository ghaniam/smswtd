/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftSensor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AircraftSensor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_AircraftSensor_AircraftSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class AircraftSensor
AircraftSensor::AircraftSensor(void) : Sensor() {
    NOTIFY_CONSTRUCTOR(AircraftSensor, AircraftSensor(), 0, SMSWTD_SYSTEM_DESIGN_AircraftSensor_AircraftSensor_SERIALIZE);
}

AircraftSensor::~AircraftSensor(void) {
    NOTIFY_DESTRUCTOR(~AircraftSensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAircraftSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedAircraftSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(AircraftSensor, SMSWTD_SYSTEM::DESIGN, false, Sensor, OMAnimatedSensor, OMAnimatedAircraftSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftSensor.cpp
*********************************************************************/
