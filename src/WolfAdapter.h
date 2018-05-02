#pragma once
#include "Wolf.h"
#include "Units.h"
class WolfAdapter :
	public Units
{
public:
	WolfAdapter();
	void attack() const override;
	~WolfAdapter();
private:
	shared_ptr<Wolf> wolf;
};

