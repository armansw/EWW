#pragma once
#include "Support.h"
#include "Units.h"
class SupportAdapter :
	public Units
{
public:
	SupportAdapter();
	void attack() const override;
	~SupportAdapter();
private:
	shared_ptr<Support> support;
};

