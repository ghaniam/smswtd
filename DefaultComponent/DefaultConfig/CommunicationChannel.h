/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationChannel
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationChannel.h
*********************************************************************/

#ifndef CommunicationChannel_H
#define CommunicationChannel_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class CommunicationChannel
class CommunicationChannel {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationChannel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationChannel(void);
    
    //## auto_generated
    ~CommunicationChannel(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationChannel : virtual public AOMInstance {
    DECLARE_META(CommunicationChannel, OMAnimatedCommunicationChannel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationChannel.h
*********************************************************************/
