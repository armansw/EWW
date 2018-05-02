#pragma once
#include "Building.h"
class Market :
	public Building
{
public:
	Market();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getWall() const override;
	string getSeller() const;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	void setSeller(string _seller);
	~Market();
private:
	int area;
	string body;
	string safety;
	string wall;
	string seller;
};

