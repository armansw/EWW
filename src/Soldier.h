#pragma once
#include "AbstractFriendUnit.h"
class Soldier :
	public AbstractFriendUnit
{
public:
	Soldier();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootwithAK47();
	~Soldier();
private:
	int HP = 100;
	int Armory = 50;
	int Tactics = 5;
	int Attack = 25;
};

