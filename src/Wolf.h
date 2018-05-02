#pragma once
#include "AbstractNeutralUnit.h"
class Wolf :
	public AbstractNeutralUnit
{
public:
	Wolf();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void smashWithClutches();
	~Wolf();
private:
	int HP = 70;
	int Armory = 0;
	int Tactics = 40;
	int Attack = 10;
};

