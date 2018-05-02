
#include "AbstractFriendUnit.h"
class Paratrooper :
	public AbstractFriendUnit
{
public:
	Paratrooper();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithChazer();
	~Paratrooper();
private:
	int HP = 80;
	int Armory = 80;
	int Tactics = 15;
	int Attack = 20;
};
