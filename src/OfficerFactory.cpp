#include "OfficerFactory.h"


OfficerFactory::OfficerFactory()
{
}


shared_ptr<AbstractUnit> OfficerFactory::createUnit() {
	return make_shared<Officer>();
}


OfficerFactory::~OfficerFactory()
{
}
