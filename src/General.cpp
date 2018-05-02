#include "General.h"



General::General()
{
}


int General::getHP() const{
	return this->HP;
}


void General::setHP(int _HP) {
	this->HP = _HP;
}


int General::getArmory() const{
	return this->Armory;
}


void General::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int General::getTactics() const{
	return this->Tactics;
}


void General::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int General::getAttack() const{
	return this->Attack;
}


void General::setAttack(int _Attack) {
	this->Attack = _Attack;
}

void General::shootWithMrager() {
	cout << "Officer has shot with Mrager";
}


General::~General()
{
}
