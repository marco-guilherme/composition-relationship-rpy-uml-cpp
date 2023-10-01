I-Logix-RPY-Archive version 8.6.0 C++ 2071527
{ IProject 
	- _id = GUID 2ae9e9d0-e4e4-4057-a5fd-729dba9aa772;
	- _myState = 8192;
	- _name = "composition-relationship-rpy-uml-cpp";
	- _lastID = 1;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "Relationship.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "Relationship";
		- _id = GUID faac8cff-28bd-4552-b0d6-68f6b14af061;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID 43ea791e-1a87-4a70-a99b-2bb945789a6d;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ ISubsystem 
			- fileName = "Relationship";
			- _id = GUID faac8cff-28bd-4552-b0d6-68f6b14af061;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID 43ea791e-1a87-4a70-a99b-2bb945789a6d;
		}
	}
}

