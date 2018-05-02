#include "DiamondMine.h"



DiamondMine::DiamondMine()
{
}


int DiamondMine::getArea() const {
	return this->area;
}


string DiamondMine::getResource() const {
	return this->resource;
}


string DiamondMine::getSeperateMachine() const {
	return this->seperateMachine;
}


string DiamondMine::getBody() const {
	return this->body;
}


string DiamondMine::getSafety() const {
	return this->safety;
}


string DiamondMine::getWall() const {
	return this->wall;
}


void DiamondMine::setArea(int buildingArea) {
	area = buildingArea;
}


void DiamondMine::setResource(string _resource) {
	resource = _resource;
}


void DiamondMine::setSeperateMachine(string _seperateMachine) {
	seperateMachine = _seperateMachine;
}


void DiamondMine::setBody(string _body) {
	body = _body;
}


void DiamondMine::setSafety(string _safety) {
	safety = _safety;
}


void DiamondMine::setWall(string _wall) {
	wall = _wall;
}


DiamondMine::~DiamondMine()
{
}
