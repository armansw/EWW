#pragma once
#include "Paratrooper.h"
#include "Units.h"
class ParatrooperAdapter :
	public Units
{
public:
	ParatrooperAdapter();
	void attack() const override;
	~ParatrooperAdapter();
private:
	shared_ptr<Paratrooper> paratrooper;
};

