#pragma once
#include <memory>
#include "AbstractNeutralUnitFactory.h"
#include "Wolf.h"
using namespace std;
class WolfFactory :
	public AbstractNeutralUnitFactory
{
public:
	WolfFactory();
	shared_ptr<AbstractUnit> createUnit();
	~WolfFactory();
};

