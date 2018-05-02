#include "SlaveAdapter.h"



SlaveAdapter::SlaveAdapter()
{
}


void SlaveAdapter::attack() const {
	this->slave->smashWithHands();
}


SlaveAdapter::~SlaveAdapter()
{
}
