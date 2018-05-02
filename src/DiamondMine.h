#pragma once
#include "Mine.h"
class DiamondMine :
	public Mine
{
public:
	DiamondMine();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getWall() const override;
	string getSeperateMachine() const override;
	string getResource() const override;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	void setSeperateMachine(string _seperateMachine) override;
	void setResource(string _resource);
	~DiamondMine();
private:
	int area;
	string body;
	string safety;
	string wall;
	string resource;
	string seperateMachine;
};

