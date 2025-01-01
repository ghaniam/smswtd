/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertManager
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertManager.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AlertManager.h"
//## link itsGovernmentChannels
#include "GovernmentChannels.h"
//## link itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//## link itsUserInterface
#include "UserInterface.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_AlertManager_AlertManager_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_AlertManager_clearErrorState_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_AlertManager_disseminateAlerts_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_AlertManager_generateAlerts_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_AlertManager_logCompletion_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_AlertManager_logError_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_AlertManager_resetForNextAlert_SERIALIZE OM_NO_OP

#define SMSWTD_SYSTEM_DESIGN_AlertManager_selectChannels_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class AlertManager
AlertManager::AlertManager(IOxfActive* const theActiveContext) : OMReactive(), validAlert(true), itsSMSWTDSystemController(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(AlertManager, AlertManager(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_AlertManager_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

AlertManager::~AlertManager(void) {
    NOTIFY_DESTRUCTOR(~AlertManager, true);
    cleanUpRelations();
}

void AlertManager::clearErrorState(void) {
    NOTIFY_OPERATION(clearErrorState, clearErrorState(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_clearErrorState_SERIALIZE);
    //#[ operation clearErrorState()
    //#]
}

void AlertManager::disseminateAlerts(void) {
    NOTIFY_OPERATION(disseminateAlerts, disseminateAlerts(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_disseminateAlerts_SERIALIZE);
    //#[ operation disseminateAlerts()
    std::cout<<"AlertManager - disseminateAlerts()\n";
    alertPriority = "high";
    std::cout<<"AlertManager - the alert is transmitted\n";
    //#]
}

void AlertManager::generateAlerts(void) {
    NOTIFY_OPERATION(generateAlerts, generateAlerts(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_generateAlerts_SERIALIZE);
    //#[ operation generateAlerts()
    std::cout<<"AlertManager - generate Alert\n";
    alertPriority = "high";
    
    std::cout<<"AlertManager - alert is generated\n";
    //#]
}

void AlertManager::logCompletion(void) {
    NOTIFY_OPERATION(logCompletion, logCompletion(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_logCompletion_SERIALIZE);
    //#[ operation logCompletion()
    //#]
}

void AlertManager::logError(void) {
    NOTIFY_OPERATION(logError, logError(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_logError_SERIALIZE);
    //#[ operation logError()
    //#]
}

void AlertManager::resetForNextAlert(void) {
    NOTIFY_OPERATION(resetForNextAlert, resetForNextAlert(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_resetForNextAlert_SERIALIZE);
    //#[ operation resetForNextAlert()
    //#]
}

void AlertManager::selectChannels(void) {
    NOTIFY_OPERATION(selectChannels, selectChannels(), 0, SMSWTD_SYSTEM_DESIGN_AlertManager_selectChannels_SERIALIZE);
    //#[ operation selectChannels()
    //#]
}

const RhpString AlertManager::getAlertPriority(void) const {
    return alertPriority;
}

void AlertManager::setAlertPriority(const RhpString p_alertPriority) {
    alertPriority = p_alertPriority;
}

const bool AlertManager::getValidAlert(void) const {
    return validAlert;
}

void AlertManager::setValidAlert(const bool p_validAlert) {
    validAlert = p_validAlert;
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

bool AlertManager::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void AlertManager::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
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
            NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
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
    if(p_GovernmentChannels != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGovernmentChannels", p_GovernmentChannels, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGovernmentChannels");
        }
    itsGovernmentChannels.add(p_GovernmentChannels);
}

void AlertManager::_removeItsGovernmentChannels(GovernmentChannels* const p_GovernmentChannels) {
    NOTIFY_RELATION_ITEM_REMOVED("itsGovernmentChannels", p_GovernmentChannels);
    itsGovernmentChannels.remove(p_GovernmentChannels);
}

void AlertManager::_clearItsGovernmentChannels(void) {
    NOTIFY_RELATION_CLEARED("itsGovernmentChannels");
    itsGovernmentChannels.removeAll();
}

void AlertManager::__setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
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

void AlertManager::_setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController) {
    if(itsSMSWTDSystemController != NULL)
        {
            itsSMSWTDSystemController->__setItsAlertManager(NULL);
        }
    __setItsSMSWTDSystemController(p_SMSWTDSystemController);
}

void AlertManager::_clearItsSMSWTDSystemController(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTDSystemController");
    itsSMSWTDSystemController = NULL;
}

void AlertManager::_addItsUserInterface(UserInterface* const p_UserInterface) {
    if(p_UserInterface != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUserInterface", p_UserInterface, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUserInterface");
        }
    itsUserInterface.add(p_UserInterface);
}

void AlertManager::_removeItsUserInterface(UserInterface* const p_UserInterface) {
    NOTIFY_RELATION_ITEM_REMOVED("itsUserInterface", p_UserInterface);
    itsUserInterface.remove(p_UserInterface);
}

void AlertManager::_clearItsUserInterface(void) {
    NOTIFY_RELATION_CLEARED("itsUserInterface");
    itsUserInterface.removeAll();
}

void AlertManager::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus AlertManager::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evDisasterDetection_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    //## transition 1 
                    if(validAlert)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.Idle");
                            //#[ transition 1 
                            generateAlerts();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.AlertGenerated");
                            rootState_subState = AlertGenerated;
                            rootState_active = AlertGenerated;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State AlertGenerated
        case AlertGenerated:
        {
            if(IS_EVENT_TYPE_OF(evAlertGenerationComplete_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.AlertGenerated");
                    //#[ transition 2 
                    selectChannels();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.AlertDissemination");
                    rootState_subState = AlertDissemination;
                    rootState_active = AlertDissemination;
                    //#[ state AlertDissemination.(Entry) 
                    disseminateAlerts();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evAlertGenerationFailure_DESIGN_SMSWTD_SYSTEM_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("3");
                        NOTIFY_STATE_EXITED("ROOT.AlertGenerated");
                        NOTIFY_STATE_ENTERED("ROOT.Error");
                        rootState_subState = Error;
                        rootState_active = Error;
                        //#[ state Error.(Entry) 
                        logError();
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("3");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State AlertDissemination
        case AlertDissemination:
        {
            if(IS_EVENT_TYPE_OF(evAlertDisseminationFailure_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.AlertDissemination");
                    NOTIFY_STATE_ENTERED("ROOT.Error");
                    rootState_subState = Error;
                    rootState_active = Error;
                    //#[ state Error.(Entry) 
                    logError();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evAlertDisseminationComplete_DESIGN_SMSWTD_SYSTEM_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("5");
                        NOTIFY_STATE_EXITED("ROOT.AlertDissemination");
                        NOTIFY_STATE_ENTERED("ROOT.Completed");
                        rootState_subState = Completed;
                        rootState_active = Completed;
                        //#[ state Completed.(Entry) 
                        logCompletion();
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("5");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State Error
        case Error:
        {
            if(IS_EVENT_TYPE_OF(evErrorResolution_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    //#[ state Error.(Exit) 
                    clearErrorState();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Error");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Completed
        case Completed:
        {
            if(IS_EVENT_TYPE_OF(evReset_DESIGN_SMSWTD_SYSTEM_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    //#[ state Completed.(Exit) 
                    resetForNextAlert();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Completed");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAlertManager::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("alertPriority", x2String(myReal->alertPriority));
    aomsAttributes->addAttribute("validAlert", x2String(myReal->validAlert));
}

void OMAnimatedAlertManager::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTDSystemController", false, true);
    if(myReal->itsSMSWTDSystemController)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTDSystemController);
        }
    aomsRelations->addRelation("itsGovernmentChannels", false, false);
    {
        OMIterator<GovernmentChannels*> iter(myReal->itsGovernmentChannels);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsSMSModule", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSMSModule);
    aomsRelations->addRelation("itsPushNotificationModule", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPushNotificationModule);
    aomsRelations->addRelation("itsSocialMediaModule", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSocialMediaModule);
    aomsRelations->addRelation("itsUserInterface", false, false);
    {
        OMIterator<UserInterface*> iter(myReal->itsUserInterface);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}

void OMAnimatedAlertManager::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case AlertManager::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case AlertManager::AlertGenerated:
        {
            AlertGenerated_serializeStates(aomsState);
        }
        break;
        case AlertManager::AlertDissemination:
        {
            AlertDissemination_serializeStates(aomsState);
        }
        break;
        case AlertManager::Error:
        {
            Error_serializeStates(aomsState);
        }
        break;
        case AlertManager::Completed:
        {
            Completed_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAlertManager::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedAlertManager::Error_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Error");
}

void OMAnimatedAlertManager::Completed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Completed");
}

void OMAnimatedAlertManager::AlertGenerated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AlertGenerated");
}

void OMAnimatedAlertManager::AlertDissemination_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AlertDissemination");
}
//#]

IMPLEMENT_REACTIVE_META_P(AlertManager, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedAlertManager)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertManager.cpp
*********************************************************************/
