#pragma once
#include "AbstractFriendUnit.h"
class Morph :
	public AbstractFriendUnit
{
public:
	Morph();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithSpecialGun();
	~Morph();
private:
	int HP = 120;
	int Armory = 80;
	int Tactics = 50;
	int Attack = 20;
};

