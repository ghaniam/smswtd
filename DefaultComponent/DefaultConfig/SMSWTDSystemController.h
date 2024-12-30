/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTDSystemController
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SMSWTDSystemController.h
*********************************************************************/

#ifndef SMSWTDSystemController_H
#define SMSWTDSystemController_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "omcollec.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## link itsAlertManager
class AlertManager;

//## link itsDataStorage
class DataStorage;

//## link itsSensorManager
class SensorManager;

//## link itsUserInterface
class UserInterface;

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSWTDSystemController
class SMSWTDSystemController {
public :

//#[ ignore
    // port controlPort
    // Serves as an interaction point for external systems to control or monitor SMSWTD.
    //## package SMSWTD_SYSTEM::DESIGN
    class controlPort_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        controlPort_C(void);
        
        //## auto_generated
        virtual ~controlPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTDSystemController(SMSWTDSystemController* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    // port alertPort
    // Used for transmitting alerts to connected subsystems or modules.
    //## package SMSWTD_SYSTEM::DESIGN
    class alertPort_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        alertPort_C(void);
        
        //## auto_generated
        virtual ~alertPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTDSystemController(SMSWTDSystemController* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSWTDSystemController(void);
    
    //## auto_generated
    virtual ~SMSWTDSystemController(void);
    
    ////    Operations    ////
    
    // Sets up communication channels for alerts, including SMS, push notifications, or public broadcasts.
    //## operation configureChannels()
    virtual void configureChannels(void);
    
    // Processes incoming data from sensors to evaluate conditions.
    //## operation processData()
    virtual void processData(void);
    
    // Initiates the alert system to notify stakeholders based on configured parameters.
    //## operation triggerAlert()
    virtual void triggerAlert(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    controlPort_C* getControlPort(void) const;
    
    //## auto_generated
    controlPort_C* get_controlPort(void) const;
    
    //## auto_generated
    alertPort_C* getAlertPort(void) const;
    
    //## auto_generated
    alertPort_C* get_alertPort(void) const;
    
    //## auto_generated
    const RhpString getCurrentAlertLevel(void) const;
    
    //## auto_generated
    void setCurrentAlertLevel(const RhpString p_currentAlertLevel);
    
    //## auto_generated
    const bool getSystemStatus(void) const;
    
    //## auto_generated
    void setSystemStatus(const bool p_systemStatus);
    
    //## auto_generated
    const AlertManager* getItsAlertManager(void) const;
    
    //## auto_generated
    void setItsAlertManager(AlertManager* const p_AlertManager);
    
    //## auto_generated
    OMIterator<DataStorage*> getItsDataStorage(void) const;
    
    //## auto_generated
    void addItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void removeItsDataStorage(DataStorage* p_DataStorage);
    
    //## auto_generated
    void clearItsDataStorage(void);
    
    //## auto_generated
    OMIterator<SensorManager*> getItsSensorManager(void) const;
    
    //## auto_generated
    void addItsSensorManager(SensorManager* const p_SensorManager);
    
    //## auto_generated
    void removeItsSensorManager(SensorManager* p_SensorManager);
    
    //## auto_generated
    void clearItsSensorManager(void);
    
    //## auto_generated
    OMIterator<UserInterface*> getItsUserInterface(void) const;
    
    //## auto_generated
    void addItsUserInterface(UserInterface* const p_UserInterface);
    
    //## auto_generated
    void removeItsUserInterface(UserInterface* p_UserInterface);
    
    //## auto_generated
    void clearItsUserInterface(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    // Indicates the severity of the current alert, such as "Low," "Medium," or "High."
    RhpString currentAlertLevel;		//## attribute currentAlertLevel
    
    // Represents the current operational state of the system, such as "Active" or "Idle."
    bool systemStatus;		//## attribute systemStatus
    
    ////    Relations and components    ////
    
//#[ ignore
    controlPort_C controlPort;
    
    alertPort_C alertPort;
//#]

    AlertManager* itsAlertManager;		//## link itsAlertManager
    
    OMCollection<DataStorage*> itsDataStorage;		//## link itsDataStorage
    
    OMCollection<SensorManager*> itsSensorManager;		//## link itsSensorManager
    
    OMCollection<UserInterface*> itsUserInterface;		//## link itsUserInterface
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlertManager(AlertManager* const p_AlertManager);
    
    //## auto_generated
    void _setItsAlertManager(AlertManager* const p_AlertManager);
    
    //## auto_generated
    void _clearItsAlertManager(void);
    
    //## auto_generated
    void _addItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _removeItsDataStorage(DataStorage* const p_DataStorage);
    
    //## auto_generated
    void _clearItsDataStorage(void);
    
    //## auto_generated
    void _addItsSensorManager(SensorManager* const p_SensorManager);
    
    //## auto_generated
    void _removeItsSensorManager(SensorManager* const p_SensorManager);
    
    //## auto_generated
    void _clearItsSensorManager(void);
    
    //## auto_generated
    void _addItsUserInterface(UserInterface* const p_UserInterface);
    
    //## auto_generated
    void _removeItsUserInterface(UserInterface* const p_UserInterface);
    
    //## auto_generated
    void _clearItsUserInterface(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTDSystemController.h
*********************************************************************/
