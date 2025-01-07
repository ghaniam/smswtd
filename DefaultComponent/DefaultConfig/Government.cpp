/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Government_Government_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor Government
Government::Government(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Government, Government(), 0, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Government_Government_SERIALIZE);
}

Government::~Government(void) {
    NOTIFY_DESTRUCTOR(~Government, true);
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
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
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
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void Government::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsGovernment(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Government::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Government, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedGovernment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/
