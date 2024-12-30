/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserInterface
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\UserInterface.cpp
*********************************************************************/

//## auto_generated
#include "UserInterface.h"
//## link itsAlertManager
#include "AlertManager.h"
//## link itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class UserInterface
UserInterface::UserInterface(void) : itsAlertManager(NULL), itsSMSWTDSystemController(NULL) {
}

UserInterface::~UserInterface(void) {
    cleanUpRelations();
}

const AlertManager* UserInterface::getItsAlertManager(void) const {
    return itsAlertManager;
}

void UserInterface::setItsAlertManager(AlertManager* const p_AlertManager) {
    if(p_AlertManager != NULL)
        {
            p_AlertManager->_addItsUserInterface(this);
        }
    _setItsAlertManager(p_AlertManager);
}

const SMSWTDSystemController* UserInterface::getItsSMSWTDSystemController(void) const {
    return itsSMSWTDSystemController;
}

void UserInterface::setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    if(p_SMSWTDSystemController != NULL)
        {
            p_SMSWTDSystemController->_addItsUserInterface(this);
        }
    _setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void UserInterface::cleanUpRelations(void) {
    if(itsAlertManager != NULL)
        {
            AlertManager* current = itsAlertManager;
            if(current != NULL)
                {
                    current->_removeItsUserInterface(this);
                }
            itsAlertManager = NULL;
        }
    if(itsSMSWTDSystemController != NULL)
        {
            SMSWTDSystemController* current = itsSMSWTDSystemController;
            if(current != NULL)
                {
                    current->_removeItsUserInterface(this);
                }
            itsSMSWTDSystemController = NULL;
        }
}

void UserInterface::__setItsAlertManager(AlertManager* const p_AlertManager) {
    itsAlertManager = p_AlertManager;
}

void UserInterface::_setItsAlertManager(AlertManager* p_AlertManager) {
    if(itsAlertManager != NULL)
        {
            itsAlertManager->_removeItsUserInterface(this);
        }
    __setItsAlertManager(p_AlertManager);
}

void UserInterface::_clearItsAlertManager(void) {
    itsAlertManager = NULL;
}

void UserInterface::__setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    itsSMSWTDSystemController = p_SMSWTDSystemController;
}

void UserInterface::_setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController->_removeItsUserInterface(this);
        }
    __setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void UserInterface::_clearItsSMSWTDSystemController(void) {
    itsSMSWTDSystemController = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserInterface.cpp
*********************************************************************/
