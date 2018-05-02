#include "AlienMachinegunnerFactory.h"


AlienMachinegunnerFactory::AlienMachinegunnerFactory()
{
}


shared_ptr<AbstractUnit> AlienMachinegunnerFactory::createUnit() {
	return make_shared<AlienMachineGunner>();
}


AlienMachinegunnerFactory::~AlienMachinegunnerFactory()
{
}
