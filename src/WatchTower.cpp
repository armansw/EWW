#include "WatchTower.h"



WatchTower::WatchTower()
{
}


int WatchTower::getArea() const {
	return this->area;
}


string WatchTower::getBody() const {
	return this->body;
}


string WatchTower::getSafety() const {
	return this->safety;
}


string WatchTower::getWall() const {
	return this->wall;
}


void WatchTower::setArea(int buildingArea) {
	area = buildingArea;
}


string WatchTower::getWatcher() const {
	return this->watcher;
}


void WatchTower::setBody(string _body) {
	body = _body;
}


void WatchTower::setSafety(string _safety) {
	safety = _safety;
}


void WatchTower::setWall(string _wall) {
	wall = _wall;
}


void WatchTower::setWatcher(string _watcher) {
	watcher = _watcher;
}


WatchTower::~WatchTower()
{
}
