#pragma once
#include "HeavyGunner.h"
#include "Units.h"
class HeavyGunnerAdapter :
	public Units
{
public:
	HeavyGunnerAdapter();
	void attack() const override;
	~HeavyGunnerAdapter();
private:
	shared_ptr<HeavyGunner> heavygunner;
};

