#pragma once
#include "Farm.h"
class AppleFarm :
	public Farm
{
public:
	AppleFarm();
	int getArea() const override;
	string getWall() const override;
	string getWorkingPlace() const override;
	string getResource() const override;
	string getSafety() const override;
	void setArea(int _area) override;
	void setWall(string _wall) override;
	void setWorkingPlace(string _workingPlace) override;
	void setResource(string _resource) override;
	void setSafety(string _safety) override;
	~AppleFarm();
private:
	int area;
	string wall;
	string safety;
	string resource;
	string workingPlace;
};

