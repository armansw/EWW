#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Scout.h"
using namespace std;
class ScoutFactory :
	public AbstractFriendUnitFactory
{
public:
	ScoutFactory();
	shared_ptr<AbstractUnit> createUnit();
	~ScoutFactory();
};

