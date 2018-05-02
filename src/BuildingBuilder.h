#pragma once
#include "Client.h"
#include "Building.h"
#include <string>
#include <memory>
using namespace std; 
class BuildingBuilder :
	public Client
{
public:
	BuildingBuilder();
	virtual void buildArea() = 0;
	virtual void buildWall() = 0;
	virtual void buildBody() = 0;
	virtual void buildSafety() = 0;
	virtual shared_ptr<Building> getBuilding() const = 0;
	~BuildingBuilder();
};

