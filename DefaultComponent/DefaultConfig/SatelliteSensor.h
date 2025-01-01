/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSensor
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.h
*********************************************************************/

#ifndef SatelliteSensor_H
#define SatelliteSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## class SatelliteSensor
#include "Sensor.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class SatelliteSensor
class SatelliteSensor : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SatelliteSensor(void);
    
    //## auto_generated
    ~SatelliteSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteSensor : public OMAnimatedSensor {
    DECLARE_META(SatelliteSensor, OMAnimatedSatelliteSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensor.h
*********************************************************************/
