#include "Officer.h"



Officer::Officer()
{
}


int Officer::getHP() const{
	return this->HP;
}


void Officer::setHP(int _HP) {
	this->HP = _HP;
}


int Officer::getArmory() const{
	return this->Armory;
}


void Officer::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Officer::getTactics() const{
	return this->Tactics;
}


void Officer::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Officer::getAttack() const{
	return this->Attack;
}


void Officer::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Officer::shootWithHAWK() {
	cout << "Officer has shot with HAWK";
}


Officer::~Officer()
{
}
