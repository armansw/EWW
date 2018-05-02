#pragma once
#include "Building.h"
#include "FarmBuilder.h"
class FarmDirector {
public:
	FarmDirector();
	FarmDirector(shared_ptr<FarmBuilder> _farmBuilder);
	shared_ptr<Building> getBuilding();
	void MakeBuilding();
	~FarmDirector();
private:
	shared_ptr<FarmBuilder> farmBuilder;
};

