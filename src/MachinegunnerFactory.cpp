#include "MachinegunnerFactory.h"


MachinegunnerFactory::MachinegunnerFactory()
{
}


shared_ptr<AbstractUnit> MachinegunnerFactory::createUnit() {
	return make_shared<MachineGunner>();
}


MachinegunnerFactory::~MachinegunnerFactory()
{
}
