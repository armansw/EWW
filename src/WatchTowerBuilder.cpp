#include "WatchTowerBuilder.h"



WatchTowerBuilder::WatchTowerBuilder()
{
}


void WatchTowerBuilder::buildArea() {
	building->setArea(7);
}


void WatchTowerBuilder::buildBody() {
	building->setBody("WatchTower corps");
}


void WatchTowerBuilder::buildSafety() {
	building->setSafety("Very High");
}


void WatchTowerBuilder::buildWall() {
	building->setWall("High-level strong wall");
}


shared_ptr<Building> WatchTowerBuilder::getBuilding() const {
	return this->building;
}


WatchTowerBuilder::~WatchTowerBuilder()
{
}
