#pragma once
#include "Soldier.h"
#include "Units.h"
class SoldierAdapter :
	public Units
{
public:
	SoldierAdapter();
	void attack() const override;
	~SoldierAdapter();
private:
	shared_ptr<Soldier> soldier;
};

