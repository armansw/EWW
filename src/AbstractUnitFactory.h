#pragma once
#include <memory>
#include "AbstractFactory.h"
#include "AbstractUnit.h"
using namespace std;
class AbstractUnitFactory :
	public AbstractFactory
{
public:
	AbstractUnitFactory();
	virtual shared_ptr<AbstractUnit> createUnit() = 0;
	~AbstractUnitFactory();
};

