#include "Wall.h"



Wall::Wall()
{
}


int Wall::getArea() const {
	return this->area;
}


string Wall::getBody() const {
	return this->body;
}


string Wall::getSafety() const {
	return this->safety;
}


string Wall::getWall() const {
	return this->wall;
}


void Wall::setArea(int buildingArea) {
	area = buildingArea;
}


void Wall::setBody(string _body) {
	body = _body;
}


void Wall::setSafety(string _safety) {
	safety = _safety;
}


void Wall::setWall(string _wall) {
	wall = _wall;
}


Wall::~Wall()
{
}
