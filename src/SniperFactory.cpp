#include "SniperFactory.h"



SniperFactory::SniperFactory()
{
}


shared_ptr<AbstractUnit> SniperFactory::createUnit() {
	return make_shared<Sniper>();
}


SniperFactory::~SniperFactory()
{
}
