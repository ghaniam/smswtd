/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorManager
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorManager.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorManager.h"
//## link itsDataStorage
#include "DataStorage.h"
//## link itsSensor
#include "Sensor.h"
//## link itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SensorManager_SensorManager_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_SensorManager_collectSensorData_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_SensorManager_validateSensorInput_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SensorManager
//#[ ignore
SensorManager::sensorInputPort_C::sensorInputPort_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SensorManager::sensorInputPort_C::~sensorInputPort_C(void) {
}

void SensorManager::sensorInputPort_C::connectSensorManager(SensorManager* part) {
}
//#]

SensorManager::SensorManager(void) : sensorStatus(true), itsSMSWTDSystemController(NULL) {
    NOTIFY_CONSTRUCTOR(SensorManager, SensorManager(), 0, SMSWTD_SYSTEM_DESIGN_SensorManager_SensorManager_SERIALIZE);
}

SensorManager::~SensorManager(void) {
    NOTIFY_DESTRUCTOR(~SensorManager, true);
    cleanUpRelations();
}

void SensorManager::collectSensorData(void) {
    NOTIFY_OPERATION(collectSensorData, collectSensorData(), 0, SMSWTD_SYSTEM_DESIGN_SensorManager_collectSensorData_SERIALIZE);
    //#[ operation collectSensorData()
    //#]
}

void SensorManager::validateSensorInput(void) {
    NOTIFY_OPERATION(validateSensorInput, validateSensorInput(), 0, SMSWTD_SYSTEM_DESIGN_SensorManager_validateSensorInput_SERIALIZE);
    //#[ operation validateSensorInput()
    //#]
}

SensorManager::sensorInputPort_C* SensorManager::getSensorInputPort(void) const {
    return (SensorManager::sensorInputPort_C*) &sensorInputPort;
}

SensorManager::sensorInputPort_C* SensorManager::get_sensorInputPort(void) const {
    return (SensorManager::sensorInputPort_C*) &sensorInputPort;
}

const bool SensorManager::getSensorStatus(void) const {
    return sensorStatus;
}

void SensorManager::setSensorStatus(const bool p_sensorStatus) {
    sensorStatus = p_sensorStatus;
}

OMIterator<DataStorage*> SensorManager::getItsDataStorage(void) const {
    OMIterator<DataStorage*> iter(itsDataStorage);
    return iter;
}

void SensorManager::addItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsSensorManager(this);
        }
    _addItsDataStorage(p_DataStorage);
}

void SensorManager::removeItsDataStorage(DataStorage* p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->__setItsSensorManager(NULL);
        }
    _removeItsDataStorage(p_DataStorage);
}

void SensorManager::clearItsDataStorage(void) {
    OMIterator<DataStorage*> iter(itsDataStorage);
    while (*iter){
        (*iter)->_clearItsSensorManager();
        iter++;
    }
    _clearItsDataStorage();
}

const SMSWTDSystemController* SensorManager::getItsSMSWTDSystemController(void) const {
    return itsSMSWTDSystemController;
}

void SensorManager::setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    if(p_SMSWTDSystemController != NULL)
        {
            p_SMSWTDSystemController->_addItsSensorManager(this);
        }
    _setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

OMIterator<Sensor*> SensorManager::getItsSensor(void) const {
    OMIterator<Sensor*> iter(itsSensor);
    return iter;
}

void SensorManager::addItsSensor(Sensor* const p_Sensor) {
    if(p_Sensor != NULL)
        {
            p_Sensor->_setItsSensorManager(this);
        }
    _addItsSensor(p_Sensor);
}

void SensorManager::removeItsSensor(Sensor* p_Sensor) {
    if(p_Sensor != NULL)
        {
            p_Sensor->__setItsSensorManager(NULL);
        }
    _removeItsSensor(p_Sensor);
}

void SensorManager::clearItsSensor(void) {
    OMIterator<Sensor*> iter(itsSensor);
    while (*iter){
        (*iter)->_clearItsSensorManager();
        iter++;
    }
    _clearItsSensor();
}

void SensorManager::cleanUpRelations(void) {
    {
        OMIterator<DataStorage*> iter(itsDataStorage);
        while (*iter){
            const SensorManager* p_SensorManager = (*iter)->getItsSensorManager();
            if(p_SensorManager != NULL)
                {
                    (*iter)->__setItsSensorManager(NULL);
                }
            iter++;
        }
        itsDataStorage.removeAll();
    }
    if(itsSMSWTDSystemController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
            SMSWTDSystemController* current = itsSMSWTDSystemController;
            if(current != NULL)
                {
                    current->_removeItsSensorManager(this);
                }
            itsSMSWTDSystemController = NULL;
        }
    {
        OMIterator<Sensor*> iter(itsSensor);
        while (*iter){
            const SensorManager* p_SensorManager = (*iter)->getItsSensorManager();
            if(p_SensorManager != NULL)
                {
                    (*iter)->__setItsSensorManager(NULL);
                }
            iter++;
        }
        itsSensor.removeAll();
    }
}

void SensorManager::_addItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataStorage", p_DataStorage, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataStorage");
        }
    itsDataStorage.add(p_DataStorage);
}

void SensorManager::_removeItsDataStorage(DataStorage* const p_DataStorage) {
    NOTIFY_RELATION_ITEM_REMOVED("itsDataStorage", p_DataStorage);
    itsDataStorage.remove(p_DataStorage);
}

void SensorManager::_clearItsDataStorage(void) {
    NOTIFY_RELATION_CLEARED("itsDataStorage");
    itsDataStorage.removeAll();
}

void SensorManager::__setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
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

void SensorManager::_setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController->_removeItsSensorManager(this);
        }
    __setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void SensorManager::_clearItsSMSWTDSystemController(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
    itsSMSWTDSystemController = NULL;
}

void SensorManager::_addItsSensor(Sensor* const p_Sensor) {
    if(p_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensor", p_Sensor, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensor");
        }
    itsSensor.add(p_Sensor);
}

void SensorManager::_removeItsSensor(Sensor* const p_Sensor) {
    NOTIFY_RELATION_ITEM_REMOVED("itsSensor", p_Sensor);
    itsSensor.remove(p_Sensor);
}

void SensorManager::_clearItsSensor(void) {
    NOTIFY_RELATION_CLEARED("itsSensor");
    itsSensor.removeAll();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorManager::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("sensorStatus", x2String(myReal->sensorStatus));
}

void OMAnimatedSensorManager::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTDSystemController", false, true);
    if(myReal->itsSMSWTDSystemController)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTDSystemController);
        }
    aomsRelations->addRelation("itsSensor", false, false);
    {
        OMIterator<Sensor*> iter(myReal->itsSensor);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsDataStorage", false, false);
    {
        OMIterator<DataStorage*> iter(myReal->itsDataStorage);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(SensorManager, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSensorManager)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorManager.cpp
*********************************************************************/
