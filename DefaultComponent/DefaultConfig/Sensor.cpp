/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensor.h"
//## link itsSensorManager
#include "SensorManager.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_Sensor_Sensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class Sensor
Sensor::Sensor(void) : itsSensorManager(NULL) {
    NOTIFY_CONSTRUCTOR(Sensor, Sensor(), 0, SMSWTD_SYSTEM_DESIGN_Sensor_Sensor_SERIALIZE);
}

Sensor::~Sensor(void) {
    NOTIFY_DESTRUCTOR(~Sensor, true);
    cleanUpRelations();
}

const SensorManager* Sensor::getItsSensorManager(void) const {
    return itsSensorManager;
}

void Sensor::setItsSensorManager(SensorManager* const p_SensorManager) {
    if(p_SensorManager != NULL)
        {
            p_SensorManager->_addItsSensor(this);
        }
    _setItsSensorManager(p_SensorManager);
}

void Sensor::cleanUpRelations(void) {
    if(itsSensorManager != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorManager");
            SensorManager* current = itsSensorManager;
            if(current != NULL)
                {
                    current->_removeItsSensor(this);
                }
            itsSensorManager = NULL;
        }
}

void Sensor::__setItsSensorManager(SensorManager* const p_SensorManager) {
    itsSensorManager = p_SensorManager;
    if(p_SensorManager != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensorManager", p_SensorManager, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensorManager");
        }
}

void Sensor::_setItsSensorManager(SensorManager* p_SensorManager) {
    if(itsSensorManager != NULL)
        {
            itsSensorManager->_removeItsSensor(this);
        }
    __setItsSensorManager(p_SensorManager);
}

void Sensor::_clearItsSensorManager(void) {
    NOTIFY_RELATION_CLEARED("itsSensorManager");
    itsSensorManager = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensorManager", false, true);
    if(myReal->itsSensorManager)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorManager);
        }
}
//#]

IMPLEMENT_META_P(Sensor, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/
