#include "WheatFarmBuilder.h"



WheatFarmBuilder::WheatFarmBuilder()
{
}


void WheatFarmBuilder::buildArea() {
	farm->setArea(150);
}


void WheatFarmBuilder::buildBody() {
	farm->setBody("Bakery");
}


void WheatFarmBuilder::buildResource() {
	farm->setResource("Wheat");
}


void WheatFarmBuilder::buildSafety() {
	farm->setSafety("Very low");
}


void WheatFarmBuilder::buildWall() {
	farm->setWall("Low-level weak wall");
}


void WheatFarmBuilder::buildWorkingPlace() {
	farm->setWorkingPlace("Wheat plantation");
}


shared_ptr<Building> WheatFarmBuilder::getBuilding() const {
	return this->farm;
}


WheatFarmBuilder::~WheatFarmBuilder()
{
}
