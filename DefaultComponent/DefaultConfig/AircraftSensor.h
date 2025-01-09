/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftSensor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftSensor.h
*********************************************************************/

#ifndef AircraftSensor_H
#define AircraftSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## class AircraftSensor
#include "Sensor.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class AircraftSensor
class AircraftSensor : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAircraftSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AircraftSensor(void);
    
    //## auto_generated
    ~AircraftSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAircraftSensor : public OMAnimatedSensor {
    DECLARE_META(AircraftSensor, OMAnimatedAircraftSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftSensor.h
*********************************************************************/
