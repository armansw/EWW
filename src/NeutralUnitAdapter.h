#pragma once
#include "AbstractUnit.h"
#include "LionAdapter.h"
#include "SlaveAdapter.h"
#include "WeakAlienAdapter.h"
#include "WolfAdapter.h"
#include <memory>
using std::shared_ptr;
class NeutralUnitAdapter
{
public:
	NeutralUnitAdapter();
	NeutralUnitAdapter(shared_ptr<Lion> _lion);
	NeutralUnitAdapter(shared_ptr<Slave> _slave);
	NeutralUnitAdapter(shared_ptr<WeakAlien> _weakAlien);
	NeutralUnitAdapter(shared_ptr<Wolf> _wolf);
	~NeutralUnitAdapter();
private:
	shared_ptr<Lion> lion;
	shared_ptr<Slave> slave;
	shared_ptr<WeakAlien> weakAlien;
	shared_ptr<Wolf> wolf;
};

