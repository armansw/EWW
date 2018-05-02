#include "OxygenCenter.h"



OxygenCenter::OxygenCenter()
{
}


int OxygenCenter::getArea() const {
	return this->area;
}


string OxygenCenter::getBody() const {
	return this->body;
}


string OxygenCenter::getSafety() const {
	return this->safety;
}


string OxygenCenter::getWall() const {
	return this->wall;
}


string OxygenCenter::getPhotosynthesisMachine() const {
	return this->photosynthesisMachine;
}


void OxygenCenter::setArea(int buildingArea) {
	area = buildingArea;
}


void OxygenCenter::setBody(string _body) {
	body = _body;
}


void OxygenCenter::setSafety(string _safety) {
	safety = _safety;
}


void OxygenCenter::setWall(string _wall) {
	wall = _wall;
}


void OxygenCenter::setPhotosynthesisMachine(string _photosynthesisMachine) {
	photosynthesisMachine = _photosynthesisMachine;
}


OxygenCenter::~OxygenCenter()
{
}
