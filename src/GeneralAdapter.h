#pragma once
#include "General.h"
#include "Units.h"
class GeneralAdapter :
	public Units
{
public:
	GeneralAdapter();
	void attack() const override;
	~GeneralAdapter();
private:
	shared_ptr<General> general;
};

