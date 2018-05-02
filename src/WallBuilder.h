#pragma once
#include "BuildingBuilder.h"
#include "Building.h"
class WallBuilder :
	public BuildingBuilder
{
public:
	WallBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	shared_ptr<Building> getBuilding() const override;
	~WallBuilder();
private:
	shared_ptr<Building> building;
};

