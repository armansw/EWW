#include "MineDirector.h"



MineDirector::MineDirector()
{
}


MineDirector::MineDirector(shared_ptr<MineBuilder> _mineBuilder) {
	mineBuilder = _mineBuilder;
}


void MineDirector::MakeBuilding() {
	this->mineBuilder->buildArea();
	this->mineBuilder->buildBody();
	this->mineBuilder->buildSafety();
	this->mineBuilder->buildWall();
	this->mineBuilder->buildResource();
	this->mineBuilder->buildSeperateMachine();
}


shared_ptr<Building> MineDirector::getBuilding() {
	return this->mineBuilder->getBuilding();
}


MineDirector::~MineDirector()
{
}
