#include "Lion.h"



Lion::Lion()
{
}


int Lion::getHP() const{
	return this->HP;
}


void Lion::setHP(int _HP) {
	this->HP = _HP;
}


int Lion::getArmory() const{
	return this->Armory;
}


void Lion::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Lion::getTactics() const{
	return this->Tactics;
}


void Lion::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Lion::getAttack() const{
	return this->Attack;
}


void Lion::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Lion::bite() {
	cout << "Lion has bitten";
}


Lion::~Lion()
{
}
