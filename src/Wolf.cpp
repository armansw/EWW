#include "Wolf.h"



Wolf::Wolf()
{
}


int Wolf::getHP() const{
	return this->HP;
}


void Wolf::setHP(int _HP) {
	this->HP = _HP;
}


int Wolf::getArmory() const{
	return this->Armory;
}


void Wolf::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Wolf::getTactics() const{
	return this->Tactics;
}


void Wolf::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Wolf::getAttack() const{
	return this->Attack;
}


void Wolf::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Wolf::smashWithClutches() {
	cout << "Wolf has attacked with clutches";
}


Wolf::~Wolf()
{
}
