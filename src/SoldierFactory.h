#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Soldier.h"
using namespace std;
class SoldierFactory :
	public AbstractFriendUnitFactory
{
public:
	SoldierFactory();
	shared_ptr<AbstractUnit> createUnit();
	~SoldierFactory();
};

