#pragma once
#include "Mine.h"
class PrimalMine :
	public Mine
{
public:
	PrimalMine();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getWall() const override;
	string getSeperateMachine() const;
	string getResource() const;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	void setSeperateMachine(string _seperateMachine);
	void setResource(string _resource);
	~PrimalMine();
private:
	int area;
	string body;
	string safety;
	string wall;
	string resource;
	string seperateMachine;
};

