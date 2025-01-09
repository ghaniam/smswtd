/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Civilian
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Civilian.h
*********************************************************************/

#ifndef Civilian_H
#define Civilian_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor Civilian
class Civilian {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCivilian;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    Civilian(void);
    
    //## auto_generated
    ~Civilian(void);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);

private :

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCivilian : virtual public AOMInstance {
    DECLARE_META(Civilian, OMAnimatedCivilian)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Civilian.h
*********************************************************************/
