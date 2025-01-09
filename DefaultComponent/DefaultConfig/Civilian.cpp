/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Civilian
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Civilian.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Civilian.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Civilian_Civilian_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## actor Civilian
Civilian::Civilian(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Civilian, Civilian(), 0, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Civilian_Civilian_SERIALIZE);
}

Civilian::~Civilian(void) {
    NOTIFY_DESTRUCTOR(~Civilian, true);
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
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
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
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void Civilian::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsCivilian(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Civilian::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCivilian::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Civilian, SMSWTD_SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedCivilian)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Civilian.cpp
*********************************************************************/
