/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernmentChannels
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.h
*********************************************************************/

#ifndef GovernmentChannels_H
#define GovernmentChannels_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## link itsAlertManager
class AlertManager;

//## package SMSWTD_SYSTEM::DESIGN

//## class GovernmentChannels
class GovernmentChannels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovernmentChannels;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovernmentChannels : virtual public AOMInstance {
    DECLARE_META(GovernmentChannels, OMAnimatedGovernmentChannels)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernmentChannels.h
*********************************************************************/
