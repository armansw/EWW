#pragma once
#include "BuildingBuilder.h"
#include "OxygenCenter.h"
class OxygenCenterBuilder :
	public BuildingBuilder {
public:
	OxygenCenterBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	shared_ptr<Building> getBuilding() const override;
	~OxygenCenterBuilder();
private:
	shared_ptr<OxygenCenter> oxygenCenter;
};