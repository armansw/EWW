#include "MeatFarmBuilder.h"



MeatFarmBuilder::MeatFarmBuilder()
{
}


void MeatFarmBuilder::buildArea() {
	farm->setArea(150);
}


void MeatFarmBuilder::buildBody() {
	farm->setBody("MeatFarm corps");
}


void MeatFarmBuilder::buildResource() {
	farm->setResource("Meat");
}


void MeatFarmBuilder::buildSafety() {
	farm->setSafety("Very low");
}


void MeatFarmBuilder::buildWall() {
	farm->setWall("Low-level weak wall");
}


void MeatFarmBuilder::buildWorkingPlace() {
	farm->setWorkingPlace("Animal farm");
}


shared_ptr<Building> MeatFarmBuilder::getBuilding() const {
	return this->farm;
}


MeatFarmBuilder::~MeatFarmBuilder()
{
}
