#include "BankDirector.h"



BankDirector::BankDirector()
{
}


BankDirector::BankDirector(shared_ptr<BankBuilder> _bankBuilder) {
	this->bankBuilder = _bankBuilder;
}


void BankDirector::MakeBuilding() {
	this->bankBuilder->buildArea();
	this->bankBuilder->buildBody();
	this->bankBuilder->buildSafety();
	this->bankBuilder->buildWall();
	this->bankBuilder->buildSafe();
}


shared_ptr<Building> BankDirector::getBuilding() {
	return this->bankBuilder->getBuilding();
}


BankDirector::~BankDirector()
{
}
