#include "Deserter.h"



Deserter::Deserter()
{
}


int Deserter::getHP() const{
	return this->HP;
}


void Deserter::setHP(int _HP) {
	this->HP = _HP;
}


int Deserter::getArmory() const{
	return this->Armory;
}


void Deserter::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Deserter::getTactics() const{
	return this->Tactics;
}


void Deserter::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Deserter::getAttack() const{
	return this->Attack;
}


void Deserter::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Deserter::shootWithHuntingGun() {
	cout << "Deserter has shot with hunting gun";
}


Deserter::~Deserter()
{
}
