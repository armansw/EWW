#pragma once
#include <memory>
#include "AbstractFriendUnitFactory.h"
#include "Morph.h"
using namespace std;
class MorphFactory :
	public AbstractFriendUnitFactory
{
public:
	MorphFactory();
	shared_ptr<AbstractUnit> createUnit() override;
	~MorphFactory();
};

