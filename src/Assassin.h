#pragma once
#include "AbstractFriendUnit.h"
class Assassin :
	public AbstractFriendUnit
{
public:
	Assassin();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void smashWithSword();
	~Assassin();
private:
	int HP = 70;
	int Armory = 30;
	int Tactics = 50;
	int Attack = 40;
};

