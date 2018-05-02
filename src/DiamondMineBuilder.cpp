#include "DiamondMineBuilder.h"



DiamondMineBuilder::DiamondMineBuilder() {}


void DiamondMineBuilder::buildArea() {
	mine->setArea(180);
}


void DiamondMineBuilder::buildBody() {
	mine->setBody("Diamond mines");
}


void DiamondMineBuilder::buildSeperateMachine() {
	mine->setSeperateMachine("Diamond Seperator");
}


void DiamondMineBuilder::buildSafety() {
	mine->setSafety("Low");
}


void DiamondMineBuilder::buildWall() {
	mine->setWall("Medium-level weak wall");
}


void DiamondMineBuilder::buildResource() {
	mine->setResource("Diamond");
}


shared_ptr<Building> DiamondMineBuilder::getBuilding() const {
	return this->mine;
}


DiamondMineBuilder::~DiamondMineBuilder()
{
}
