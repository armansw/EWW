#include "CastleBuilder.h"



CastleBuilder::CastleBuilder()
{
}


void CastleBuilder::buildArea() {
	castle->setArea(250);
}


void CastleBuilder::buildBody() {
	castle->setBody("Castle corps");
}


void CastleBuilder::buildGate() {
	castle->setGate("High-level metal-made gate");
}


void CastleBuilder::buildSafety() {
	castle->setSafety("Very High");
}


void CastleBuilder::buildWall() {
	castle->setWall("High-level strong wall");
}


shared_ptr<Building> CastleBuilder::getBuilding() const {
	return this->castle;
}


CastleBuilder::~CastleBuilder()
{
}
