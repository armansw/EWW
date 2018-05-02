#pragma once
#include <memory>
#include "AbstractNeutralUnitFactory.h"
#include "Lion.h"
using namespace std;
class LionFactory :
	public AbstractNeutralUnitFactory
{
public:
	LionFactory();
	shared_ptr<AbstractUnit> createUnit();
	~LionFactory();
};

