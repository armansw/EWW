#include "Support.h"



Support::Support()
{
}


int Support::getHP() const{
	return this->HP;
}


void Support::setHP(int _HP) {
	this->HP = _HP;
}


int Support::getArmory() const{
	return this->Armory;
}


void Support::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Support::getTactics() const{
	return this->Tactics;
}


void Support::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Support::getAttack() const{
	return this->Attack;
}


void Support::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Support::shootWithShred() {
	cout << "Support has shot with Shred";
}


Support::~Support()
{
}
