#include "Morph.h"



Morph::Morph()
{
}


int Morph::getHP() const{
	return this->HP;
}


void Morph::setHP(int _HP) {
	this->HP = _HP;
}


int Morph::getArmory() const{
	return this->Armory;
}


void Morph::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Morph::getTactics() const{
	return this->Tactics;
}


void Morph::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Morph::getAttack() const{
	return this->Attack;
}


void Morph::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Morph::shootWithSpecialGun() {
	cout << "Morph has shot with the special gun";
}


Morph::~Morph()
{
}
