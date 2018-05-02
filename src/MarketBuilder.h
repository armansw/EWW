#pragma once
#include "BuildingBuilder.h"
#include "Building.h"
class MarketBuilder :
	public BuildingBuilder
{
public:
	MarketBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	shared_ptr<Building> getBuilding() const override;
	~MarketBuilder();
private:
	shared_ptr<Building> building;
};

