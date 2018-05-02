#include "MeatFarm.h"



MeatFarm::MeatFarm()
{
}


int MeatFarm::getArea() const {
	return this->area;
}


string MeatFarm::getSafety() const {
	return this->safety;
}


string MeatFarm::getWall() const {
	return this->wall;
}


string MeatFarm::getWorkingPlace() const {
	return this->workingPlace;
}


string MeatFarm::getResource() const {
	return this->resource;
}


void MeatFarm::setArea(int buildingArea) {
	area = buildingArea;
}


void MeatFarm::setSafety(string _safety) {
	safety = _safety;
}


void MeatFarm::setWall(string _wall) {
	wall = _wall;
}


void MeatFarm::setWorkingPlace(string _workingPlace) {
	workingPlace = _workingPlace;
}


void MeatFarm::setResource(string _resource) {
	resource = _resource;
}


MeatFarm::~MeatFarm()
{
}
