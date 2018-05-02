#include "HeavyGunnerAdapter.h"



HeavyGunnerAdapter::HeavyGunnerAdapter()
{
}


void HeavyGunnerAdapter::attack() const {
	this->heavygunner->shootWithRPG();
}


HeavyGunnerAdapter::~HeavyGunnerAdapter()
{
}
