#pragma once
#include "AbstractNeutralUnit.h"
class Slave :
	public AbstractNeutralUnit
{
public:
	Slave();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void smashWithHands();
	~Slave();
private:
	int HP = 20;
	int Armory = 0;
	int Tactics = 0;
	int Attack = 1;
};

