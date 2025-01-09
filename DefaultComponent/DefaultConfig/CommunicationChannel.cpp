/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationChannel
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationChannel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationChannel.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_CommunicationChannel_CommunicationChannel_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class CommunicationChannel
CommunicationChannel::CommunicationChannel(void) {
    NOTIFY_CONSTRUCTOR(CommunicationChannel, CommunicationChannel(), 0, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_CommunicationChannel_CommunicationChannel_SERIALIZE);
}

CommunicationChannel::~CommunicationChannel(void) {
    NOTIFY_DESTRUCTOR(~CommunicationChannel, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationChannel::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(CommunicationChannel, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedCommunicationChannel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationChannel.cpp
*********************************************************************/
