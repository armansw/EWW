#include "ParatrooperFactory.h"



ParatrooperFactory::ParatrooperFactory()
{
}


shared_ptr<AbstractUnit> ParatrooperFactory::createUnit() {
	return make_shared<Paratrooper>();
}


ParatrooperFactory::~ParatrooperFactory()
{
}
