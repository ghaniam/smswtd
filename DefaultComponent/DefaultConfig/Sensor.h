/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## link itsSensorManager
class SensorManager;

//## package SMSWTD_SYSTEM::DESIGN

//## class Sensor
class Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensor(void);
    
    //## auto_generated
    ~Sensor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SensorManager* getItsSensorManager(void) const;
    
    //## auto_generated
    void setItsSensorManager(SensorManager* const p_SensorManager);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SensorManager* itsSensorManager;		//## link itsSensorManager
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSensorManager(SensorManager* const p_SensorManager);
    
    //## auto_generated
    void _setItsSensorManager(SensorManager* p_SensorManager);
    
    //## auto_generated
    void _clearItsSensorManager(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensor : virtual public AOMInstance {
    DECLARE_META(Sensor, OMAnimatedSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/
