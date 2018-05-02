#include "BlackMarket.h"



BlackMarket::BlackMarket()
{
}


int BlackMarket::getArea() const {
	return this->area;
}


string BlackMarket::getBody() const {
	return this->body;
}


string BlackMarket::getSafety() const {
	return this->safety;
}


string BlackMarket::getWall() const {
	return this->wall;
}


string BlackMarket::getSeller() const {
	return this->seller;
}


void BlackMarket::setArea(int buildingArea) {
	area = buildingArea;
}


void BlackMarket::setBody(string _body) {
	body = _body;
}


void BlackMarket::setSafety(string _safety) {
	safety = _safety;
}


void BlackMarket::setWall(string _wall) {
	wall = _wall;
}


void BlackMarket::setSeller(string _seller) {
	seller = _seller;
}


BlackMarket::~BlackMarket()
{
}
