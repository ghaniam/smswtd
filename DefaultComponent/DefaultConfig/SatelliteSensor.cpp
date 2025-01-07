/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSensor
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SatelliteSensor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SatelliteSensor_SatelliteSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SatelliteSensor
SatelliteSensor::SatelliteSensor(void) : Sensor() {
    NOTIFY_CONSTRUCTOR(SatelliteSensor, SatelliteSensor(), 0, SMSWTD_SYSTEM_DESIGN_SatelliteSensor_SatelliteSensor_SERIALIZE);
}

SatelliteSensor::~SatelliteSensor(void) {
    NOTIFY_DESTRUCTOR(~SatelliteSensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedSatelliteSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SatelliteSensor, SMSWTD_SYSTEM::DESIGN, false, Sensor, OMAnimatedSensor, OMAnimatedSatelliteSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.cpp
*********************************************************************/
