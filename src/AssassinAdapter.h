#pragma once
#include "Assassin.h"
#include "Units.h"
class AssassinAdapter :
	public Units
{
public:
	AssassinAdapter();
	void attack() const override;
	~AssassinAdapter();
private:
	shared_ptr<Assassin> assassin;
};

