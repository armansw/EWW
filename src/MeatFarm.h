#pragma once
#include "Farm.h"
class MeatFarm :
	public Farm
{
public:
	MeatFarm();
	int getArea() const override;
	string getSafety() const override;
	string getWall() const override;
	string getWorkingPlace() const override;
	string getResource() const override;
	void setArea(int _area) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	void setWorkingPlace(string _workingPlace) override;
	void setResource(string _resource) override;
	~MeatFarm();
private:
	int area;
	string safety;
	string wall;
	string resource;
	string workingPlace;
};

