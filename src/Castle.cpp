#include "Castle.h"



Castle::Castle()
{
}


int Castle::getArea() const {
	return this->area;
}


string Castle::getBody() const {
	return this->body;
}


string Castle::getSafety() const {
	return this->safety;
}


string Castle::getGate() const{
	return this->gate;
}


string Castle::getWall() const {
	return this->wall;
}


void Castle::setArea(int buildingArea) {
	area = buildingArea;
}


void Castle::setBody(string _body) {
	body = _body;
}


void Castle::setSafety(string _safety) {
	safety = _safety;
}


void Castle::setWall(string _wall) {
	wall = _wall;
}


void Castle::setGate(string _gate) {
	gate = _gate;
}


Castle::~Castle()
{
}
