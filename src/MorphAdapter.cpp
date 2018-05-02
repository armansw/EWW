#include "MorphAdapter.h"



MorphAdapter::MorphAdapter()
{
}


void MorphAdapter::attack() const {
	this->morph->shootWithSpecialGun();
}


MorphAdapter::~MorphAdapter()
{
}
