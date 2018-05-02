#include "BlackSoldierAdapter.h"



BlackSoldierAdapter::BlackSoldierAdapter()
{
}


void BlackSoldierAdapter::attack() const {
	this->blacksoldier->shootWithManipulator();
}


BlackSoldierAdapter::~BlackSoldierAdapter()
{
}
