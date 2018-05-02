#pragma once
#include "Building.h"
class Castle :
	public Building
{
public:
	Castle();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getWall() const override;
	string getGate() const;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	void setGate(string _gate);
	~Castle();
private:
	int area;
	string body;
	string safety;
	string wall;
	string gate;
};

