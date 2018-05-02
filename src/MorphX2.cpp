#include "MorphX2.h"



MorphX2::MorphX2()
{
}


int MorphX2::getHP()const {
	return this->HP;
}


void MorphX2::setHP(int _HP) {
	this->HP = _HP;
}


int MorphX2::getArmory()const {
	return this->Armory;
}


void MorphX2::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int MorphX2::getTactics()const {
	return this->Tactics;
}


void MorphX2::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int MorphX2::getAttack()const {
	return this->Attack;
}


void MorphX2::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void MorphX2::smashWithTelekinesis() {
	cout << "MorphX2 has smashed with Telekinesis";
}


MorphX2::~MorphX2()
{
}
