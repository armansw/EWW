#include "TomatoFarmBuilder.h"



TomatoFarmBuilder::TomatoFarmBuilder()
{
}


void TomatoFarmBuilder::buildArea() {
	farm->setArea(120);
}


void TomatoFarmBuilder::buildBody() {
	farm->setBody("Tomato Farm corps");
}


void TomatoFarmBuilder::buildResource() {
	farm->setResource("Tomatoes");
}


void TomatoFarmBuilder::buildSafety() {
	farm->setSafety("Very low");
}


void TomatoFarmBuilder::buildWall() {
	farm->setWall("Low-level weak wall");
}


void TomatoFarmBuilder::buildWorkingPlace() {
	farm->setWorkingPlace("Tomato plantation");
}


shared_ptr<Building> TomatoFarmBuilder::getBuilding() const {
	return this->farm;
}


TomatoFarmBuilder::~TomatoFarmBuilder()
{
}
