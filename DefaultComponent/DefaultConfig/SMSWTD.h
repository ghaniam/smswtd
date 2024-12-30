/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245162
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Mon, 30, Dec 2024  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

//## auto_generated
#include <oxf.h>
//## link itsCivilian
class Civilian;

//## link itsEnvironment
class Environment;

//## link itsGovernment
class Government;

//## package SMSWTD_SYSTEM::ANALYSIS::SYSTEM_CONTEXT

//## class SMSWTD
class SMSWTD {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SMSWTD(void);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Civilian* getItsCivilian(void) const;
    
    //## auto_generated
    void setItsCivilian(Civilian* const p_Civilian);
    
    //## auto_generated
    const Environment* getItsEnvironment(void) const;
    
    //## auto_generated
    void setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    const Government* getItsGovernment(void) const;
    
    //## auto_generated
    void setItsGovernment(Government* const p_Government);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Civilian* itsCivilian;		//## link itsCivilian
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    Government* itsGovernment;		//## link itsGovernment
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCivilian(Civilian* const p_Civilian);
    
    //## auto_generated
    void _setItsCivilian(Civilian* const p_Civilian);
    
    //## auto_generated
    void _clearItsCivilian(void);
    
    //## auto_generated
    void __setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _clearItsEnvironment(void);
    
    //## auto_generated
    void __setItsGovernment(Government* const p_Government);
    
    //## auto_generated
    void _setItsGovernment(Government* const p_Government);
    
    //## auto_generated
    void _clearItsGovernment(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
