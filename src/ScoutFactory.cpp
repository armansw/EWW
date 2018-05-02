#include "ScoutFactory.h"



ScoutFactory::ScoutFactory()
{
}


shared_ptr<AbstractUnit> ScoutFactory::createUnit() {
	return make_shared<Scout>();
}


ScoutFactory::~ScoutFactory()
{
}
