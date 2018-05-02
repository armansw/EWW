#include "SoldierFactory.h"



SoldierFactory::SoldierFactory()
{
}


shared_ptr<AbstractUnit> SoldierFactory::createUnit() {
	return make_shared<Soldier>();
}


SoldierFactory::~SoldierFactory()
{
}
