#include "Soldier.h"



Soldier::Soldier()
{}


int Soldier::getHP() const{
	return this->HP;
}


void Soldier::setHP(int _HP) {
	this->HP = _HP;
}


int Soldier::getArmory() const{
	return this->Armory;
}


void Soldier::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int Soldier::getTactics() const{
	return this->Tactics;
}


void Soldier::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int Soldier::getAttack() const{
	return this->Attack;
}


void Soldier::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void Soldier::shootwithAK47() {
	cout << "Soldier has shot with AK-47";
}


Soldier::~Soldier()
{
}
