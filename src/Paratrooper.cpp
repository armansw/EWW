#include "Paratrooper.h"



Paratrooper::Paratrooper()
{
}


int Paratrooper::getHP() const{
	return this->HP;
}


void Paratrooper::setHP(int _HP) {
	this->HP = _HP;
}


int Paratrooper::getArmory() const{
	return this->Armory;
}


void Paratrooper::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Paratrooper::getTactics() const{
	return this->Tactics;
}


void Paratrooper::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Paratrooper::getAttack() const{
	return this->Attack;
}


void Paratrooper::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Paratrooper::shootWithChazer() {
	cout << "Paratrooper has shot with Chazer";
}


Paratrooper::~Paratrooper()
{
}
