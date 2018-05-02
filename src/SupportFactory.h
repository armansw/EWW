#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Support.h"
using namespace std;
class SupportFactory :
	public AbstractFriendUnitFactory
{
public:
	SupportFactory();
	shared_ptr<AbstractUnit> createUnit();
	~SupportFactory();
};

