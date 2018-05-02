#pragma once
#include <memory>
#include "AbstractEnemyUnitFactory.h"
#include "MorphX2.h"
using namespace std;
class MorphX2Factory :
	public AbstractEnemyUnitFactory
{
public:
	MorphX2Factory();
	shared_ptr<AbstractUnit> createUnit() override;
	~MorphX2Factory();
};

