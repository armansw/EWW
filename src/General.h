#pragma once
#include "AbstractFriendUnit.h"
class General :
	public AbstractFriendUnit
{
public:
	General();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithMrager();
	~General();
private:
	int HP = 30;
	int Armory = 30;
	int Tactics = 100;
	int Attack = 10;
};

