#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "General.h"
using namespace std;
class GeneralFactory :
	public AbstractFriendUnitFactory
{
public:
	GeneralFactory();
	shared_ptr<AbstractUnit> createUnit();
	~GeneralFactory();
};

