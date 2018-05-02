#include "SniperAdapter.h"



SniperAdapter::SniperAdapter()
{
}


void SniperAdapter::attack() const {
	this->sniper->shootWithAVM();
}


SniperAdapter::~SniperAdapter()
{
}
