#pragma once
#include "GiantAlien.h"
#include "Units.h"
class GiantAlienAdapter :
	public Units
{
public:
	GiantAlienAdapter();
	void attack() const override;
	~GiantAlienAdapter();
private:
	shared_ptr<GiantAlien> giantAlien;
};

