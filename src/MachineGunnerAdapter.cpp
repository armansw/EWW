#include "MachineGunnerAdapter.h"



MachineGunnerAdapter::MachineGunnerAdapter()
{
}


void MachineGunnerAdapter::attack() const {
	this->machineGunner->shootWithMinigun();
}


MachineGunnerAdapter::~MachineGunnerAdapter()
{
}
