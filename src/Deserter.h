#pragma once
#include "AbstractEnemyUnit.h"
class Deserter :
	public AbstractEnemyUnit
{
public:
	Deserter();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithHuntingGun();
	~Deserter();
private:
	int HP = 70;
	int Armory = 45;
	int Tactics = 10;
	int Attack = 20;
};

