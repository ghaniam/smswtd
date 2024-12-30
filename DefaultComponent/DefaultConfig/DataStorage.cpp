/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataStorage
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataStorage.cpp
*********************************************************************/

//## auto_generated
#include "DataStorage.h"
//## link itsSensorManager
#include "SensorManager.h"
//## link itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class DataStorage
DataStorage::DataStorage(void) : itsSMSWTDSystemController(NULL), itsSensorManager(NULL) {
}

DataStorage::~DataStorage(void) {
    cleanUpRelations();
}

const SMSWTDSystemController* DataStorage::getItsSMSWTDSystemController(void) const {
    return itsSMSWTDSystemController;
}

void DataStorage::setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    itsSMSWTDSystemController = p_SMSWTDSystemController;
}

const SensorManager* DataStorage::getItsSensorManager(void) const {
    return itsSensorManager;
}

void DataStorage::setItsSensorManager(SensorManager* const p_SensorManager) {
    itsSensorManager = p_SensorManager;
}

void DataStorage::cleanUpRelations(void) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController = NULL;
        }
    if(itsSensorManager != NULL)
        {
            itsSensorManager = NULL;
        }
}

void DataStorage::__setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    itsSMSWTDSystemController = p_SMSWTDSystemController;
}

void DataStorage::_setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController->_removeItsDataStorage(this);
        }
    __setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void DataStorage::_clearItsSMSWTDSystemController(void) {
    itsSMSWTDSystemController = NULL;
}

void DataStorage::__setItsSensorManager(SensorManager* const p_SensorManager) {
    itsSensorManager = p_SensorManager;
}

void DataStorage::_setItsSensorManager(SensorManager* p_SensorManager) {
    if(itsSensorManager != NULL)
        {
            itsSensorManager->_removeItsDataStorage(this);
        }
    __setItsSensorManager(p_SensorManager);
}

void DataStorage::_clearItsSensorManager(void) {
    itsSensorManager = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataStorage.cpp
*********************************************************************/
