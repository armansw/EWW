#pragma once
#include "AbstractEnemyUnit.h"
class AlienMachineGunner :
	public AbstractEnemyUnit
{
public:
	AlienMachineGunner();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithHoozier();
	~AlienMachineGunner();
private:
	int HP = 120;
	int Armory = 60;
	int Tactics = 15;
	int Attack = 10;
};

