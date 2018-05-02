#pragma once
#include "BuildingBuilder.h"
#include "Farm.h"
class FarmBuilder :
	public BuildingBuilder
{
public:
	FarmBuilder();
	virtual void buildWorkingPlace() = 0;
	virtual void buildResource() = 0;
	~FarmBuilder();
};

