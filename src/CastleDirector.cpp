#include "CastleDirector.h"



CastleDirector::CastleDirector()
{
}


CastleDirector::CastleDirector(shared_ptr<CastleBuilder >_castleBuilder) {
	this->castleBuilder = _castleBuilder;
}


void CastleDirector::MakeBuilding() {
	this->castleBuilder->buildArea();
	this->castleBuilder->buildBody();
	this->castleBuilder->buildSafety();
	this->castleBuilder->buildWall();
	this->castleBuilder->buildGate();
}


shared_ptr<Building> CastleDirector::getBuilding() {
	return this->castleBuilder->getBuilding();
}


CastleDirector::~CastleDirector()
{
}
