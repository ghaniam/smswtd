/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernmentChannels
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.cpp
*********************************************************************/

//## auto_generated
#include "GovernmentChannels.h"
//## link itsAlertManager
#include "AlertManager.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class GovernmentChannels
GovernmentChannels::GovernmentChannels(void) : itsAlertManager(NULL) {
}

GovernmentChannels::~GovernmentChannels(void) {
    cleanUpRelations();
}

const AlertManager* GovernmentChannels::getItsAlertManager(void) const {
    return itsAlertManager;
}

void GovernmentChannels::setItsAlertManager(AlertManager* const p_AlertManager) {
    if(p_AlertManager != NULL)
        {
            p_AlertManager->_addItsGovernmentChannels(this);
        }
    _setItsAlertManager(p_AlertManager);
}

void GovernmentChannels::cleanUpRelations(void) {
    if(itsAlertManager != NULL)
        {
            AlertManager* current = itsAlertManager;
            if(current != NULL)
                {
                    current->_removeItsGovernmentChannels(this);
                }
            itsAlertManager = NULL;
        }
}

void GovernmentChannels::__setItsAlertManager(AlertManager* const p_AlertManager) {
    itsAlertManager = p_AlertManager;
}

void GovernmentChannels::_setItsAlertManager(AlertManager* p_AlertManager) {
    if(itsAlertManager != NULL)
        {
            itsAlertManager->_removeItsGovernmentChannels(this);
        }
    __setItsAlertManager(p_AlertManager);
}

void GovernmentChannels::_clearItsAlertManager(void) {
    itsAlertManager = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.cpp
*********************************************************************/
