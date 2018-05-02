#pragma once
#include "Slave.h"
#include "Units.h"
class SlaveAdapter :
	public Units
{
public:
	SlaveAdapter();
	void attack() const override;
	~SlaveAdapter();
private:
	shared_ptr<Slave> slave;
};

