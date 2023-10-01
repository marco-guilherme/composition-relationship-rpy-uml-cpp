/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sun, 1, Oct 2023  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Relationship.h"
DefaultComponent::DefaultComponent() {
    Relationship_initRelations();
    Relationship_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            DefaultComponent initializer_DefaultComponent;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
