/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertManager
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\AlertManager.cpp
*********************************************************************/

//## auto_generated
#include "AlertManager.h"
//## link itsGovernmentChannels
#include "GovernmentChannels.h"
//## link itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//## link itsUserInterface
#include "UserInterface.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class AlertManager
AlertManager::AlertManager(void) : itsSMSWTDSystemController(NULL) {
}

AlertManager::~AlertManager(void) {
    cleanUpRelations();
}

void AlertManager::disseminateAlerts(void) {
    //#[ operation disseminateAlerts()
    std::cout<<"AlertManager - disseminateAlerts()\n";
    alertPriority = "high";
    std::cout<<"AlertManager - the alert is transmitted\n";
    //#]
}

void AlertManager::generateAlerts(void) {
    //#[ operation generateAlerts()
    std::cout<<"AlertManager - generate Alert\n";
    alertPriority = "high";
    
    std::cout<<"AlertManager - alert is generated\n";
    //#]
}

const RhpString AlertManager::getAlertPriority(void) const {
    return alertPriority;
}

void AlertManager::setAlertPriority(const RhpString p_alertPriority) {
    alertPriority = p_alertPriority;
}

OMIterator<GovernmentChannels*> AlertManager::getItsGovernmentChannels(void) const {
    OMIterator<GovernmentChannels*> iter(itsGovernmentChannels);
    return iter;
}

void AlertManager::addItsGovernmentChannels(GovernmentChannels* const p_GovernmentChannels) {
    if(p_GovernmentChannels != NULL)
        {
            p_GovernmentChannels->_setItsAlertManager(this);
        }
    _addItsGovernmentChannels(p_GovernmentChannels);
}

void AlertManager::removeItsGovernmentChannels(GovernmentChannels* p_GovernmentChannels) {
    if(p_GovernmentChannels != NULL)
        {
            p_GovernmentChannels->__setItsAlertManager(NULL);
        }
    _removeItsGovernmentChannels(p_GovernmentChannels);
}

void AlertManager::clearItsGovernmentChannels(void) {
    OMIterator<GovernmentChannels*> iter(itsGovernmentChannels);
    while (*iter){
        (*iter)->_clearItsAlertManager();
        iter++;
    }
    _clearItsGovernmentChannels();
}

const PushNotificationModule* AlertManager::getItsPushNotificationModule(void) const {
    return &itsPushNotificationModule;
}

const SMSModule* AlertManager::getItsSMSModule(void) const {
    return &itsSMSModule;
}

const SMSWTDSystemController* AlertManager::getItsSMSWTDSystemController(void) const {
    return itsSMSWTDSystemController;
}

void AlertManager::setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    if(p_SMSWTDSystemController != NULL)
        {
            p_SMSWTDSystemController->_setItsAlertManager(this);
        }
    _setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

const SocialMediaModule* AlertManager::getItsSocialMediaModule(void) const {
    return &itsSocialMediaModule;
}

OMIterator<UserInterface*> AlertManager::getItsUserInterface(void) const {
    OMIterator<UserInterface*> iter(itsUserInterface);
    return iter;
}

void AlertManager::addItsUserInterface(UserInterface* const p_UserInterface) {
    if(p_UserInterface != NULL)
        {
            p_UserInterface->_setItsAlertManager(this);
        }
    _addItsUserInterface(p_UserInterface);
}

void AlertManager::removeItsUserInterface(UserInterface* p_UserInterface) {
    if(p_UserInterface != NULL)
        {
            p_UserInterface->__setItsAlertManager(NULL);
        }
    _removeItsUserInterface(p_UserInterface);
}

void AlertManager::clearItsUserInterface(void) {
    OMIterator<UserInterface*> iter(itsUserInterface);
    while (*iter){
        (*iter)->_clearItsAlertManager();
        iter++;
    }
    _clearItsUserInterface();
}

void AlertManager::cleanUpRelations(void) {
    {
        OMIterator<GovernmentChannels*> iter(itsGovernmentChannels);
        while (*iter){
            const AlertManager* p_AlertManager = (*iter)->getItsAlertManager();
            if(p_AlertManager != NULL)
                {
                    (*iter)->__setItsAlertManager(NULL);
                }
            iter++;
        }
        itsGovernmentChannels.removeAll();
    }
    if(itsSMSWTDSystemController != NULL)
        {
            const AlertManager* p_AlertManager = itsSMSWTDSystemController->getItsAlertManager();
            if(p_AlertManager != NULL)
                {
                    itsSMSWTDSystemController->__setItsAlertManager(NULL);
                }
            itsSMSWTDSystemController = NULL;
        }
    {
        OMIterator<UserInterface*> iter(itsUserInterface);
        while (*iter){
            const AlertManager* p_AlertManager = (*iter)->getItsAlertManager();
            if(p_AlertManager != NULL)
                {
                    (*iter)->__setItsAlertManager(NULL);
                }
            iter++;
        }
        itsUserInterface.removeAll();
    }
}

void AlertManager::_addItsGovernmentChannels(GovernmentChannels* const p_GovernmentChannels) {
    itsGovernmentChannels.add(p_GovernmentChannels);
}

void AlertManager::_removeItsGovernmentChannels(GovernmentChannels* const p_GovernmentChannels) {
    itsGovernmentChannels.remove(p_GovernmentChannels);
}

void AlertManager::_clearItsGovernmentChannels(void) {
    itsGovernmentChannels.removeAll();
}

void AlertManager::__setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    itsSMSWTDSystemController = p_SMSWTDSystemController;
}

void AlertManager::_setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController->__setItsAlertManager(NULL);
        }
    __setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void AlertManager::_clearItsSMSWTDSystemController(void) {
    itsSMSWTDSystemController = NULL;
}

void AlertManager::_addItsUserInterface(UserInterface* const p_UserInterface) {
    itsUserInterface.add(p_UserInterface);
}

void AlertManager::_removeItsUserInterface(UserInterface* const p_UserInterface) {
    itsUserInterface.remove(p_UserInterface);
}

void AlertManager::_clearItsUserInterface(void) {
    itsUserInterface.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertManager.cpp
*********************************************************************/
