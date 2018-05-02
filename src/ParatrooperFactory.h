#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Paratrooper.h"
using namespace std;
class ParatrooperFactory :
	public AbstractFriendUnitFactory
{
public:
	ParatrooperFactory();
	shared_ptr<AbstractUnit> createUnit();
	~ParatrooperFactory();
};

