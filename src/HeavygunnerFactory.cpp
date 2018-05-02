#include "HeavygunnerFactory.h"


HeavygunnerFactory::HeavygunnerFactory()
{
}


shared_ptr<AbstractUnit> HeavygunnerFactory::createUnit() {
	return  make_shared<HeavyGunner>();
}


HeavygunnerFactory::~HeavygunnerFactory()
{
}
