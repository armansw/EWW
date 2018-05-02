#include "AlienAssaultAdapter.h"


AlienAssaultAdapter::AlienAssaultAdapter()
{
}

void AlienAssaultAdapter::attack() const {
	this->alienAssault->shootWithPIEM();
}

AlienAssaultAdapter::~AlienAssaultAdapter()
{
}
