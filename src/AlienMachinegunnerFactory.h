#pragma once
#include <memory>
#include "AbstractEnemyUnitFactory.h"
#include "AlienMachineGunner.h"
using namespace std;
class AlienMachinegunnerFactory :
	public AbstractEnemyUnitFactory
{
public:
	AlienMachinegunnerFactory();
	shared_ptr<AbstractUnit> createUnit();
	~AlienMachinegunnerFactory();
};

