#pragma once
#include "MineBuilder.h"
#include "Mine.h"
class PrimalMineBuilder :
	public MineBuilder
{
public:
	PrimalMineBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildResource() override;
	void buildSeperateMachine() override;
	shared_ptr<Building> getBuilding() const override;
	~PrimalMineBuilder();
private:
	shared_ptr<Mine> mine;
};

