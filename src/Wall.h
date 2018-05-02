#pragma once
#include "Building.h"
class Wall :
	public Building
{
public:
	Wall();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getWall() const override;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	~Wall();
private:
	int area;
	string wall;
	string safety;
	string body;
};

