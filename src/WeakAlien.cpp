#include "WeakAlien.h"



WeakAlien::WeakAlien()
{
}


int WeakAlien::getHP() const{
	return this->HP;
}


void WeakAlien::setHP(int _HP) {
	this->HP = _HP;
}


int WeakAlien::getArmory() const{
	return this->Armory;
}


void WeakAlien::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int WeakAlien::getTactics() const{
	return this->Tactics;
}


void WeakAlien::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int WeakAlien::getAttack() const{
	return this->Attack;
}


void WeakAlien::setAttack(int _Attack) {
	this->Attack = _Attack;
}


void WeakAlien::shootWithSNT() {
	cout << "Alien has shot with SNT";
}


WeakAlien::~WeakAlien()
{
}
