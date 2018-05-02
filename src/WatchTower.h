#pragma once
#include "Building.h"
class WatchTower :
	public Building
{
public:
	WatchTower();
	int getArea() const override;
	string getBody() const override;
	string getSafety() const override;
	string getWall() const override;
	string getWatcher() const;
	void setArea(int _area) override;
	void setBody(string _body) override;
	void setSafety(string _safety) override;
	void setWall(string _wall) override;
	void setWatcher(string _watcher);
	~WatchTower();
private:
	int area;
	string wall;
	string safety;
	string body;
	string watcher;
};

