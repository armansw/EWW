#include "SoldierAdapter.h"



SoldierAdapter::SoldierAdapter()
{
}


void SoldierAdapter::attack() const {
	this->soldier->shootwithAK47();
}


SoldierAdapter::~SoldierAdapter()
{
}
