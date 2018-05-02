#include "Slave.h"



Slave::Slave()
{
}


int Slave::getHP() const{
	return this->HP;
}


void Slave::setHP(int _HP) {
	this->HP = _HP;
}


int Slave::getArmory() const{
	return this->Armory;
}


void Slave::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Slave::getTactics() const{
	return this->Tactics;
}


void Slave::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Slave::getAttack() const{
	return this->Attack;
}


void Slave::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Slave::smashWithHands() {
	cout << "Slave has smashed with hands";
}


Slave::~Slave()
{
}
