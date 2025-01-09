/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PushNotificationModule
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\PushNotificationModule.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PushNotificationModule.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_PushNotificationModule_PushNotificationModule_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_SYSTEM_DESIGN_PushNotificationModule_setAlertType_OMString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alertType)

#define OMAnim_SMSWTD_SYSTEM_DESIGN_PushNotificationModule_setAlertType_OMString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class PushNotificationModule
//#[ ignore
PushNotificationModule::p_PushNotificationModule_AlertType_C::p_PushNotificationModule_AlertType_C(void) : OMString_alertType_ProxyFlowPropertyInterface(), _p_(0), itsOMString_alertType_ProxyFlowPropertyInterface(NULL) {
}

PushNotificationModule::p_PushNotificationModule_AlertType_C::~p_PushNotificationModule_AlertType_C(void) {
    cleanUpRelations();
}

void PushNotificationModule::p_PushNotificationModule_AlertType_C::connectPushNotificationModule(PushNotificationModule* part) {
    setItsOMString_alertType_ProxyFlowPropertyInterface(part);
    
}

OMString_alertType_ProxyFlowPropertyInterface* PushNotificationModule::p_PushNotificationModule_AlertType_C::getItsOMString_alertType_ProxyFlowPropertyInterface(void) {
    return this;
}

void PushNotificationModule::p_PushNotificationModule_AlertType_C::setAlertType(OMString p_alertType) {
    
    if (itsOMString_alertType_ProxyFlowPropertyInterface != NULL) {
        itsOMString_alertType_ProxyFlowPropertyInterface->setAlertType(p_alertType);
    }
    
}

void PushNotificationModule::p_PushNotificationModule_AlertType_C::setItsOMString_alertType_ProxyFlowPropertyInterface(OMString_alertType_ProxyFlowPropertyInterface* const p_OMString_alertType_ProxyFlowPropertyInterface) {
    itsOMString_alertType_ProxyFlowPropertyInterface = p_OMString_alertType_ProxyFlowPropertyInterface;
}

void PushNotificationModule::p_PushNotificationModule_AlertType_C::cleanUpRelations(void) {
    if(itsOMString_alertType_ProxyFlowPropertyInterface != NULL)
        {
            itsOMString_alertType_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

PushNotificationModule::PushNotificationModule(void) : OMString_alertType_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(PushNotificationModule, PushNotificationModule(), 0, SMSWTD_SYSTEM_DESIGN_PushNotificationModule_PushNotificationModule_SERIALIZE);
    initRelations();
}

PushNotificationModule::~PushNotificationModule(void) {
    NOTIFY_DESTRUCTOR(~PushNotificationModule, true);
}

//#[ ignore
void PushNotificationModule::setAlertType(OMString p_alertType) {
    if (alertType != p_alertType) {
        alertType = p_alertType;
        FLOW_DATA_RECEIVE("alertType", alertType, x2String);
    }
    
}
//#]

PushNotificationModule::p_PushNotificationModule_AlertType_C* PushNotificationModule::getP_PushNotificationModule_AlertType(void) const {
    return (PushNotificationModule::p_PushNotificationModule_AlertType_C*) &p_PushNotificationModule_AlertType;
}

PushNotificationModule::p_PushNotificationModule_AlertType_C* PushNotificationModule::get_p_PushNotificationModule_AlertType(void) const {
    return (PushNotificationModule::p_PushNotificationModule_AlertType_C*) &p_PushNotificationModule_AlertType;
}

const OMString PushNotificationModule::getAlertType(void) const {
    return alertType;
}

void PushNotificationModule::initRelations(void) {
    if (get_p_PushNotificationModule_AlertType() != NULL) {
        get_p_PushNotificationModule_AlertType()->connectPushNotificationModule(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPushNotificationModule::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("alertType", x2String(myReal->alertType));
}

void OMAnimatedPushNotificationModule::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(PushNotificationModule, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedPushNotificationModule)

IMPLEMENT_META_OP(OMAnimatedPushNotificationModule, SMSWTD_SYSTEM_DESIGN_PushNotificationModule_setAlertType_OMString, "setAlertType", FALSE, "setAlertType(OMString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_SYSTEM_DESIGN_PushNotificationModule_setAlertType_OMString, PushNotificationModule, setAlertType(p_alertType), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PushNotificationModule.cpp
*********************************************************************/
