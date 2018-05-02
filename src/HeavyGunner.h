#pragma once
#include "AbstractFriendUnit.h"
class HeavyGunner :
	public AbstractFriendUnit
{
public:
	HeavyGunner();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
    void shootWithRPG();
	~HeavyGunner();
private:
	int HP = 70;
	int Armory = 40;
	int Tactics = 50;
	int Attack = 100;
};

