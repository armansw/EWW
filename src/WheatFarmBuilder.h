#pragma once
#include "FarmBuilder.h"
#include "Farm.h"
class WheatFarmBuilder :
	public FarmBuilder
{
public:
	WheatFarmBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildResource();
	void buildWorkingPlace();
	shared_ptr<Building> getBuilding() const override;
	~WheatFarmBuilder();
private:
	shared_ptr<Farm> farm;
};

