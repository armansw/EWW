#pragma once
#include "AlienMachineGunner.h"
#include "Units.h"
class AlienMachineGunnerAdapter : public Units {
public:
	AlienMachineGunnerAdapter();
	void attack() const override;
	~AlienMachineGunnerAdapter();
private:
	shared_ptr<AlienMachineGunner> alienMachinegunner;
};

