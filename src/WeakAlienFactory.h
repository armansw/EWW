#pragma once
#include <memory>
#include "AbstractNeutralUnitFactory.h"
#include "WeakAlien.h"
using namespace std;
class WeakAlienFactory :
	public AbstractNeutralUnitFactory
{ 
public:
	WeakAlienFactory();
	shared_ptr<AbstractUnit> createUnit();
	~WeakAlienFactory();
};

