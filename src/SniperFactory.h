#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Sniper.h"
using namespace std;
class SniperFactory :
	public AbstractFriendUnitFactory
{
public:
	SniperFactory();
	shared_ptr<AbstractUnit> createUnit();
	~SniperFactory();
};

