#pragma once
#include "AbstractEnemyUnit.h"
class AlienAssault :
	public AbstractEnemyUnit
{
public:
	AlienAssault();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithPIEM();
	~AlienAssault();
private:
	int HP = 100;
	int Armory = 100;
	int Tactics = 20;
	int Attack = 20;
};

