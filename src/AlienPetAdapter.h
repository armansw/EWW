#pragma once
#include "AlienPet.h"
#include "Units.h"
class AlienPetAdapter :
	public Units
{
public:
	AlienPetAdapter();
	void attack() const override;
	~AlienPetAdapter();
private:
	shared_ptr<AlienPet> alienPet;
};

