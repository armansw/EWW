#include "SapperFactory.h"



SapperFactory::SapperFactory()
{
}


shared_ptr<AbstractUnit> SapperFactory::createUnit() {
	return make_shared<Sapper>();
}


SapperFactory::~SapperFactory()
{
}
