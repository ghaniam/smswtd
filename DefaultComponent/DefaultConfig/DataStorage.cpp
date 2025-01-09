/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataStorage
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataStorage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataStorage.h"
//## link itsSensorManager
#include "SensorManager.h"
//## link itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_DataStorage_DataStorage_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class DataStorage
DataStorage::DataStorage(void) : itsSMSWTDSystemController(NULL), itsSensorManager(NULL) {
    NOTIFY_CONSTRUCTOR(DataStorage, DataStorage(), 0, SMSWTD_SYSTEM_DESIGN_DataStorage_DataStorage_SERIALIZE);
}

DataStorage::~DataStorage(void) {
    NOTIFY_DESTRUCTOR(~DataStorage, true);
    cleanUpRelations();
}

const SMSWTDSystemController* DataStorage::getItsSMSWTDSystemController(void) const {
    return itsSMSWTDSystemController;
}

void DataStorage::setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    if(p_SMSWTDSystemController != NULL)
        {
            p_SMSWTDSystemController->_addItsDataStorage(this);
        }
    _setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

const SensorManager* DataStorage::getItsSensorManager(void) const {
    return itsSensorManager;
}

void DataStorage::setItsSensorManager(SensorManager* const p_SensorManager) {
    if(p_SensorManager != NULL)
        {
            p_SensorManager->_addItsDataStorage(this);
        }
    _setItsSensorManager(p_SensorManager);
}

void DataStorage::cleanUpRelations(void) {
    if(itsSMSWTDSystemController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
            SMSWTDSystemController* current = itsSMSWTDSystemController;
            if(current != NULL)
                {
                    current->_removeItsDataStorage(this);
                }
            itsSMSWTDSystemController = NULL;
        }
    if(itsSensorManager != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorManager");
            SensorManager* current = itsSensorManager;
            if(current != NULL)
                {
                    current->_removeItsDataStorage(this);
                }
            itsSensorManager = NULL;
        }
}

void DataStorage::__setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    itsSMSWTDSystemController = p_SMSWTDSystemController;
    if(p_SMSWTDSystemController != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTDSystemController", p_SMSWTDSystemController, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
        }
}

void DataStorage::_setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController->_removeItsDataStorage(this);
        }
    __setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void DataStorage::_clearItsSMSWTDSystemController(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
    itsSMSWTDSystemController = NULL;
}

void DataStorage::__setItsSensorManager(SensorManager* const p_SensorManager) {
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

void DataStorage::_setItsSensorManager(SensorManager* p_SensorManager) {
    if(itsSensorManager != NULL)
        {
            itsSensorManager->_removeItsDataStorage(this);
        }
    __setItsSensorManager(p_SensorManager);
}

void DataStorage::_clearItsSensorManager(void) {
    NOTIFY_RELATION_CLEARED("itsSensorManager");
    itsSensorManager = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataStorage::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensorManager", false, true);
    if(myReal->itsSensorManager)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorManager);
        }
    aomsRelations->addRelation("itsSMSWTDSystemController", false, true);
    if(myReal->itsSMSWTDSystemController)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTDSystemController);
        }
}
//#]

IMPLEMENT_META_P(DataStorage, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedDataStorage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataStorage.cpp
*********************************************************************/
