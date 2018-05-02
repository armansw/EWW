#pragma once
#include "Lion.h"
#include "Units.h"
class LionAdapter :
	public Units
{
public:
	LionAdapter();
	void attack() const override;
	~LionAdapter();
private:
	shared_ptr<Lion> lion;
};

