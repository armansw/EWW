#pragma once
#include <memory>
#include "AbstractEnemyUnitFactory.h"
#include "AlienAssault.h"
using namespace std;
class AlienAssaultFactory :
	public AbstractEnemyUnitFactory
{
public:
	AlienAssaultFactory();
	shared_ptr<AbstractUnit> createUnit();
	~AlienAssaultFactory();
};

