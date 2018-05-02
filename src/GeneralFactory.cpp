#include "GeneralFactory.h"


GeneralFactory::GeneralFactory()
{
}


shared_ptr<AbstractUnit> GeneralFactory::createUnit() {
	return make_shared<General>();
}


GeneralFactory::~GeneralFactory()
{
}
