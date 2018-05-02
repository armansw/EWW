#include "HeavyGunner.h"



HeavyGunner::HeavyGunner()
{
}


int HeavyGunner::getHP() const{
	return this->HP;
}


void HeavyGunner::setHP(int _HP) {
	this->HP = _HP;
}


int HeavyGunner::getArmory() const{
	return this->Armory;
}


void HeavyGunner::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int HeavyGunner::getTactics() const{
	return this->Tactics;
}


void HeavyGunner::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int HeavyGunner::getAttack() const{
	return this->Attack;
}


void HeavyGunner::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void HeavyGunner::shootWithRPG() {
	cout << "Heavygunner has shot with RPG";
}


HeavyGunner::~HeavyGunner()
{
}
