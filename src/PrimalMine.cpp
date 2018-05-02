#include "PrimalMine.h"



PrimalMine::PrimalMine()
{
}


int PrimalMine::getArea() const {
	return this->area;
}


string PrimalMine::getResource() const {
	return this->resource;
}


string PrimalMine::getSeperateMachine() const {
	return this->seperateMachine;
}


string PrimalMine::getBody() const {
	return this->body;
}


string PrimalMine::getSafety() const {
	return this->safety;
}


string PrimalMine::getWall() const {
	return this->wall;
}


void PrimalMine::setArea(int buildingArea) {
	area = buildingArea;
}


void PrimalMine::setResource(string _resource) {
	resource = _resource;
}


void PrimalMine::setSeperateMachine(string _seperateMachine) {
	seperateMachine = _seperateMachine;
}


void PrimalMine::setBody(string _body) {
	body = _body;
}


void PrimalMine::setSafety(string _safety) {
	safety = _safety;
}


void PrimalMine::setWall(string _wall) {
	wall = _wall;
}


PrimalMine::~PrimalMine()
{
}
