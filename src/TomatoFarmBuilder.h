#pragma once
#include "FarmBuilder.h"
#include "Farm.h"
class TomatoFarmBuilder :
	public FarmBuilder
{
public:
	TomatoFarmBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildResource() override;
	void buildWorkingPlace() override;
	shared_ptr<Building> getBuilding() const override;
	~TomatoFarmBuilder();
private:
	shared_ptr<Farm> farm;
};

