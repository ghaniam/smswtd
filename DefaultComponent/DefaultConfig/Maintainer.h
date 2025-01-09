/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainer
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainer.h
*********************************************************************/

#ifndef Maintainer_H
#define Maintainer_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor Maintainer
class Maintainer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintainer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Maintainer(void);
    
    //## auto_generated
    ~Maintainer(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaintainer : virtual public AOMInstance {
    DECLARE_META(Maintainer, OMAnimatedMaintainer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainer.h
*********************************************************************/
