#include "Sniper.h"



Sniper::Sniper()
{
}


int Sniper::getHP() const{
	return this->HP;
}


void Sniper::setHP(int _HP) {
	this->HP = _HP;
}


int Sniper::getArmory() const{
	return this->Armory;
}


void Sniper::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Sniper::getTactics() const{
	return this->Tactics;
}


void Sniper::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Sniper::getAttack() const{
	return this->Attack;
}


void Sniper::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Sniper::shootWithAVM() {
	cout << "Sniper has shot with AVM";
}


Sniper::~Sniper()
{
}
