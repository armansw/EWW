#pragma once
#include "BuildingBuilder.h"
#include "Building.h"
#include "Bank.h" 
class BankBuilder :
	public BuildingBuilder
{
public:
	BankBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildSafe();
	shared_ptr<Building> getBuilding() const override;
	~BankBuilder();
private:
	shared_ptr<Bank> bank;
};

