#include "BuildingDirector.h"



BuildingDirector::BuildingDirector()
{
}


BuildingDirector::BuildingDirector(shared_ptr<BuildingBuilder >_buildingBuilder) {
	this->buildingBuilder = _buildingBuilder;
}


void BuildingDirector::MakeBuilding() {
	this->buildingBuilder->buildArea();
	this->buildingBuilder->buildBody();
	this->buildingBuilder->buildSafety();
	this->buildingBuilder->buildWall();
}


shared_ptr<Building> BuildingDirector::getBuilding() {
	return this->buildingBuilder->getBuilding();
}


BuildingDirector::~BuildingDirector()
{
}
