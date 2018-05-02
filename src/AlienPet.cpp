#include "AlienPet.h"



AlienPet::AlienPet()
{
}


int AlienPet::getHP() const{
	return this->HP;
}


void AlienPet::setHP(int _HP) {
	this->HP = _HP;
}


int AlienPet::getArmory() const{
	return this->Armory;
}


void AlienPet::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int AlienPet::getTactics() const{
	return this->Tactics;
}


void AlienPet::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int AlienPet::getAttack() const{
	return this->Attack;
}


void AlienPet::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void AlienPet::smashwithClutches() const {
	cout << "Aliens' pet has smashed with Clutches";
}


AlienPet::~AlienPet()
{
}
