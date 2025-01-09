/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsCivilian
#include "Civilian.h"
//## link itsGovernment
#include "Government.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class SMSWTD
SMSWTD::SMSWTD(void) : itsEnvironment(NULL), itsCivilian(NULL), itsGovernment(NULL) {
    NOTIFY_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SMSWTD_SMSWTD_SERIALIZE);
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
}

const Civilian* SMSWTD::getItsCivilian(void) const {
    return itsCivilian;
}

void SMSWTD::setItsCivilian(Civilian* const p_Civilian) {
    if(p_Civilian != NULL)
        {
            p_Civilian->_setItsSMSWTD(this);
        }
    _setItsCivilian(p_Civilian);
}

const Environment* SMSWTD::getItsEnvironment(void) const {
    return itsEnvironment;
}

void SMSWTD::setItsEnvironment(Environment* const p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsSMSWTD(this);
        }
    _setItsEnvironment(p_Environment);
}

const Government* SMSWTD::getItsGovernment(void) const {
    return itsGovernment;
}

void SMSWTD::setItsGovernment(Government* const p_Government) {
    if(p_Government != NULL)
        {
            p_Government->_setItsSMSWTD(this);
        }
    _setItsGovernment(p_Government);
}

void SMSWTD::cleanUpRelations(void) {
    if(itsCivilian != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCivilian");
            const SMSWTD* p_SMSWTD = itsCivilian->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsCivilian->__setItsSMSWTD(NULL);
                }
            itsCivilian = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            const SMSWTD* p_SMSWTD = itsEnvironment->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsEnvironment->__setItsSMSWTD(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsGovernment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGovernment");
            const SMSWTD* p_SMSWTD = itsGovernment->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsGovernment->__setItsSMSWTD(NULL);
                }
            itsGovernment = NULL;
        }
}

void SMSWTD::__setItsCivilian(Civilian* const p_Civilian) {
    itsCivilian = p_Civilian;
    if(p_Civilian != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCivilian", p_Civilian, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCivilian");
        }
}

void SMSWTD::_setItsCivilian(Civilian* const p_Civilian) {
    if(itsCivilian != NULL)
        {
            itsCivilian->__setItsSMSWTD(NULL);
        }
    __setItsCivilian(p_Civilian);
}

void SMSWTD::_clearItsCivilian(void) {
    NOTIFY_RELATION_CLEARED("itsCivilian");
    itsCivilian = NULL;
}

void SMSWTD::__setItsEnvironment(Environment* const p_Environment) {
    itsEnvironment = p_Environment;
    if(p_Environment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironment", p_Environment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
        }
}

void SMSWTD::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsSMSWTD(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void SMSWTD::_clearItsEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void SMSWTD::__setItsGovernment(Government* const p_Government) {
    itsGovernment = p_Government;
    if(p_Government != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGovernment", p_Government, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGovernment");
        }
}

void SMSWTD::_setItsGovernment(Government* const p_Government) {
    if(itsGovernment != NULL)
        {
            itsGovernment->__setItsSMSWTD(NULL);
        }
    __setItsGovernment(p_Government);
}

void SMSWTD::_clearItsGovernment(void) {
    NOTIFY_RELATION_CLEARED("itsGovernment");
    itsGovernment = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsGovernment", false, true);
    if(myReal->itsGovernment)
        {
            aomsRelations->ADD_ITEM(myReal->itsGovernment);
        }
    aomsRelations->addRelation("itsCivilian", false, true);
    if(myReal->itsCivilian)
        {
            aomsRelations->ADD_ITEM(myReal->itsCivilian);
        }
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
}
//#]

IMPLEMENT_META_P(SMSWTD, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
