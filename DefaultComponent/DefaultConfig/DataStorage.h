/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataStorage
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\DataStorage.h
*********************************************************************/

#ifndef DataStorage_H
#define DataStorage_H

//## auto_generated
#include <oxf.h>
//## link itsSMSWTDSystemController
class SMSWTDSystemController;

//## link itsSensorManager
class SensorManager;

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class DataStorage
class DataStorage {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataStorage.h
*********************************************************************/
