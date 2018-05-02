#include "PrimalMineBuilder.h"



PrimalMineBuilder::PrimalMineBuilder()
{
}


void PrimalMineBuilder::buildArea() {
	mine->setArea(150);
}


void PrimalMineBuilder::buildBody() {
	mine->setBody("Primal mines");
}


void PrimalMineBuilder::buildSeperateMachine() {
	mine->setSeperateMachine("Primal Seperator");
}


void PrimalMineBuilder::buildSafety() {
	mine->setSafety("Low");
}


void PrimalMineBuilder::buildWall() {
	mine->setWall("Medium-level weak wall");
}


void PrimalMineBuilder::buildResource() {
	mine->setResource("Primal");
}


shared_ptr<Building> PrimalMineBuilder::getBuilding() const {
	return this->mine;
}


PrimalMineBuilder::~PrimalMineBuilder()
{
}
