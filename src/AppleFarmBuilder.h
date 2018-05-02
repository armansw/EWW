#pragma once
#include "FarmBuilder.h"
#include "Building.h"
#include "AppleFarm.h"
class AppleFarmBuilder :
	public FarmBuilder
{
public:
	AppleFarmBuilder();
	void buildArea() override;
	void buildWall() override;
	void buildSafety() override;
	void buildBody() override;
	void buildResource() override;
	void buildWorkingPlace() override;
	shared_ptr<Building> getBuilding() const override;
	~AppleFarmBuilder();
private:
	shared_ptr<Farm> farm;
};

