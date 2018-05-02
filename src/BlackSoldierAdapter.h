#pragma once
#include "BlackSoldier.h"
#include "Units.h"
class BlackSoldierAdapter :
	public Units
{
public:
	BlackSoldierAdapter();
	void attack() const override;
	~BlackSoldierAdapter();
private:
	shared_ptr<BlackSoldier> blacksoldier;
};

