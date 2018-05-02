#include "NeutralUnitAdapter.h"


NeutralUnitAdapter::NeutralUnitAdapter()
{
}


NeutralUnitAdapter::NeutralUnitAdapter(shared_ptr<Lion> _lion) {
	lion = _lion;
}


NeutralUnitAdapter::NeutralUnitAdapter(shared_ptr<Slave> _slave) {
	slave = _slave;
}


NeutralUnitAdapter::NeutralUnitAdapter(shared_ptr<WeakAlien> _weakAlien) {
	weakAlien = _weakAlien;
}


NeutralUnitAdapter::NeutralUnitAdapter(shared_ptr<Wolf> _wolf) {
	wolf = _wolf;
}


NeutralUnitAdapter::~NeutralUnitAdapter()
{
}
