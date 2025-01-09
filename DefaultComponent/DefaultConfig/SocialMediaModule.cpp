/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SocialMediaModule
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SocialMediaModule.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SocialMediaModule.h"
//#[ ignore
#define SMSWTD_SYSTEM_DESIGN_SocialMediaModule_SocialMediaModule_SERIALIZE OM_NO_OP

#define OMAnim_SMSWTD_SYSTEM_DESIGN_SocialMediaModule_setAlertType_OMString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alertType)

#define OMAnim_SMSWTD_SYSTEM_DESIGN_SocialMediaModule_setAlertType_OMString_SERIALIZE_RET_VAL
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SocialMediaModule
//#[ ignore
SocialMediaModule::p_SocialMediaModule_AlertType_C::p_SocialMediaModule_AlertType_C(void) : OMString_alertType_ProxyFlowPropertyInterface(), _p_(0), itsOMString_alertType_ProxyFlowPropertyInterface(NULL) {
}

SocialMediaModule::p_SocialMediaModule_AlertType_C::~p_SocialMediaModule_AlertType_C(void) {
    cleanUpRelations();
}

void SocialMediaModule::p_SocialMediaModule_AlertType_C::connectSocialMediaModule(SocialMediaModule* part) {
    setItsOMString_alertType_ProxyFlowPropertyInterface(part);
    
}

OMString_alertType_ProxyFlowPropertyInterface* SocialMediaModule::p_SocialMediaModule_AlertType_C::getItsOMString_alertType_ProxyFlowPropertyInterface(void) {
    return this;
}

void SocialMediaModule::p_SocialMediaModule_AlertType_C::setAlertType(OMString p_alertType) {
    
    if (itsOMString_alertType_ProxyFlowPropertyInterface != NULL) {
        itsOMString_alertType_ProxyFlowPropertyInterface->setAlertType(p_alertType);
    }
    
}

void SocialMediaModule::p_SocialMediaModule_AlertType_C::setItsOMString_alertType_ProxyFlowPropertyInterface(OMString_alertType_ProxyFlowPropertyInterface* const p_OMString_alertType_ProxyFlowPropertyInterface) {
    itsOMString_alertType_ProxyFlowPropertyInterface = p_OMString_alertType_ProxyFlowPropertyInterface;
}

void SocialMediaModule::p_SocialMediaModule_AlertType_C::cleanUpRelations(void) {
    if(itsOMString_alertType_ProxyFlowPropertyInterface != NULL)
        {
            itsOMString_alertType_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SocialMediaModule::SocialMediaModule(void) : OMString_alertType_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(SocialMediaModule, SocialMediaModule(), 0, SMSWTD_SYSTEM_DESIGN_SocialMediaModule_SocialMediaModule_SERIALIZE);
    initRelations();
}

SocialMediaModule::~SocialMediaModule(void) {
    NOTIFY_DESTRUCTOR(~SocialMediaModule, true);
}

//#[ ignore
void SocialMediaModule::setAlertType(OMString p_alertType) {
    if (alertType != p_alertType) {
        alertType = p_alertType;
        FLOW_DATA_RECEIVE("alertType", alertType, x2String);
    }
    
}
//#]

SocialMediaModule::p_SocialMediaModule_AlertType_C* SocialMediaModule::getP_SocialMediaModule_AlertType(void) const {
    return (SocialMediaModule::p_SocialMediaModule_AlertType_C*) &p_SocialMediaModule_AlertType;
}

SocialMediaModule::p_SocialMediaModule_AlertType_C* SocialMediaModule::get_p_SocialMediaModule_AlertType(void) const {
    return (SocialMediaModule::p_SocialMediaModule_AlertType_C*) &p_SocialMediaModule_AlertType;
}

const OMString SocialMediaModule::getAlertType(void) const {
    return alertType;
}

void SocialMediaModule::initRelations(void) {
    if (get_p_SocialMediaModule_AlertType() != NULL) {
        get_p_SocialMediaModule_AlertType()->connectSocialMediaModule(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSocialMediaModule::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("alertType", x2String(myReal->alertType));
}

void OMAnimatedSocialMediaModule::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(SocialMediaModule, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, false, OMAnimatedSocialMediaModule)

IMPLEMENT_META_OP(OMAnimatedSocialMediaModule, SMSWTD_SYSTEM_DESIGN_SocialMediaModule_setAlertType_OMString, "setAlertType", FALSE, "setAlertType(OMString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_SYSTEM_DESIGN_SocialMediaModule_setAlertType_OMString, SocialMediaModule, setAlertType(p_alertType), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SocialMediaModule.cpp
*********************************************************************/
