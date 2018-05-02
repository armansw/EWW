#include "OxygenCenterBuilder.h"



OxygenCenterBuilder::OxygenCenterBuilder(){
}


void OxygenCenterBuilder::buildArea() {
	oxygenCenter->setArea(80);
}


void OxygenCenterBuilder::buildBody() {
	oxygenCenter->setBody("OxygenCenter corps");
}


void OxygenCenterBuilder::buildSafety() {
	oxygenCenter->setSafety("High");
}


void OxygenCenterBuilder::buildWall() {
	oxygenCenter->setWall("medium-level strong wall");
}


shared_ptr<Building> OxygenCenterBuilder::getBuilding() const {
	return this->oxygenCenter;
}


OxygenCenterBuilder::~OxygenCenterBuilder(){
}