#pragma once
#include <memory>
#include "AbstractEnemyUnitFactory.h"
#include "BlackSoldier.h"
using namespace std;
class BlackSoldierFactory :
	public AbstractEnemyUnitFactory
{
public:
	BlackSoldierFactory();
	shared_ptr<AbstractUnit> createUnit();
	~BlackSoldierFactory();
};

