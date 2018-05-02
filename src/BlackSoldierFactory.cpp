#include "BlackSoldierFactory.h"


BlackSoldierFactory::BlackSoldierFactory()
{
}


shared_ptr<AbstractUnit> BlackSoldierFactory::createUnit() {
	return make_shared<BlackSoldier>();
}


BlackSoldierFactory::~BlackSoldierFactory()
{
}
