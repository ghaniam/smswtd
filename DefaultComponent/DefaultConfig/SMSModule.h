/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245167
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSModule
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSModule.h
*********************************************************************/

#ifndef SMSModule_H
#define SMSModule_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DESIGN.h"
//## class SMSModule
#include "OMString_alertType_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_SMSWTD_SYSTEM_DESIGN_SMSModule_setAlertType_OMString_ARGS_DECLARATION OMString p_alertType;
//#]

//## package SMSWTD_SYSTEM::DESIGN

//## class SMSModule
class SMSModule : public OMString_alertType_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSWTD_SYSTEM::DESIGN
    class p_SMSModule_AlertType_C : public OMString_alertType_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSModule_AlertType_C(void);
        
        //## auto_generated
        virtual ~p_SMSModule_AlertType_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSModule(SMSModule* part);
        
        //## auto_generated
        OMString_alertType_ProxyFlowPropertyInterface* getItsOMString_alertType_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setAlertType(OMString p_alertType);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsOMString_alertType_ProxyFlowPropertyInterface(OMString_alertType_ProxyFlowPropertyInterface* const p_OMString_alertType_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMString_alertType_ProxyFlowPropertyInterface* itsOMString_alertType_ProxyFlowPropertyInterface;		//## link itsOMString_alertType_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSModule;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSModule(void);
    
    //## auto_generated
    ~SMSModule(void);
    
//#[ ignore
    void setAlertType(OMString p_alertType);
//#]

    //## auto_generated
    p_SMSModule_AlertType_C* getP_SMSModule_AlertType(void) const;
    
    //## auto_generated
    p_SMSModule_AlertType_C* get_p_SMSModule_AlertType(void) const;
    
    //## auto_generated
    const OMString getAlertType(void) const;

protected :

    //## auto_generated
    void initRelations(void);

private :

    OMString alertType;		//## attribute alertType
    
//#[ ignore
    p_SMSModule_AlertType_C p_SMSModule_AlertType;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_SYSTEM_DESIGN_SMSModule_setAlertType_OMString)

//#[ ignore
class OMAnimatedSMSModule : virtual public AOMInstance {
    DECLARE_META(SMSModule, OMAnimatedSMSModule)
    
    DECLARE_META_OP(SMSWTD_SYSTEM_DESIGN_SMSModule_setAlertType_OMString)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSModule.h
*********************************************************************/
