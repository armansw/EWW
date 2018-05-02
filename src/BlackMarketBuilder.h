#pragma once
#include "BuildingBuilder.h"
#include "Building.h"
class BlackMarketBuilder :
	public BuildingBuilder
{
public:
	BlackMarketBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	shared_ptr<Building> getBuilding() const override;
	~BlackMarketBuilder();
private:
	shared_ptr<Building> building;
};

