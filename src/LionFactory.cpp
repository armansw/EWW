#include "LionFactory.h"



LionFactory::LionFactory()
{
}


shared_ptr<AbstractUnit> LionFactory::createUnit(){
	return  make_shared<Lion>();
}


LionFactory::~LionFactory()
{
}
