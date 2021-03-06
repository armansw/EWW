#pragma once
#include "AbstractEnemyUnit.h"
class AlienPet :
	public AbstractEnemyUnit
{
public:
	AlienPet();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void smashwithClutches() const; 
	~AlienPet();
private:
	int HP = 200;
	int Armory = 300;
	int Tactics = 10;
	int Attack = 20;
};

