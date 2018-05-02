#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Machinegunner.h"
using namespace std;
class MachinegunnerFactory :
	public AbstractFriendUnitFactory
{
public:
	MachinegunnerFactory();
	shared_ptr<AbstractUnit> createUnit();
	~MachinegunnerFactory();
};

