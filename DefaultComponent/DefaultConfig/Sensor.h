/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf.h>
//## link itsSensorManager
class SensorManager;

//## package SMSWTD_SYSTEM::DESIGN

//## class Sensor
class Sensor {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/
