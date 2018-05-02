#include "DeserterAdapter.h"



DeserterAdapter::DeserterAdapter()
{
}


void DeserterAdapter::attack() const {
	this->deserter->shootWithHuntingGun();
}


DeserterAdapter::~DeserterAdapter()
{
}
