/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UserInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UserInterface.h"
//## link itsAlertManager
#include "AlertManager.h"
//## link itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_UserInterface_UserInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class UserInterface
UserInterface::UserInterface(void) : itsAlertManager(NULL), itsSMSWTDSystemController(NULL) {
    NOTIFY_CONSTRUCTOR(UserInterface, UserInterface(), 0, SMSWTD_SYSTEM_DESIGN_UserInterface_UserInterface_SERIALIZE);
}

UserInterface::~UserInterface(void) {
    NOTIFY_DESTRUCTOR(~UserInterface, true);
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
            NOTIFY_RELATION_CLEARED("itsAlertManager");
            AlertManager* current = itsAlertManager;
            if(current != NULL)
                {
                    current->_removeItsUserInterface(this);
                }
            itsAlertManager = NULL;
        }
    if(itsSMSWTDSystemController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
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
    if(p_AlertManager != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlertManager", p_AlertManager, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlertManager");
        }
}

void UserInterface::_setItsAlertManager(AlertManager* p_AlertManager) {
    if(itsAlertManager != NULL)
        {
            itsAlertManager->_removeItsUserInterface(this);
        }
    __setItsAlertManager(p_AlertManager);
}

void UserInterface::_clearItsAlertManager(void) {
    NOTIFY_RELATION_CLEARED("itsAlertManager");
    itsAlertManager = NULL;
}

void UserInterface::__setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
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

void UserInterface::_setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController->_removeItsUserInterface(this);
        }
    __setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void UserInterface::_clearItsSMSWTDSystemController(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
    itsSMSWTDSystemController = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUserInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTDSystemController", false, true);
    if(myReal->itsSMSWTDSystemController)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTDSystemController);
        }
    aomsRelations->addRelation("itsAlertManager", false, true);
    if(myReal->itsAlertManager)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlertManager);
        }
}
//#]

IMPLEMENT_META_P(UserInterface, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedUserInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserInterface.cpp
*********************************************************************/
