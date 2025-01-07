/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DisasterResponder
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DisasterResponder.h
*********************************************************************/

#ifndef DisasterResponder_H
#define DisasterResponder_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor DisasterResponder
class DisasterResponder {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisasterResponder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DisasterResponder(void);
    
    //## auto_generated
    ~DisasterResponder(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDisasterResponder : virtual public AOMInstance {
    DECLARE_META(DisasterResponder, OMAnimatedDisasterResponder)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DisasterResponder.h
*********************************************************************/
