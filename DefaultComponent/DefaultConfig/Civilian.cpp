/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Civilian
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Civilian.cpp
*********************************************************************/

//## auto_generated
#include "Civilian.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor Civilian
Civilian::Civilian(void) : itsSMSWTD(NULL) {
}

Civilian::~Civilian(void) {
    cleanUpRelations();
}

const SMSWTD* Civilian::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Civilian::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsCivilian(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Civilian::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Civilian* p_Civilian = itsSMSWTD->getItsCivilian();
            if(p_Civilian != NULL)
                {
                    itsSMSWTD->__setItsCivilian(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Civilian::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Civilian::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsCivilian(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Civilian::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Civilian.cpp
*********************************************************************/
