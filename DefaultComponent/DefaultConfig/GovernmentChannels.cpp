/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernmentChannels
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GovernmentChannels.h"
//## link itsAlertManager
#include "AlertManager.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_GovernmentChannels_GovernmentChannels_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class GovernmentChannels
GovernmentChannels::GovernmentChannels(void) : itsAlertManager(NULL) {
    NOTIFY_CONSTRUCTOR(GovernmentChannels, GovernmentChannels(), 0, SMSWTD_SYSTEM_DESIGN_GovernmentChannels_GovernmentChannels_SERIALIZE);
}

GovernmentChannels::~GovernmentChannels(void) {
    NOTIFY_DESTRUCTOR(~GovernmentChannels, true);
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
            NOTIFY_RELATION_CLEARED("itsAlertManager");
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
    if(p_AlertManager != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlertManager", p_AlertManager, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlertManager");
        }
}

void GovernmentChannels::_setItsAlertManager(AlertManager* p_AlertManager) {
    if(itsAlertManager != NULL)
        {
            itsAlertManager->_removeItsGovernmentChannels(this);
        }
    __setItsAlertManager(p_AlertManager);
}

void GovernmentChannels::_clearItsAlertManager(void) {
    NOTIFY_RELATION_CLEARED("itsAlertManager");
    itsAlertManager = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernmentChannels::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAlertManager", false, true);
    if(myReal->itsAlertManager)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlertManager);
        }
}
//#]

IMPLEMENT_META_P(GovernmentChannels, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedGovernmentChannels)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.cpp
*********************************************************************/
