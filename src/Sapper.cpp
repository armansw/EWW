#include "Sapper.h"



Sapper::Sapper()
{
}


int Sapper::getHP() const {
	return this->HP;
}


void Sapper::setHP(int _HP) {
	this->HP = _HP;
}


int Sapper::getArmory() const {
	return this->Armory;
}


void Sapper::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Sapper::getTactics() const {
	return this->Tactics;
}


void Sapper::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Sapper::getAttack() const {
	return this->Attack;
}


void Sapper::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Sapper::shootWithAW110() {
	cout << "Sapper has shot with AW-110";
}


Sapper::~Sapper()
{
}
