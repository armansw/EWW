#pragma once
#include "AbstractFriendUnit.h"
class Officer :
	public AbstractFriendUnit
{
public:
	Officer();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithHAWK();
	~Officer();
private:
	int HP = 60;
	int Armory = 20;
	int Tactics = 80;
	int Attack = 15;
};

