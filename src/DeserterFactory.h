#pragma once
#include <memory>
#include "AbstractEnemyUnitFactory.h"
#include "Deserter.h"
using namespace std;
class DeserterFactory :
	public AbstractEnemyUnitFactory
{
public:
	DeserterFactory();
	shared_ptr<AbstractUnit> createUnit();
	~DeserterFactory();
};

