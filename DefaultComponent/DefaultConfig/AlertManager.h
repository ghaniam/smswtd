/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertManager
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\AlertManager.h
*********************************************************************/

#ifndef AlertManager_H
#define AlertManager_H

//## auto_generated
#include <oxf.h>
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
class AlertManager {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    AlertManager(void);
    
    //## auto_generated
    virtual ~AlertManager(void);
    
    ////    Operations    ////
    
    // This operation disseminates the generated alerts to the specified channels. It returns true if the dissemination is successful and false if there are any failures.
    //## operation disseminateAlerts()
    virtual void disseminateAlerts(void);
    
    //## operation generateAlerts()
    virtual void generateAlerts(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const RhpString getAlertPriority(void) const;
    
    //## auto_generated
    void setAlertPriority(const RhpString p_alertPriority);
    
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

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    RhpString alertPriority;		//## attribute alertPriority
    
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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertManager.h
*********************************************************************/
