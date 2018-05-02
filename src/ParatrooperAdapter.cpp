#include "ParatrooperAdapter.h"



ParatrooperAdapter::ParatrooperAdapter()
{
}


void ParatrooperAdapter::attack() const {
	this->paratrooper->shootWithChazer();
}


ParatrooperAdapter::~ParatrooperAdapter()
{
}
