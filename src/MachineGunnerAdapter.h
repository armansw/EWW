#pragma once
#include "MachineGunner.h"
#include "Units.h"
class MachineGunnerAdapter :
	public Units
{
public:
	MachineGunnerAdapter();
	void attack() const override;
	~MachineGunnerAdapter();
private:
	shared_ptr<MachineGunner> machineGunner;
};

