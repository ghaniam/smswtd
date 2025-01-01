/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SateliteSensor
//!	Generated Date	: Wed, 1, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SateliteSensor.h
*********************************************************************/

#ifndef SateliteSensor_H
#define SateliteSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## class SateliteSensor
#include "Sensor.h"
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## package SMSWTD_SYSTEM::DESIGN

//## class SateliteSensor
class SateliteSensor : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSateliteSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SateliteSensor(void);
    
    //## auto_generated
    ~SateliteSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSateliteSensor : public OMAnimatedSensor, virtual public AOMInstance {
    DECLARE_META(SateliteSensor, OMAnimatedSateliteSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SateliteSensor.h
*********************************************************************/
