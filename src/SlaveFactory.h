#pragma once
#include <memory>
#include "AbstractNeutralUnitFactory.h"
#include  "Slave.h"
using namespace std;
class SlaveFactory :
	public AbstractNeutralUnitFactory
{
public:
	SlaveFactory();
	shared_ptr<AbstractUnit> createUnit();
	~SlaveFactory();
};

