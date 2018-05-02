#pragma once
#include "AbstractNeutralUnit.h"
class Lion :
	public AbstractNeutralUnit
{
public:
	Lion();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void bite();
	~Lion();
private:
	int HP = 150;
	int Armory = 0;
	int Tactics = 40;
	int Attack = 16;
};

