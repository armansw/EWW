#include "BankBuilder.h"



BankBuilder::BankBuilder()
{
}


void BankBuilder::buildArea() {
	bank->setArea(160);
}


void BankBuilder::buildBody() {
	bank->setBody("Bank corps");
}


void BankBuilder::buildSafe() {
	bank->setSafe("12-Digitspassword safe");
}


void BankBuilder::buildSafety() {
	bank->setSafety("High");
}


void BankBuilder::buildWall() {
	bank->setWall("medium-level strong wall");
}


shared_ptr<Building> BankBuilder::getBuilding() const {
	return this->bank;
}


BankBuilder::~BankBuilder()
{
}
