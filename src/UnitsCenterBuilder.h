#pragma once
#include "BuildingBuilder.h"
#include "Building.h"
class UnitsCenterBuilder :
	public BuildingBuilder
{
public:
	UnitsCenterBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	shared_ptr<Building> getBuilding() const override;
	~UnitsCenterBuilder();
private:
	shared_ptr<Building> building;
};
