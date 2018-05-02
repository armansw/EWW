#pragma once
#include <memory>
#include "AbstractEnemyUnitFactory.h"
#include "AlienPet.h"
using namespace std;
class AlienPetFactory :
	public AbstractEnemyUnitFactory
{
public:
	AlienPetFactory();
	shared_ptr<AbstractUnit> createUnit();
	~AlienPetFactory();
};

