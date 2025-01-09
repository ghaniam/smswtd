/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class Environment
Environment::Environment(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Environment_Environment_SERIALIZE);
}

Environment::~Environment(void) {
    NOTIFY_DESTRUCTOR(~Environment, true);
    cleanUpRelations();
}

const SMSWTD* Environment::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Environment::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsEnvironment(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Environment::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Environment* p_Environment = itsSMSWTD->getItsEnvironment();
            if(p_Environment != NULL)
                {
                    itsSMSWTD->__setItsEnvironment(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Environment::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void Environment::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsEnvironment(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Environment::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Environment, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/
