#pragma once
#include "BuildingBuilder.h"
#include "Castle.h"
class CastleBuilder :
	public BuildingBuilder
{
public:
	CastleBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildGate();
	shared_ptr<Building> getBuilding() const override;
	~CastleBuilder();
private:
	shared_ptr<Castle> castle;
};

