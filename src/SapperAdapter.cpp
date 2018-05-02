#include "SapperAdapter.h"



SapperAdapter::SapperAdapter()
{
}


SapperAdapter::SapperAdapter(shared_ptr<Sapper> _sapper) {
	sapper = _sapper;
}


void SapperAdapter::attack() const {
	this->sapper->shootWithAW110();
}


SapperAdapter::~SapperAdapter()
{
}
