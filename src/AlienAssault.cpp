#include "AlienAssault.h"



AlienAssault::AlienAssault()
{
}


int AlienAssault::getHP() const{
	return this->HP;
}


void AlienAssault::setHP(int _HP) {
	this->HP = _HP;
}


int AlienAssault::getArmory() const{
	return this->Armory;
}


void AlienAssault::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int AlienAssault::getTactics() const{
	return this->Tactics;
}


void AlienAssault::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int AlienAssault::getAttack() const{
	return this->Attack;
}


void AlienAssault::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void AlienAssault::shootWithPIEM() {
	cout << "AlienAssault has shot with PIEM";
}


AlienAssault::~AlienAssault()
{
}
