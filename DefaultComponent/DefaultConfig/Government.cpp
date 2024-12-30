/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/

//## auto_generated
#include "Government.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor Government
Government::Government(void) : itsSMSWTD(NULL) {
}

Government::~Government(void) {
    cleanUpRelations();
}

const SMSWTD* Government::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Government::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsGovernment(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Government::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Government* p_Government = itsSMSWTD->getItsGovernment();
            if(p_Government != NULL)
                {
                    itsSMSWTD->__setItsGovernment(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Government::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Government::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsGovernment(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Government::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/
