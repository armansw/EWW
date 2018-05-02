#include "AlienMachineGunner.h"



AlienMachineGunner::AlienMachineGunner()
{
}


int AlienMachineGunner::getHP() const{
	return this->HP;
}


void AlienMachineGunner::setHP(int _HP) {
	this->HP = _HP;
}


int AlienMachineGunner::getArmory() const{
	return this->Armory;
}


void AlienMachineGunner::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int AlienMachineGunner::getTactics() const{
	return this->Tactics;
}


void AlienMachineGunner::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int AlienMachineGunner::getAttack() const{
	return this->Attack;
}


void AlienMachineGunner::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void AlienMachineGunner::shootWithHoozier() {
	cout << "Alien machinegunner has shot Hoozier";
}


AlienMachineGunner::~AlienMachineGunner()
{
}
