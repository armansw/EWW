#include "UnitAdapter.h"



UnitAdapter::UnitAdapter()
{
}


UnitAdapter::UnitAdapter(shared_ptr<AbstractFriendUnit> _friendUnit) {
	this->friendUnit = _friendUnit;
}


UnitAdapter::UnitAdapter(shared_ptr<AbstractEnemyUnit> _enemyUnit) {
	this->enemyUnit = _enemyUnit;
}


UnitAdapter::UnitAdapter(shared_ptr<AbstractNeutralUnit> _neutralUnit) {
	this->neutralUnit = _neutralUnit;
}


UnitAdapter::~UnitAdapter()
{
}
