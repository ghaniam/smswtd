/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSModule
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSModule.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSModule.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SMSModule_SMSModule_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_SYSTEM_DESIGN_SMSModule_setAlertType_OMString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alertType)

#define OMAnim_SMSWTD_SYSTEM_DESIGN_SMSModule_setAlertType_OMString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSModule
//#[ ignore
SMSModule::p_SMSModule_AlertType_C::p_SMSModule_AlertType_C(void) : OMString_alertType_ProxyFlowPropertyInterface(), _p_(0), itsOMString_alertType_ProxyFlowPropertyInterface(NULL) {
}

SMSModule::p_SMSModule_AlertType_C::~p_SMSModule_AlertType_C(void) {
    cleanUpRelations();
}

void SMSModule::p_SMSModule_AlertType_C::connectSMSModule(SMSModule* part) {
    setItsOMString_alertType_ProxyFlowPropertyInterface(part);
    
}

OMString_alertType_ProxyFlowPropertyInterface* SMSModule::p_SMSModule_AlertType_C::getItsOMString_alertType_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSModule::p_SMSModule_AlertType_C::setAlertType(OMString p_alertType) {
    
    if (itsOMString_alertType_ProxyFlowPropertyInterface != NULL) {
        itsOMString_alertType_ProxyFlowPropertyInterface->setAlertType(p_alertType);
    }
    
}

void SMSModule::p_SMSModule_AlertType_C::setItsOMString_alertType_ProxyFlowPropertyInterface(OMString_alertType_ProxyFlowPropertyInterface* const p_OMString_alertType_ProxyFlowPropertyInterface) {
    itsOMString_alertType_ProxyFlowPropertyInterface = p_OMString_alertType_ProxyFlowPropertyInterface;
}

void SMSModule::p_SMSModule_AlertType_C::cleanUpRelations(void) {
    if(itsOMString_alertType_ProxyFlowPropertyInterface != NULL)
        {
            itsOMString_alertType_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SMSModule::SMSModule(void) : OMString_alertType_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(SMSModule, SMSModule(), 0, SMSWTD_SYSTEM_DESIGN_SMSModule_SMSModule_SERIALIZE);
    initRelations();
}

SMSModule::~SMSModule(void) {
    NOTIFY_DESTRUCTOR(~SMSModule, true);
}

//#[ ignore
void SMSModule::setAlertType(OMString p_alertType) {
    if (alertType != p_alertType) {
        alertType = p_alertType;
        FLOW_DATA_RECEIVE("alertType", alertType, x2String);
    }
    
}
//#]

SMSModule::p_SMSModule_AlertType_C* SMSModule::getP_SMSModule_AlertType(void) const {
    return (SMSModule::p_SMSModule_AlertType_C*) &p_SMSModule_AlertType;
}

SMSModule::p_SMSModule_AlertType_C* SMSModule::get_p_SMSModule_AlertType(void) const {
    return (SMSModule::p_SMSModule_AlertType_C*) &p_SMSModule_AlertType;
}

const OMString SMSModule::getAlertType(void) const {
    return alertType;
}

void SMSModule::initRelations(void) {
    if (get_p_SMSModule_AlertType() != NULL) {
        get_p_SMSModule_AlertType()->connectSMSModule(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSModule::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("alertType", x2String(myReal->alertType));
}

void OMAnimatedSMSModule::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(SMSModule, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSMSModule)

IMPLEMENT_META_OP(OMAnimatedSMSModule, SMSWTD_SYSTEM_DESIGN_SMSModule_setAlertType_OMString, "setAlertType", FALSE, "setAlertType(OMString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_SYSTEM_DESIGN_SMSModule_setAlertType_OMString, SMSModule, setAlertType(p_alertType), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSModule.cpp
*********************************************************************/
