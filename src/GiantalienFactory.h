#pragma once
#include <memory>
#include "AbstractEnemyUnitFactory.h"
#include "GiantAlien.h"
using namespace std;
class GiantalienFactory :
	public AbstractEnemyUnitFactory
{
public:
	GiantalienFactory();
	shared_ptr<AbstractUnit> createUnit();
	~GiantalienFactory();
};

