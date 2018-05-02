#pragma once
#include "Building.h"
#include "BuildingBuilder.h"
#include <memory>
using namespace std;
class BuildingDirector
{
public:
	BuildingDirector();
	BuildingDirector(shared_ptr<BuildingBuilder> _buildingBuilder);
	shared_ptr<Building> getBuilding();
	void MakeBuilding();
	~BuildingDirector();
private:
	shared_ptr<BuildingBuilder> buildingBuilder;
};

