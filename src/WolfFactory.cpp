#include "WolfFactory.h"



WolfFactory::WolfFactory()
{
}


shared_ptr<AbstractUnit> WolfFactory::createUnit() {
	return make_shared<Wolf>();
}


WolfFactory::~WolfFactory()
{
}
