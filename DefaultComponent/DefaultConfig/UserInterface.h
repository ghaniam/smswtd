/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserInterface
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\UserInterface.h
*********************************************************************/

#ifndef UserInterface_H
#define UserInterface_H

//## auto_generated
#include <oxf.h>
//## link itsAlertManager
class AlertManager;

//## link itsSMSWTDSystemController
class SMSWTDSystemController;

//## package SMSWTD_SYSTEM::DESIGN

//## class UserInterface
class UserInterface {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    UserInterface(void);
    
    //## auto_generated
    ~UserInterface(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const AlertManager* getItsAlertManager(void) const;
    
    //## auto_generated
    void setItsAlertManager(AlertManager* const p_AlertManager);
    
    //## auto_generated
    const SMSWTDSystemController* getItsSMSWTDSystemController(void) const;
    
    //## auto_generated
    void setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    AlertManager* itsAlertManager;		//## link itsAlertManager
    
    SMSWTDSystemController* itsSMSWTDSystemController;		//## link itsSMSWTDSystemController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlertManager(AlertManager* const p_AlertManager);
    
    //## auto_generated
    void _setItsAlertManager(AlertManager* p_AlertManager);
    
    //## auto_generated
    void _clearItsAlertManager(void);
    
    //## auto_generated
    void __setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    void _setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController);
    
    //## auto_generated
    void _clearItsSMSWTDSystemController(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserInterface.h
*********************************************************************/
