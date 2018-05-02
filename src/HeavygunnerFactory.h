#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Heavygunner.h"
using namespace std;
class HeavygunnerFactory :
	public AbstractFriendUnitFactory
{
public:
	HeavygunnerFactory();
	shared_ptr<AbstractUnit> createUnit();
	~HeavygunnerFactory();
};

