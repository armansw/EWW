#pragma once
#include "AbstractFriendUnit.h"
class Support :
	public AbstractFriendUnit
{
public:
	Support();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithShred();
	~Support();
private:
	int HP = 100;
	int Armory = 100;
	int Tactics = 10;
	int Attack = 15;
};

