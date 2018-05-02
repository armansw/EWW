#include "Scout.h"



Scout::Scout()
{
}


int Scout::getHP() const{
	return this->HP;
}


void Scout::setHP(int _HP) {
	this->HP = _HP;
}


int Scout::getArmory() const{
	return this->Armory;
}


void Scout::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Scout::getTactics() const{
	return this->Tactics;
}


void Scout::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Scout::getAttack() const{
	return this->Attack;
}


void Scout::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Scout::shootwithUZI() {
	cout << "Scout has shot UZI";
}


Scout::~Scout()
{
}
