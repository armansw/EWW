#pragma once
#include "AbstractEnemyUnit.h"
class GiantAlien :
	public AbstractEnemyUnit
{
public:
	GiantAlien();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	string kick() const;
	~GiantAlien();
private:
	int HP = 500;
	int Armory = 100;
	int Tactics = 0;
	int Attack = 20;
};

