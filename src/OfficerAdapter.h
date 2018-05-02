#pragma once
#include "Officer.h"
#include "Units.h"
class OfficerAdapter :
	public Units
{
public:
	OfficerAdapter();
	void attack() const override;
	~OfficerAdapter();
private:
	shared_ptr<Officer> officer;
};

