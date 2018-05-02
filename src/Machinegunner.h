
#include "AbstractFriendUnit.h"
class MachineGunner :
	public AbstractFriendUnit
{
public:
	MachineGunner();
	int getHP()const override;
	int getArmory()const override;
	int getTactics()const override;
	int getAttack()const override;
	void setHP(int _HP) override;
	void setArmory(int _Armory) override;
	void setTactics(int _Tactics) override;
	void setAttack(int _Attack) override;
	void shootWithMinigun();
	~MachineGunner();
private:
	int HP;
	int Armory;
	int Tactics;
	int Attack;
};
