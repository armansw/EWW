#include "SupportAdapter.h"



SupportAdapter::SupportAdapter()
{
}


void SupportAdapter::attack() const {
	this->support->shootWithShred();
}


SupportAdapter::~SupportAdapter()
{
}
