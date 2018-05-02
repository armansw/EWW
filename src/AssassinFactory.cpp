#include "AssassinFactory.h"
#include "Assassin.h"


AssassinFactory::AssassinFactory()
{
}


shared_ptr<AbstractUnit> AssassinFactory::createUnit() {
	return make_shared<Assassin>();
}


AssassinFactory::~AssassinFactory()
{
}
