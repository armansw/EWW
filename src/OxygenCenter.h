#pragma once
#include "Building.h"
class OxygenCenter :
	public Building
{
public:
	OxygenCenter();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getWall() const override;
	string getPhotosynthesisMachine() const;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	void setPhotosynthesisMachine(string _seller);
	~OxygenCenter();
private:
	int area;
	string body;
	string safety;
	string wall;
	string photosynthesisMachine;
};

