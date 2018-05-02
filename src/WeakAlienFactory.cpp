#include "WeakAlienFactory.h"



WeakAlienFactory::WeakAlienFactory()
{
}


shared_ptr<AbstractUnit> WeakAlienFactory::createUnit() {
	return make_shared<WeakAlien>();
}


WeakAlienFactory::~WeakAlienFactory()
{
}
