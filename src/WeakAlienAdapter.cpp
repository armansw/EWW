#include "WeakAlienAdapter.h"



WeakAlienAdapter::WeakAlienAdapter()
{
}


void WeakAlienAdapter::attack() const {
	this->weakAlien->shootWithSNT();
}


WeakAlienAdapter::~WeakAlienAdapter()
{
}
