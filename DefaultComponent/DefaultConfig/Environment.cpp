/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/

//## auto_generated
#include "Environment.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class Environment
Environment::Environment(void) : itsSMSWTD(NULL) {
}

Environment::~Environment(void) {
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
}

void Environment::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsEnvironment(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Environment::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/
