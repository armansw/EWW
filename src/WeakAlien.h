#pragma once
#include "AbstractNeutralUnit.h"
class WeakAlien :
	public AbstractNeutralUnit
{
public:
	WeakAlien();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithSNT();
	~WeakAlien();
private:
	int HP = 50;
	int Armory = 50;
	int Tactics = 0;
	int Attack = 8;
};

