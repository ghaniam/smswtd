/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//## auto_generated
#include "SMSWTD.h"
//## link itsCivilian
#include "Civilian.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsGovernment
#include "Government.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class SMSWTD
SMSWTD::SMSWTD(void) : itsCivilian(NULL), itsEnvironment(NULL), itsGovernment(NULL) {
}

SMSWTD::~SMSWTD(void) {
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
            const SMSWTD* p_SMSWTD = itsCivilian->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsCivilian->__setItsSMSWTD(NULL);
                }
            itsCivilian = NULL;
        }
    if(itsEnvironment != NULL)
        {
            const SMSWTD* p_SMSWTD = itsEnvironment->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsEnvironment->__setItsSMSWTD(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsGovernment != NULL)
        {
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
}

void SMSWTD::_setItsCivilian(Civilian* const p_Civilian) {
    if(itsCivilian != NULL)
        {
            itsCivilian->__setItsSMSWTD(NULL);
        }
    __setItsCivilian(p_Civilian);
}

void SMSWTD::_clearItsCivilian(void) {
    itsCivilian = NULL;
}

void SMSWTD::__setItsEnvironment(Environment* const p_Environment) {
    itsEnvironment = p_Environment;
}

void SMSWTD::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsSMSWTD(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void SMSWTD::_clearItsEnvironment(void) {
    itsEnvironment = NULL;
}

void SMSWTD::__setItsGovernment(Government* const p_Government) {
    itsGovernment = p_Government;
}

void SMSWTD::_setItsGovernment(Government* const p_Government) {
    if(itsGovernment != NULL)
        {
            itsGovernment->__setItsSMSWTD(NULL);
        }
    __setItsGovernment(p_Government);
}

void SMSWTD::_clearItsGovernment(void) {
    itsGovernment = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
