#pragma once
#include "Deserter.h"
#include "Units.h"
class DeserterAdapter :
	public Units
{
public:
	DeserterAdapter();
	void attack() const override;
	~DeserterAdapter();
private:
	shared_ptr<Deserter> deserter;
};

