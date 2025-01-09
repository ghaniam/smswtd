/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataStorage
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataStorage.h
*********************************************************************/

#ifndef DataStorage_H
#define DataStorage_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## link itsSMSWTDSystemController
class SMSWTDSystemController;

//## link itsSensorManager
class SensorManager;

//## package SMSWTD_SYSTEM::DESIGN

//## class DataStorage
class DataStorage {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataStorage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataStorage(void);
    
    //## auto_generated
    ~DataStorage(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SMSWTDSystemController* getItsSMSWTDSystemController(void) const;
    
    //## auto_generated
    void setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    const SensorManager* getItsSensorManager(void) const;
    
    //## auto_generated
    void setItsSensorManager(SensorManager* const p_SensorManager);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTDSystemController* itsSMSWTDSystemController;		//## link itsSMSWTDSystemController
    
    SensorManager* itsSensorManager;		//## link itsSensorManager
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTDSystemController(SMSWTDSystemController* const p_SMSWTDSystemController);
    
    //## auto_generated
    void _setItsSMSWTDSystemController(SMSWTDSystemController* p_SMSWTDSystemController);
    
    //## auto_generated
    void _clearItsSMSWTDSystemController(void);
    
    //## auto_generated
    void __setItsSensorManager(SensorManager* const p_SensorManager);
    
    //## auto_generated
    void _setItsSensorManager(SensorManager* p_SensorManager);
    
    //## auto_generated
    void _clearItsSensorManager(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataStorage : virtual public AOMInstance {
    DECLARE_META(DataStorage, OMAnimatedDataStorage)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataStorage.h
*********************************************************************/
