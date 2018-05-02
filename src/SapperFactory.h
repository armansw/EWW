#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Sapper.h"
using namespace std;
class SapperFactory :
	public AbstractFriendUnitFactory
{
public:
	SapperFactory();
	shared_ptr<AbstractUnit> createUnit();
	~SapperFactory();
};

