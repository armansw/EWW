#include "GiantAlien.h"



GiantAlien::GiantAlien()
{
}


int GiantAlien::getHP() const{
	return this->HP;
}


void GiantAlien::setHP(int _HP) {
	this->HP = _HP;
}


int GiantAlien::getArmory() const{
	return this->Armory;
}


void GiantAlien::setArmory(int _Armory) {
	this->Armory = _Armory;
}


int GiantAlien::getTactics() const{
	return this->Tactics;
}


void GiantAlien::setTactics(int _Tactics) {
	this->Tactics = _Tactics;
}


int GiantAlien::getAttack() const {
	return this->Attack;
}


void GiantAlien::setAttack(int _Attack) {
	this->Attack = _Attack;
}


string GiantAlien::kick() const {
	return "Giant alien has kicked";
}


GiantAlien::~GiantAlien()
{
}
