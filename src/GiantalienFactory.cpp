#include "GiantalienFactory.h"


GiantalienFactory::GiantalienFactory()
{
}


shared_ptr<AbstractUnit> GiantalienFactory::createUnit() {
	return  make_shared<GiantAlien>();
}


GiantalienFactory::~GiantalienFactory()
{
}
