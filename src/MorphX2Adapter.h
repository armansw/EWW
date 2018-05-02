#pragma once
#include "MorphX2.h"
#include "Units.h"
class MorphX2Adapter :
	public Units
{
public:
	MorphX2Adapter();
	void attack() const override;
	~MorphX2Adapter();
private:
	shared_ptr<MorphX2> morphX2;
};

