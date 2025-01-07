/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DESIGN
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DESIGN.h
*********************************************************************/

#ifndef DESIGN_H
#define DESIGN_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class AircraftSensor;

//## auto_generated
class AlertManager;

//## auto_generated
class DataStorage;

//## auto_generated
class GovernmentChannels;

//## auto_generated
class PushNotificationModule;

//## auto_generated
class SMSModule;

//## auto_generated
class SMSWTDSystemController;

//## auto_generated
class SatelliteSensor;

//## auto_generated
class Sensor;

//## auto_generated
class SensorManager;

//## auto_generated
class SocialMediaModule;

//## auto_generated
class UnderWaterSensor;

//## auto_generated
class UserInterface;

//## package SMSWTD_SYSTEM::DESIGN



//## event evDisasterDetection()
class evDisasterDetection : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDisasterDetection;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDisasterDetection(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDisasterDetection : virtual public AOMEvent {
    DECLARE_META_EVENT(evDisasterDetection)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evDisasterDetection_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evAlertGenerationComplete()
class evAlertGenerationComplete : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAlertGenerationComplete;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAlertGenerationComplete(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAlertGenerationComplete : virtual public AOMEvent {
    DECLARE_META_EVENT(evAlertGenerationComplete)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evAlertGenerationComplete_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evAlertGenerationFailure()
class evAlertGenerationFailure : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAlertGenerationFailure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAlertGenerationFailure(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAlertGenerationFailure : virtual public AOMEvent {
    DECLARE_META_EVENT(evAlertGenerationFailure)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evAlertGenerationFailure_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evAlertDisseminationFailure()
class evAlertDisseminationFailure : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAlertDisseminationFailure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAlertDisseminationFailure(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAlertDisseminationFailure : virtual public AOMEvent {
    DECLARE_META_EVENT(evAlertDisseminationFailure)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evAlertDisseminationFailure_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evAlertDisseminationComplete()
class evAlertDisseminationComplete : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAlertDisseminationComplete;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAlertDisseminationComplete(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAlertDisseminationComplete : virtual public AOMEvent {
    DECLARE_META_EVENT(evAlertDisseminationComplete)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evAlertDisseminationComplete_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evReset()
class evReset : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReset;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReset(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReset : virtual public AOMEvent {
    DECLARE_META_EVENT(evReset)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evReset_DESIGN_SMSWTD_SYSTEM_id;
//#]

//## event evErrorResolution()
class evErrorResolution : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorResolution;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorResolution(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorResolution : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorResolution)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorResolution_DESIGN_SMSWTD_SYSTEM_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DESIGN.h
*********************************************************************/
