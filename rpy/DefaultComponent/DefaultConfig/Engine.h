/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Engine
//!	Generated Date	: Sun, 1, Oct 2023  
	File Path	: DefaultComponent\DefaultConfig\Engine.h
*********************************************************************/

#ifndef Engine_H
#define Engine_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Relationship.h"
//## link itsCar
class Car;

//## package Relationship

//## class Engine
// Esta classe possui um atributo chamado itsCar do tipo Car.
class Engine {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Engine();
    
    //## auto_generated
    ~Engine();
    
    ////    Operations    ////
    
    //## operation start()
    void start();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpInteger getPower() const;
    
    //## auto_generated
    void setPower(RhpInteger p_power);
    
    //## auto_generated
    RhpString getType() const;
    
    //## auto_generated
    void setType(RhpString p_type);
    
    //## auto_generated
    Car* getItsCar() const;
    
    //## auto_generated
    void setItsCar(Car* p_Car);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    RhpInteger power;		//## attribute power
    
    RhpString type;		//## attribute type
    
    ////    Relations and components    ////
    
    Car* itsCar;		//## link itsCar
    
    ////    Framework operations    ////
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Engine.h
*********************************************************************/
