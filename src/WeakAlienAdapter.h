#pragma once
#include "WeakAlien.h"
#include "Units.h"
class WeakAlienAdapter :
	public Units
{
public:
	WeakAlienAdapter();
	void attack() const override;
	~WeakAlienAdapter();
private:
	shared_ptr<WeakAlien> weakAlien;
};

