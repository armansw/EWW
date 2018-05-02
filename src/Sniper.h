#pragma once
#include "AbstractFriendUnit.h"
class Sniper :
	public AbstractFriendUnit
{
public:
	Sniper();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithAVM();
	~Sniper();
private:
	int HP = 50;
	int Armory = 20;
	int Tactics = 60;
	int Attack = 75;
};

