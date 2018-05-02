#include "Market.h"



Market::Market()
{
}


int Market::getArea() const {
	return this->area;
}


string Market::getBody() const {
	return this->body;
}


string Market::getSafety() const {
	return this->safety;
}


string Market::getWall() const {
	return this->wall;
}


string Market::getSeller() const {
	return this->seller;
}


void Market::setArea(int buildingArea) {
	area = buildingArea;
}


void Market::setBody(string _body) {
	body = _body;
}


void Market::setSafety(string _safety) {
	safety = _safety;
}


void Market::setWall(string _wall) {
	wall = _wall;
}


void Market::setSeller(string _seller) {
	seller = _seller;
}


Market::~Market()
{
}
