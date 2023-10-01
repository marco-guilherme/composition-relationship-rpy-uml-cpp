/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Relationship
//!	Generated Date	: Sun, 1, Oct 2023  
	File Path	: DefaultComponent\DefaultConfig\Relationship.cpp
*********************************************************************/

//## auto_generated
#include "Relationship.h"
//## classInstance itsCar
#include "Car.h"
//## auto_generated
#include "Engine.h"
//## package Relationship


//## classInstance itsCar
Car itsCar;

void Relationship_initRelations() {
    {
        {
            itsCar.setShouldDelete(false);
        }
    }
}

bool Relationship_startBehavior() {
    bool done = true;
    done &= itsCar.startBehavior();
    return done;
}

//#[ ignore
Relationship_OMInitializer::Relationship_OMInitializer() {
    Relationship_initRelations();
    Relationship_startBehavior();
}

Relationship_OMInitializer::~Relationship_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Relationship.cpp
*********************************************************************/
