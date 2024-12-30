/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernmentChannels
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.h
*********************************************************************/

#ifndef GovernmentChannels_H
#define GovernmentChannels_H

//## auto_generated
#include <oxf.h>
//## link itsAlertManager
class AlertManager;

//## package SMSWTD_SYSTEM::DESIGN

//## class GovernmentChannels
class GovernmentChannels {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    GovernmentChannels(void);
    
    //## auto_generated
    ~GovernmentChannels(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const AlertManager* getItsAlertManager(void) const;
    
    //## auto_generated
    void setItsAlertManager(AlertManager* const p_AlertManager);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    AlertManager* itsAlertManager;		//## link itsAlertManager
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlertManager(AlertManager* const p_AlertManager);
    
    //## auto_generated
    void _setItsAlertManager(AlertManager* p_AlertManager);
    
    //## auto_generated
    void _clearItsAlertManager(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.h
*********************************************************************/
