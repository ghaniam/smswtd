/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteSensor
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SateliteSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SateliteSensor.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SateliteSensor_SateliteSensor_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SateliteSensor_SateliteSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SateliteSensor
SateliteSensor::SateliteSensor(void) : Sensor() {
    NOTIFY_CONSTRUCTOR(SateliteSensor, SateliteSensor(), 0, SMSWTD_SYSTEM_DESIGN_SateliteSensor_SateliteSensor_SERIALIZE);
}

SateliteSensor::~SateliteSensor(void) {
    NOTIFY_DESTRUCTOR(~SateliteSensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSateliteSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedSateliteSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SateliteSensor, SMSWTD_SYSTEM::DESIGN, false, Sensor, OMAnimatedSensor, OMAnimatedSateliteSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS

IMPLEMENT_META_P(SateliteSensor, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedSateliteSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteSensor.cpp
*********************************************************************/
