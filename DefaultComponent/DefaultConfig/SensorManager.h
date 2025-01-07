/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorManager
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorManager.h
*********************************************************************/

#ifndef SensorManager_H
#define SensorManager_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## auto_generated
#include "omcollec.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## link itsDataStorage
class DataStorage;

//## link itsSMSWTDSystemController
class SMSWTDSystemController;

//## link itsSensor
class Sensor;

//## package SMSWTD_SYSTEM::DESIGN

//## class SensorManager
class SensorManager {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN
    class sensorInputPort_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        sensorInputPort_C(void);
        
        //## auto_generated
        virtual ~sensorInputPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSensorManager(SensorManager* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorManager;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorManager(void);
    
    //## auto_generated
    virtual ~SensorManager(void);
    
    ////    Operations    ////
    
    //## operation collectSensorData()
    virtual void collectSensorData(void);
    
    //## operation validateSensorInput()
    virtual void validateSensorInput(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    sensorInputPort_C* getSensorInputPort(void) const;
    
    //## auto_generated
    sensorInputPort_C* get_sensorInputPort(void) const;
    
    //## auto_generated
    const bool getSensorStatus(void) const;
    
    //## auto_generated
    void setSensorStatus(const bool p_sensorStatus);
    
    //## auto_generated
    OMIterator<DataStorage*> getItsDataStorage(void) const;
    
    //## auto_generated
    void addItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void removeItsDataStorage(DataStorage* p_DataStorage);
    
    //## auto_generated
    void clearItsDataStorage(void);
    
    //## auto_generated
    const SMSWTDSystemController* getItsSMSWTDSystemController(void) const;
    
    //## auto_generated
    void setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    OMIterator<Sensor*> getItsSensor(void) const;
    
    //## auto_generated
    void addItsSensor(Sensor* const p_Sensor);
    
    //## auto_generated
    void removeItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void clearItsSensor(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    bool sensorStatus;		//## attribute sensorStatus
    
    ////    Relations and components    ////
    
    OMCollection<DataStorage*> itsDataStorage;		//## link itsDataStorage
    
    SMSWTDSystemController* itsSMSWTDSystemController;		//## link itsSMSWTDSystemController
    
    OMCollection<Sensor*> itsSensor;		//## link itsSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _removeItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage(void);
    
    //## auto_generated
    void __setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    void _setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController);
    
    //## auto_generated
    void _clearItsSMSWTDSystemController(void);
    
    //## auto_generated
    void _addItsSensor(Sensor* const p_Sensor);
    
    //## auto_generated
    void _removeItsSensor(Sensor* const p_Sensor);
    
    //## auto_generated
    void _clearItsSensor(void);

private :

//#[ ignore
    sensorInputPort_C sensorInputPort;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorManager : virtual public AOMInstance {
    DECLARE_META(SensorManager, OMAnimatedSensorManager)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorManager.h
*********************************************************************/
