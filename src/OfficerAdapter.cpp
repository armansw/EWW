#include "OfficerAdapter.h"



OfficerAdapter::OfficerAdapter()
{
}


void OfficerAdapter::attack() const {
	this->officer->shootWithHAWK();
}


OfficerAdapter::~OfficerAdapter()
{
}
