/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderWaterSensor
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.h
*********************************************************************/

#ifndef UnderWaterSensor_H
#define UnderWaterSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## class UnderWaterSensor
#include "Sensor.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class UnderWaterSensor
class UnderWaterSensor : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUnderWaterSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UnderWaterSensor(void);
    
    //## auto_generated
    ~UnderWaterSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUnderWaterSensor : public OMAnimatedSensor {
    DECLARE_META(UnderWaterSensor, OMAnimatedUnderWaterSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.h
*********************************************************************/
