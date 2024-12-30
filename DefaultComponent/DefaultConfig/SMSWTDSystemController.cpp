/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTDSystemController
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SMSWTDSystemController.cpp
*********************************************************************/

//## auto_generated
#include "SMSWTDSystemController.h"
//## link itsAlertManager
#include "AlertManager.h"
//## link itsDataStorage
#include "DataStorage.h"
//## link itsSensorManager
#include "SensorManager.h"
//## link itsUserInterface
#include "UserInterface.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTDSystemController
//#[ ignore
SMSWTDSystemController::controlPort_C::controlPort_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SMSWTDSystemController::controlPort_C::~controlPort_C(void) {
}

void SMSWTDSystemController::controlPort_C::connectSMSWTDSystemController(SMSWTDSystemController* part) {
}

SMSWTDSystemController::alertPort_C::alertPort_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SMSWTDSystemController::alertPort_C::~alertPort_C(void) {
}

void SMSWTDSystemController::alertPort_C::connectSMSWTDSystemController(SMSWTDSystemController* part) {
}
//#]

SMSWTDSystemController::SMSWTDSystemController(void) : currentAlertLevel("low"), systemStatus(true), itsAlertManager(NULL) {
}

SMSWTDSystemController::~SMSWTDSystemController(void) {
    cleanUpRelations();
}

void SMSWTDSystemController::configureChannels(void) {
    //#[ operation configureChannels()
    //#]
}

void SMSWTDSystemController::processData(void) {
    //#[ operation processData()
    //#]
}

void SMSWTDSystemController::triggerAlert(void) {
    //#[ operation triggerAlert()
    //#]
}

SMSWTDSystemController::controlPort_C* SMSWTDSystemController::getControlPort(void) const {
    return (SMSWTDSystemController::controlPort_C*) &controlPort;
}

SMSWTDSystemController::controlPort_C* SMSWTDSystemController::get_controlPort(void) const {
    return (SMSWTDSystemController::controlPort_C*) &controlPort;
}

SMSWTDSystemController::alertPort_C* SMSWTDSystemController::getAlertPort(void) const {
    return (SMSWTDSystemController::alertPort_C*) &alertPort;
}

SMSWTDSystemController::alertPort_C* SMSWTDSystemController::get_alertPort(void) const {
    return (SMSWTDSystemController::alertPort_C*) &alertPort;
}

const RhpString SMSWTDSystemController::getCurrentAlertLevel(void) const {
    return currentAlertLevel;
}

void SMSWTDSystemController::setCurrentAlertLevel(const RhpString p_currentAlertLevel) {
    currentAlertLevel = p_currentAlertLevel;
}

const bool SMSWTDSystemController::getSystemStatus(void) const {
    return systemStatus;
}

void SMSWTDSystemController::setSystemStatus(const bool p_systemStatus) {
    systemStatus = p_systemStatus;
}

const AlertManager* SMSWTDSystemController::getItsAlertManager(void) const {
    return itsAlertManager;
}

void SMSWTDSystemController::setItsAlertManager(AlertManager* const p_AlertManager) {
    if(p_AlertManager != NULL)
        {
            p_AlertManager->_setItsSMSWTDSystemController(this);
        }
    _setItsAlertManager(p_AlertManager);
}

OMIterator<DataStorage*> SMSWTDSystemController::getItsDataStorage(void) const {
    OMIterator<DataStorage*> iter(itsDataStorage);
    return iter;
}

void SMSWTDSystemController::addItsDataStorage(DataStorage* const p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->_setItsSMSWTDSystemController(this);
        }
    _addItsDataStorage(p_DataStorage);
}

void SMSWTDSystemController::removeItsDataStorage(DataStorage* p_DataStorage) {
    if(p_DataStorage != NULL)
        {
            p_DataStorage->__setItsSMSWTDSystemController(NULL);
        }
    _removeItsDataStorage(p_DataStorage);
}

void SMSWTDSystemController::clearItsDataStorage(void) {
    OMIterator<DataStorage*> iter(itsDataStorage);
    while (*iter){
        (*iter)->_clearItsSMSWTDSystemController();
        iter++;
    }
    _clearItsDataStorage();
}

OMIterator<SensorManager*> SMSWTDSystemController::getItsSensorManager(void) const {
    OMIterator<SensorManager*> iter(itsSensorManager);
    return iter;
}

void SMSWTDSystemController::addItsSensorManager(SensorManager* const p_SensorManager) {
    if(p_SensorManager != NULL)
        {
            p_SensorManager->_setItsSMSWTDSystemController(this);
        }
    _addItsSensorManager(p_SensorManager);
}

void SMSWTDSystemController::removeItsSensorManager(SensorManager* p_SensorManager) {
    if(p_SensorManager != NULL)
        {
            p_SensorManager->__setItsSMSWTDSystemController(NULL);
        }
    _removeItsSensorManager(p_SensorManager);
}

void SMSWTDSystemController::clearItsSensorManager(void) {
    OMIterator<SensorManager*> iter(itsSensorManager);
    while (*iter){
        (*iter)->_clearItsSMSWTDSystemController();
        iter++;
    }
    _clearItsSensorManager();
}

OMIterator<UserInterface*> SMSWTDSystemController::getItsUserInterface(void) const {
    OMIterator<UserInterface*> iter(itsUserInterface);
    return iter;
}

void SMSWTDSystemController::addItsUserInterface(UserInterface* const p_UserInterface) {
    if(p_UserInterface != NULL)
        {
            p_UserInterface->_setItsSMSWTDSystemController(this);
        }
    _addItsUserInterface(p_UserInterface);
}

void SMSWTDSystemController::removeItsUserInterface(UserInterface* p_UserInterface) {
    if(p_UserInterface != NULL)
        {
            p_UserInterface->__setItsSMSWTDSystemController(NULL);
        }
    _removeItsUserInterface(p_UserInterface);
}

void SMSWTDSystemController::clearItsUserInterface(void) {
    OMIterator<UserInterface*> iter(itsUserInterface);
    while (*iter){
        (*iter)->_clearItsSMSWTDSystemController();
        iter++;
    }
    _clearItsUserInterface();
}

void SMSWTDSystemController::cleanUpRelations(void) {
    if(itsAlertManager != NULL)
        {
            const SMSWTDSystemController* p_SMSWTDSystemController = itsAlertManager->getItsSMSWTDSystemController();
            if(p_SMSWTDSystemController != NULL)
                {
                    itsAlertManager->__setItsSMSWTDSystemController(NULL);
                }
            itsAlertManager = NULL;
        }
    {
        OMIterator<DataStorage*> iter(itsDataStorage);
        while (*iter){
            const SMSWTDSystemController* p_SMSWTDSystemController = (*iter)->getItsSMSWTDSystemController();
            if(p_SMSWTDSystemController != NULL)
                {
                    (*iter)->__setItsSMSWTDSystemController(NULL);
                }
            iter++;
        }
        itsDataStorage.removeAll();
    }
    {
        OMIterator<SensorManager*> iter(itsSensorManager);
        while (*iter){
            const SMSWTDSystemController* p_SMSWTDSystemController = (*iter)->getItsSMSWTDSystemController();
            if(p_SMSWTDSystemController != NULL)
                {
                    (*iter)->__setItsSMSWTDSystemController(NULL);
                }
            iter++;
        }
        itsSensorManager.removeAll();
    }
    {
        OMIterator<UserInterface*> iter(itsUserInterface);
        while (*iter){
            const SMSWTDSystemController* p_SMSWTDSystemController = (*iter)->getItsSMSWTDSystemController();
            if(p_SMSWTDSystemController != NULL)
                {
                    (*iter)->__setItsSMSWTDSystemController(NULL);
                }
            iter++;
        }
        itsUserInterface.removeAll();
    }
}

void SMSWTDSystemController::__setItsAlertManager(AlertManager* const p_AlertManager) {
    itsAlertManager = p_AlertManager;
}

void SMSWTDSystemController::_setItsAlertManager(AlertManager* const p_AlertManager) {
    if(itsAlertManager != NULL)
        {
            itsAlertManager->__setItsSMSWTDSystemController(NULL);
        }
    __setItsAlertManager(p_AlertManager);
}

void SMSWTDSystemController::_clearItsAlertManager(void) {
    itsAlertManager = NULL;
}

void SMSWTDSystemController::_addItsDataStorage(DataStorage* const p_DataStorage) {
    itsDataStorage.add(p_DataStorage);
}

void SMSWTDSystemController::_removeItsDataStorage(DataStorage* const p_DataStorage) {
    itsDataStorage.remove(p_DataStorage);
}

void SMSWTDSystemController::_clearItsDataStorage(void) {
    itsDataStorage.removeAll();
}

void SMSWTDSystemController::_addItsSensorManager(SensorManager* const p_SensorManager) {
    itsSensorManager.add(p_SensorManager);
}

void SMSWTDSystemController::_removeItsSensorManager(SensorManager* const p_SensorManager) {
    itsSensorManager.remove(p_SensorManager);
}

void SMSWTDSystemController::_clearItsSensorManager(void) {
    itsSensorManager.removeAll();
}

void SMSWTDSystemController::_addItsUserInterface(UserInterface* const p_UserInterface) {
    itsUserInterface.add(p_UserInterface);
}

void SMSWTDSystemController::_removeItsUserInterface(UserInterface* const p_UserInterface) {
    itsUserInterface.remove(p_UserInterface);
}

void SMSWTDSystemController::_clearItsUserInterface(void) {
    itsUserInterface.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTDSystemController.cpp
*********************************************************************/
