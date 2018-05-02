#pragma once
#include "MineBuilder.h"
#include "Mine.h"
class DiamondMineBuilder :
	public MineBuilder
{
public:
	DiamondMineBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildResource() override;
	void buildSeperateMachine() override;
	shared_ptr<Building> getBuilding() const override;
	~DiamondMineBuilder();
private:
	shared_ptr<Mine> mine;
};

