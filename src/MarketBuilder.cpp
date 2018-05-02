#include "MarketBuilder.h"



MarketBuilder::MarketBuilder()
{
}


void MarketBuilder::buildArea() {
	building->setArea(120);
}


void MarketBuilder::buildBody() {
	building->setBody("Market corps");
}


void MarketBuilder::buildSafety() {
	building->setSafety("High");
}


void MarketBuilder::buildWall() {
	building->setWall("medium-level strong wall");
}


shared_ptr<Building> MarketBuilder::getBuilding() const {
	return this->building;
}


MarketBuilder::~MarketBuilder()
{
}
