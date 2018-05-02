#pragma once
#include "FarmBuilder.h"
#include "Farm.h"
class MeatFarmBuilder :
	public FarmBuilder
{
public:
	MeatFarmBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildResource() override;
	void buildWorkingPlace() override;
	shared_ptr<Building> getBuilding() const override;
	~MeatFarmBuilder();
private:
	shared_ptr<Farm> farm;
};

