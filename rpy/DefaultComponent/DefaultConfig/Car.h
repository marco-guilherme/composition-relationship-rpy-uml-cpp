/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Sun, 1, Oct 2023  
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/

#ifndef Car_H
#define Car_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Relationship.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsEngine
#include "Engine.h"
//## package Relationship

//## class Car
// Esta classe possui um atributo chamado itsEngine do tipo Engine, indicando a composição.
class Car : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Car(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Car();
    
    ////    Operations    ////
    
    //## operation accelerate()
    void accelerate();
    
    //## operation brake()
    void brake();
    
    //## operation startCar()
    void startCar();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpString getBrand() const;
    
    //## auto_generated
    void setBrand(RhpString p_brand);
    
    //## auto_generated
    RhpString getModel() const;
    
    //## auto_generated
    void setModel(RhpString p_model);
    
    //## auto_generated
    Engine* getItsEngine() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    RhpString brand;		//## attribute brand
    
    RhpString model;		//## attribute model
    
    ////    Relations and components    ////
    
    Engine itsEngine;		//## link itsEngine
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // TurnOn:
    //## statechart_method
    inline bool TurnOn_IN() const;

protected :

//#[ ignore
    enum Car_Enum {
        OMNonState = 0,
        TurnOn = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Car::rootState_IN() const {
    return true;
}

inline bool Car::TurnOn_IN() const {
    return rootState_subState == TurnOn;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/
