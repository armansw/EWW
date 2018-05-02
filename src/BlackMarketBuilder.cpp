#include "BlackMarketBuilder.h"



BlackMarketBuilder::BlackMarketBuilder()
{
}


void BlackMarketBuilder::buildArea() {
	building->setArea(90);
}


void BlackMarketBuilder::buildBody() {
	building->setBody("BlackMarket corps");
}


void BlackMarketBuilder::buildSafety() {
	building->setSafety("Very High");
}


void BlackMarketBuilder::buildWall() {
	building->setWall("medium-level strong wall");
}


shared_ptr<Building> BlackMarketBuilder::getBuilding() const {
	return this->building;
}


BlackMarketBuilder::~BlackMarketBuilder()
{
}
