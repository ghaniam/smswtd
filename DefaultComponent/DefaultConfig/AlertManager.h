/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertManager
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertManager.h
*********************************************************************/

#ifndef AlertManager_H
#define AlertManager_H

//## dependency ctime
#include <ctime>
//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "omcollec.h"
//## classInstance itsPushNotificationModule
#include "PushNotificationModule.h"
//## classInstance itsSMSModule
#include "SMSModule.h"
//## classInstance itsSocialMediaModule
#include "SocialMediaModule.h"
//## link itsGovernmentChannels
class GovernmentChannels;

//## link itsSMSWTDSystemController
class SMSWTDSystemController;

//## link itsUserInterface
class UserInterface;

//## package SMSWTD_SYSTEM::DESIGN

//## class AlertManager
class AlertManager : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlertManager;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit AlertManager(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~AlertManager(void);
    
    ////    Operations    ////
    
    //## operation clearErrorState()
    virtual void clearErrorState(void);
    
    // This operation disseminates the generated alerts to the specified channels. It returns true if the dissemination is successful and false if there are any failures.
    //## operation disseminateAlerts()
    virtual void disseminateAlerts(void);
    
    // This operation generates alerts based on input parameters like system status or detected conditions.
    //## operation generateAlerts()
    virtual void generateAlerts(void);
    
    //## operation logCompletion()
    virtual void logCompletion(void);
    
    //## operation logError()
    virtual void logError(void);
    
    //## operation notifyStakeholders()
    virtual void notifyStakeholders(void);
    
    //## operation resetForNextAlert()
    virtual void resetForNextAlert(void);
    
    //## operation selectChannels()
    virtual void selectChannels(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const RhpString getAlertPriority(void) const;
    
    //## auto_generated
    void setAlertPriority(const RhpString p_alertPriority);
    
    //## auto_generated
    const RhpString getPreviousState(void) const;
    
    //## auto_generated
    void setPreviousState(const RhpString p_previousState);
    
    //## auto_generated
    const bool getValidAlert(void) const;
    
    //## auto_generated
    void setValidAlert(const bool p_validAlert);
    
    //## auto_generated
    OMIterator<GovernmentChannels*> getItsGovernmentChannels(void) const;
    
    //## auto_generated
    void addItsGovernmentChannels(GovernmentChannels* const p_GovernmentChannels);
    
    //## auto_generated
    void removeItsGovernmentChannels(GovernmentChannels* p_GovernmentChannels);
    
    //## auto_generated
    void clearItsGovernmentChannels(void);
    
    //## auto_generated
    const PushNotificationModule* getItsPushNotificationModule(void) const;
    
    //## auto_generated
    const SMSModule* getItsSMSModule(void) const;
    
    //## auto_generated
    const SMSWTDSystemController* getItsSMSWTDSystemController(void) const;
    
    //## auto_generated
    void setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    const SocialMediaModule* getItsSocialMediaModule(void) const;
    
    //## auto_generated
    OMIterator<UserInterface*> getItsUserInterface(void) const;
    
    //## auto_generated
    void addItsUserInterface(UserInterface* const p_UserInterface);
    
    //## auto_generated
    void removeItsUserInterface(UserInterface* p_UserInterface);
    
    //## auto_generated
    void clearItsUserInterface(void);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    RhpString alertPriority;		//## attribute alertPriority
    
    RhpString previousState;		//## attribute previousState
    
    bool validAlert;		//## attribute validAlert
    
    ////    Relations and components    ////
    
    OMCollection<GovernmentChannels*> itsGovernmentChannels;		//## link itsGovernmentChannels
    
    PushNotificationModule itsPushNotificationModule;		//## classInstance itsPushNotificationModule
    
    SMSModule itsSMSModule;		//## classInstance itsSMSModule
    
    SMSWTDSystemController* itsSMSWTDSystemController;		//## link itsSMSWTDSystemController
    
    SocialMediaModule itsSocialMediaModule;		//## classInstance itsSocialMediaModule
    
    OMCollection<UserInterface*> itsUserInterface;		//## link itsUserInterface
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsGovernmentChannels(GovernmentChannels* const p_GovernmentChannels);
    
    //## auto_generated
    void _removeItsGovernmentChannels(GovernmentChannels* const p_GovernmentChannels);
    
    //## auto_generated
    void _clearItsGovernmentChannels(void);
    
    //## auto_generated
    void __setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    void _setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    void _clearItsSMSWTDSystemController(void);
    
    //## auto_generated
    void _addItsUserInterface(UserInterface* const p_UserInterface);
    
    //## auto_generated
    void _removeItsUserInterface(UserInterface* const p_UserInterface);
    
    //## auto_generated
    void _clearItsUserInterface(void);
    
    ////    Framework    ////
    
    //## auto_generated
    const int getAlertLevel(void) const;
    
    //## auto_generated
    void setAlertLevel(const int p_alertLevel);
    
    //## auto_generated
    const OMString getAlertMessage(void) const;
    
    //## auto_generated
    void setAlertMessage(const OMString p_alertMessage);
    
    //## auto_generated
    const OMString getAlertType(void) const;
    
    //## auto_generated
    void setAlertType(const OMString p_alertType);
    
    //## auto_generated
    const OMString getMessage(void) const;
    
    //## auto_generated
    void setMessage(const OMString p_message);

private :

    int alertLevel;		//## attribute alertLevel
    
    OMString alertMessage;		//## attribute alertMessage
    
    OMString alertType;		//## attribute alertType
    
    OMString message;		//## attribute message

public :

    //## auto_generated
    const bool getGovChannels(void) const;
    
    //## auto_generated
    void setGovChannels(const bool p_govChannels);
    
    //## auto_generated
    const bool getPushNotification(void) const;
    
    //## auto_generated
    void setPushNotification(const bool p_pushNotification);
    
    //## auto_generated
    const bool getSms(void) const;
    
    //## auto_generated
    void setSms(const bool p_sms);
    
    //## auto_generated
    const bool getSocialMedia(void) const;
    
    //## auto_generated
    void setSocialMedia(const bool p_socialMedia);

private :

    bool govChannels;		//## attribute govChannels
    
    bool pushNotification;		//## attribute pushNotification
    
    bool sms;		//## attribute sms
    
    bool socialMedia;		//## attribute socialMedia

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // Error:
    //## statechart_method
    inline RhpBoolean Error_IN(void) const;
    
    // Completed:
    //## statechart_method
    inline RhpBoolean Completed_IN(void) const;
    
    // AlertGenerated:
    //## statechart_method
    inline RhpBoolean AlertGenerated_IN(void) const;
    
    // AlertDissemination:
    //## statechart_method
    inline RhpBoolean AlertDissemination_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum AlertManager_Enum {
        OMNonState = 0,
        Idle = 1,
        Error = 2,
        Completed = 3,
        AlertGenerated = 4,
        AlertDissemination = 5
    };
//#]

private :

//#[ ignore
    AlertManager_Enum rootState_subState;
    
    AlertManager_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAlertManager : virtual public AOMInstance {
    DECLARE_REACTIVE_META(AlertManager, OMAnimatedAlertManager)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Error_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Completed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AlertGenerated_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AlertDissemination_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean AlertManager::rootState_IN(void) const {
    return true;
}

inline RhpBoolean AlertManager::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean AlertManager::Error_IN(void) const {
    return rootState_subState == Error;
}

inline RhpBoolean AlertManager::Completed_IN(void) const {
    return rootState_subState == Completed;
}

inline RhpBoolean AlertManager::AlertGenerated_IN(void) const {
    return rootState_subState == AlertGenerated;
}

inline RhpBoolean AlertManager::AlertDissemination_IN(void) const {
    return rootState_subState == AlertDissemination;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertManager.h
*********************************************************************/
