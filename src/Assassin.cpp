#include "Assassin.h"



Assassin::Assassin()
{
}


int Assassin::getHP() const{
	return this->HP;
}


void Assassin::setHP(int _HP) {
	this->HP = _HP;
}


int Assassin::getArmory() const{
	return this->Armory;
}


void Assassin::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Assassin::getTactics() const{
	return this->Tactics;
}


void Assassin::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Assassin::getAttack() const{
	return this->Attack;
}


void Assassin::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Assassin::smashWithSword() {
	cout << "Assassin smashes with the sword";
}


Assassin::~Assassin()
{
}
