#pragma once
#include "Morph.h"
#include "Units.h"
class MorphAdapter :
	public Units
{
public:
	MorphAdapter();
	void attack() const override;
	~MorphAdapter();
private:
	shared_ptr<Morph> morph;
};

