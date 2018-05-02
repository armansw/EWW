#pragma once
#include "AlienAssault.h"
#include "Units.h"
class AlienAssaultAdapter :
	public Units
{
public:
	AlienAssaultAdapter();
	void attack() const override;
	~AlienAssaultAdapter();
private:
	shared_ptr<AlienAssault> alienAssault;
};

