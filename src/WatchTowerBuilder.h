#pragma once
#include "BuildingBuilder.h"
#include "Building.h"
class WatchTowerBuilder :
	public BuildingBuilder
{
public:
	WatchTowerBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	shared_ptr<Building> getBuilding() const override;
	~WatchTowerBuilder();
private:
	shared_ptr<Building> building;
};

