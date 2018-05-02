#include "WallBuilder.h"



WallBuilder::WallBuilder()
{
}


void WallBuilder::buildArea() {
	building->setArea(5);
}


void WallBuilder::buildBody() {
	building->setBody("Wall corps");
}


void WallBuilder::buildSafety() {
	building->setSafety("Very High");
}


void WallBuilder::buildWall() {
	building->setWall("Highest-level strong wall");
}


shared_ptr<Building> WallBuilder::getBuilding() const {
	return this->building;
}


WallBuilder::~WallBuilder()
{
}
