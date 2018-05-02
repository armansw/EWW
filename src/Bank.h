#pragma once
#include "Building.h"
class Bank :
	public Building
{
public:
	Bank();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getSafe() const;
	string getWall() const override;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setSafe(string _safe);
	void setWall(string _wall) override;
	~Bank();
private:
	int area;
	string body;
	string safety;
	string safe;
	string wall;
};

