#include "FarmDirector.h"



FarmDirector::FarmDirector()
{
}


FarmDirector::FarmDirector(shared_ptr<FarmBuilder> _farmBuilder) {
	farmBuilder = _farmBuilder;
}


void FarmDirector::MakeBuilding() {
	this->farmBuilder->buildArea();
	this->farmBuilder->buildBody();
	this->farmBuilder->buildSafety();
	this->farmBuilder->buildWall();
	this->farmBuilder->buildResource();
}


shared_ptr<Building> FarmDirector::getBuilding() {
	return this->farmBuilder->getBuilding();
}


FarmDirector::~FarmDirector()
{
}
