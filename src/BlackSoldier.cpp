#include "BlackSoldier.h"



BlackSoldier::BlackSoldier()
{
}


int BlackSoldier::getHP() const{
	return this->HP;
}


void BlackSoldier::setHP(int _HP) {
	this->HP = _HP;
}


int BlackSoldier::getArmory() const{
	return this->Armory;
}


void BlackSoldier::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int BlackSoldier::getTactics() const{
	return this->Tactics;
}


void BlackSoldier::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int BlackSoldier::getAttack() const{
	return this->Attack;
}


void BlackSoldier::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void BlackSoldier::shootWithManipulator() {
	cout << "Black soldier has shot with manipulator";
}


BlackSoldier::~BlackSoldier()
{
}
