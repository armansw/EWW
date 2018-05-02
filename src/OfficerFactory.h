#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Officer.h"
using namespace std;
class OfficerFactory :
	public AbstractFriendUnitFactory
{
public:
	OfficerFactory();
	shared_ptr<AbstractUnit> createUnit();
	~OfficerFactory();
};

