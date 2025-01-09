/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include "AircraftSensor.h"
//## classInstance itsAlertManager
#include "AlertManager.h"
//## auto_generated
#include "DataStorage.h"
//## auto_generated
#include "GovernmentChannels.h"
//## auto_generated
#include "PushNotificationModule.h"
//## auto_generated
#include "SatelliteSensor.h"
//## auto_generated
#include "Sensor.h"
//## auto_generated
#include "SensorManager.h"
//## auto_generated
#include "SMSModule.h"
//## classInstance itsSMSWTDSystemController
#include "SMSWTDSystemController.h"
//## auto_generated
#include "SocialMediaModule.h"
//## auto_generated
#include "UnderWaterSensor.h"
//## auto_generated
#include "UserInterface.h"
//#[ ignore
#define evDisasterDetection_SERIALIZE OM_NO_OP

#define evDisasterDetection_UNSERIALIZE OM_NO_OP

#define evDisasterDetection_CONSTRUCTOR evDisasterDetection()

#define evAlertGenerationComplete_SERIALIZE OM_NO_OP

#define evAlertGenerationComplete_UNSERIALIZE OM_NO_OP

#define evAlertGenerationComplete_CONSTRUCTOR evAlertGenerationComplete()

#define evAlertGenerationFailure_SERIALIZE OM_NO_OP

#define evAlertGenerationFailure_UNSERIALIZE OM_NO_OP

#define evAlertGenerationFailure_CONSTRUCTOR evAlertGenerationFailure()

#define evAlertDisseminationFailure_SERIALIZE OM_NO_OP

#define evAlertDisseminationFailure_UNSERIALIZE OM_NO_OP

#define evAlertDisseminationFailure_CONSTRUCTOR evAlertDisseminationFailure()

#define evAlertDisseminationComplete_SERIALIZE OM_NO_OP

#define evAlertDisseminationComplete_UNSERIALIZE OM_NO_OP

#define evAlertDisseminationComplete_CONSTRUCTOR evAlertDisseminationComplete()

#define evReset_SERIALIZE OM_NO_OP

#define evReset_UNSERIALIZE OM_NO_OP

#define evReset_CONSTRUCTOR evReset()

#define evErrorResolution_SERIALIZE OM_NO_OP

#define evErrorResolution_UNSERIALIZE OM_NO_OP

#define evErrorResolution_CONSTRUCTOR evErrorResolution()
//#]

//## package SMSWTD_SYSTEM::DESIGN


//## classInstance itsAlertManager
AlertManager itsAlertManager;

//## classInstance itsSMSWTDSystemController
SMSWTDSystemController itsSMSWTDSystemController;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN)
#endif // _OMINSTRUMENT

void DESIGN_initRelations(void) {
    {
        {
            itsAlertManager.setShouldDelete(false);
        }
    }
    {
        
        itsSMSWTDSystemController.get_p_SMSWTDSystemController_AlertType()->setItsOMString_alertType_ProxyFlowPropertyInterface(itsAlertManager.get_p_AlertManager_AlertType()->getItsOMString_alertType_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool DESIGN_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsAlertManager.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsSMSWTDSystemController, SMSWTDSystemController, "itsSMSWTDSystemController", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAlertManager, AlertManager, "itsAlertManager", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
DESIGN_OMInitializer::DESIGN_OMInitializer(void) {
    DESIGN_initRelations();
    (void) DESIGN_startBehavior();
}

DESIGN_OMInitializer::~DESIGN_OMInitializer(void) {
}
//#]

//## event evDisasterDetection()
evDisasterDetection::evDisasterDetection(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evDisasterDetection)
    setId(evDisasterDetection_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evDisasterDetection_DESIGN_SMSWTD_SYSTEM_id(23401);
//#]

IMPLEMENT_META_EVENT_P(evDisasterDetection, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evDisasterDetection())

//## event evAlertGenerationComplete()
evAlertGenerationComplete::evAlertGenerationComplete(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evAlertGenerationComplete)
    setId(evAlertGenerationComplete_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evAlertGenerationComplete_DESIGN_SMSWTD_SYSTEM_id(23402);
//#]

IMPLEMENT_META_EVENT_P(evAlertGenerationComplete, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evAlertGenerationComplete())

//## event evAlertGenerationFailure()
evAlertGenerationFailure::evAlertGenerationFailure(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evAlertGenerationFailure)
    setId(evAlertGenerationFailure_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evAlertGenerationFailure_DESIGN_SMSWTD_SYSTEM_id(23403);
//#]

IMPLEMENT_META_EVENT_P(evAlertGenerationFailure, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evAlertGenerationFailure())

//## event evAlertDisseminationFailure()
evAlertDisseminationFailure::evAlertDisseminationFailure(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evAlertDisseminationFailure)
    setId(evAlertDisseminationFailure_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evAlertDisseminationFailure_DESIGN_SMSWTD_SYSTEM_id(23404);
//#]

IMPLEMENT_META_EVENT_P(evAlertDisseminationFailure, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evAlertDisseminationFailure())

//## event evAlertDisseminationComplete()
evAlertDisseminationComplete::evAlertDisseminationComplete(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evAlertDisseminationComplete)
    setId(evAlertDisseminationComplete_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evAlertDisseminationComplete_DESIGN_SMSWTD_SYSTEM_id(23405);
//#]

IMPLEMENT_META_EVENT_P(evAlertDisseminationComplete, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evAlertDisseminationComplete())

//## event evReset()
evReset::evReset(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evReset)
    setId(evReset_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evReset_DESIGN_SMSWTD_SYSTEM_id(23406);
//#]

IMPLEMENT_META_EVENT_P(evReset, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evReset())

//## event evErrorResolution()
evErrorResolution::evErrorResolution(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorResolution)
    setId(evErrorResolution_DESIGN_SMSWTD_SYSTEM_id);
}

//#[ ignore
const IOxfEvent::ID evErrorResolution_DESIGN_SMSWTD_SYSTEM_id(23407);
//#]

IMPLEMENT_META_EVENT_P(evErrorResolution, SMSWTD_SYSTEM_DESIGN, SMSWTD_SYSTEM::DESIGN, evErrorResolution())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.cpp
*********************************************************************/
