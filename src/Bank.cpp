#include "Bank.h"



Bank::Bank()
{
}


int Bank::getArea() const {
	return this->area;
}


string Bank::getBody() const {
	return this->body;
}


string Bank::getSafety() const {
	return this->safety;
}


string Bank::getSafe() const {
	return this->safe;
}


string Bank::getWall() const {
	return this->wall;
}


void Bank::setArea(int buildingArea) {
	area = buildingArea;
}


void Bank::setBody(string _body) {
	body = _body;
}


void Bank::setSafety(string _safety) {
	safety = _safety;
}


void Bank::setSafe(string _safe) {
	safe = _safe;
}


void Bank::setWall(string _wall) {
	wall = _wall;
}


Bank::~Bank()
{
}
