#include "Machinegunner.h"


MachineGunner::MachineGunner()
{
}


int MachineGunner::getHP() const{
	return this->HP;
}


void MachineGunner::setHP(int _HP) {
	this->HP = _HP;
}


int MachineGunner::getArmory() const{
	return this->Armory;
}


void MachineGunner::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int MachineGunner::getTactics() const{
	return this->Tactics;
}


void MachineGunner::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int MachineGunner::getAttack() const{
	return this->Attack;
}


void MachineGunner::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void MachineGunner::shootWithMinigun() {
	cout << "Machinegunner has shoot with minigun";
}


MachineGunner::~MachineGunner()
{
}
