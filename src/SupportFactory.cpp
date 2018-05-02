#include "SupportFactory.h"



SupportFactory::SupportFactory()
{
}


shared_ptr<AbstractUnit> SupportFactory::createUnit() {
	return make_shared<Support>();
}


SupportFactory::~SupportFactory()
{
}
