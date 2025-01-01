/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSModule
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSModule.h
*********************************************************************/

#ifndef SMSModule_H
#define SMSModule_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class SMSModule
class SMSModule {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSModule;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSModule(void);
    
    //## auto_generated
    ~SMSModule(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSModule : virtual public AOMInstance {
    DECLARE_META(SMSModule, OMAnimatedSMSModule)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSModule.h
*********************************************************************/
