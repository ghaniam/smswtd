/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Sensor.h"
//## link itsSensorManager
#include "SensorManager.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class Sensor
Sensor::Sensor(void) : itsSensorManager(NULL) {
}

Sensor::~Sensor(void) {
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
}

void Sensor::_setItsSensorManager(SensorManager* p_SensorManager) {
    if(itsSensorManager != NULL)
        {
            itsSensorManager->_removeItsSensor(this);
        }
    __setItsSensorManager(p_SensorManager);
}

void Sensor::_clearItsSensorManager(void) {
    itsSensorManager = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/
