#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Assassin.h"
using namespace std;
class AssassinFactory :
	public AbstractFriendUnitFactory
{
public:
	AssassinFactory();
	shared_ptr<AbstractUnit> createUnit();
	virtual ~AssassinFactory();
};

