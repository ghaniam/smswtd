/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderWaterSensor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UnderWaterSensor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_UnderWaterSensor_UnderWaterSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class UnderWaterSensor
UnderWaterSensor::UnderWaterSensor(void) : Sensor() {
    NOTIFY_CONSTRUCTOR(UnderWaterSensor, UnderWaterSensor(), 0, SMSWTD_SYSTEM_DESIGN_UnderWaterSensor_UnderWaterSensor_SERIALIZE);
}

UnderWaterSensor::~UnderWaterSensor(void) {
    NOTIFY_DESTRUCTOR(~UnderWaterSensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUnderWaterSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedUnderWaterSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(UnderWaterSensor, SMSWTD_SYSTEM::DESIGN, false, Sensor, OMAnimatedSensor, OMAnimatedUnderWaterSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.cpp
*********************************************************************/
