#include "UnitsCenterBuilder.h"



UnitsCenterBuilder::UnitsCenterBuilder()
{
}


void UnitsCenterBuilder::buildArea() {
	building->setArea(120);
}


void UnitsCenterBuilder::buildBody() {
	building->setBody("Market corps");
}


void UnitsCenterBuilder::buildSafety() {
	building->setSafety("High");
}


void UnitsCenterBuilder::buildWall() {
	building->setWall("medium-level strong wall");
}


shared_ptr<Building> UnitsCenterBuilder::getBuilding() const {
	return this->building;
}


UnitsCenterBuilder::~UnitsCenterBuilder()
{
}
