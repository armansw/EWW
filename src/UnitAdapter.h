#pragma once
#include "AbstractUnit.h"
#include "AbstractFriendUnit.h"
#include "AbstractEnemyUnit.h"
#include "AbstractNeutralUnit.h"
#include <memory>
using std::shared_ptr;
class UnitAdapter :
	public AbstractUnit
{
public:
	UnitAdapter();
	UnitAdapter(shared_ptr<AbstractFriendUnit> _friendUnit);
	UnitAdapter(shared_ptr<AbstractEnemyUnit> _enemyUnit);
	UnitAdapter(shared_ptr<AbstractNeutralUnit> _neutralUnit);
	~UnitAdapter();
private:
	shared_ptr<AbstractFriendUnit> friendUnit;
	shared_ptr<AbstractEnemyUnit> enemyUnit;
	shared_ptr<AbstractNeutralUnit> neutralUnit;
};

