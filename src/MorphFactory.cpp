#include "MorphFactory.h"



MorphFactory::MorphFactory()
{
}


shared_ptr<AbstractUnit> MorphFactory::createUnit() {
	return make_shared<Morph>();
}


MorphFactory::~MorphFactory()
{
}
