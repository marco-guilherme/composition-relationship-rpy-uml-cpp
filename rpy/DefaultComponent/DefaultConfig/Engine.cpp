/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Engine
//!	Generated Date	: Sun, 1, Oct 2023  
	File Path	: DefaultComponent\DefaultConfig\Engine.cpp
*********************************************************************/

//## auto_generated
#include "Engine.h"
//## link itsCar
#include "Car.h"
//## package Relationship

//## class Engine
Engine::Engine() {
    itsCar = NULL;
}

Engine::~Engine() {
    cleanUpRelations();
}

void Engine::start() {
    //#[ operation start()
    printf("Starting the engine\n");
    //#]
}

RhpInteger Engine::getPower() const {
    return power;
}

void Engine::setPower(RhpInteger p_power) {
    power = p_power;
}

RhpString Engine::getType() const {
    return type;
}

void Engine::setType(RhpString p_type) {
    type = p_type;
}

Car* Engine::getItsCar() const {
    return itsCar;
}

void Engine::setItsCar(Car* p_Car) {
    _setItsCar(p_Car);
}

void Engine::cleanUpRelations() {
    if(itsCar != NULL)
        {
            itsCar = NULL;
        }
}

void Engine::__setItsCar(Car* p_Car) {
    itsCar = p_Car;
}

void Engine::_setItsCar(Car* p_Car) {
    __setItsCar(p_Car);
}

void Engine::_clearItsCar() {
    itsCar = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Engine.cpp
*********************************************************************/
