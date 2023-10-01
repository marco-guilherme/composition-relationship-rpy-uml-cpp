/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Sun, 1, Oct 2023  
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Car.h"
//## package Relationship

//## class Car
Car::Car(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Car::~Car() {
}

void Car::accelerate() {
    //#[ operation accelerate()
    //#]
}

void Car::brake() {
    //#[ operation brake()
    //#]
}

void Car::startCar() {
    //#[ operation startCar()
    printf("Starting the car\n");
    
    itsEngine.start();
    //#]
}

RhpString Car::getBrand() const {
    return brand;
}

void Car::setBrand(RhpString p_brand) {
    brand = p_brand;
}

RhpString Car::getModel() const {
    return model;
}

void Car::setModel(RhpString p_model) {
    model = p_model;
}

Engine* Car::getItsEngine() const {
    return (Engine*) &itsEngine;
}

bool Car::startBehavior() {
    bool done = true;
    done &= OMReactive::startBehavior();
    return done;
}

void Car::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Car::rootState_entDef() {
    {
        rootState_subState = TurnOn;
        rootState_active = TurnOn;
        //#[ state ROOT.TurnOn.(Entry) 
        startCar();
        //#]
    }
}

IOxfReactive::TakeEventStatus Car::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/
