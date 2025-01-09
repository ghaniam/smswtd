/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainer
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Maintainer.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Maintainer_Maintainer_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor Maintainer
Maintainer::Maintainer(void) {
    NOTIFY_CONSTRUCTOR(Maintainer, Maintainer(), 0, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Maintainer_Maintainer_SERIALIZE);
}

Maintainer::~Maintainer(void) {
    NOTIFY_DESTRUCTOR(~Maintainer, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintainer::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Maintainer, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedMaintainer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/
