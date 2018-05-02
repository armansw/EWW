#include "TomatoFarm.h"



TomatoFarm::TomatoFarm()
{
}


int TomatoFarm::getArea() const {
	return this->area;
}


string TomatoFarm::getSafety() const {
	return this->safety;
}


string TomatoFarm::getWall() const {
	return this->wall;
}


string TomatoFarm::getWorkingPlace() const {
	return this->workingPlace;
}


string TomatoFarm::getResource() const {
	return this->resource;
}


void TomatoFarm::setArea(int buildingArea) {
	area = buildingArea;
}


void TomatoFarm::setSafety(string _safety) {
	safety = _safety;
}


void TomatoFarm::setWall(string _wall) {
	wall = _wall;
}


void TomatoFarm::setWorkingPlace(string _workingPlace) {
	workingPlace = _workingPlace;
}


void TomatoFarm::setResource(string _resource) {
	resource = _resource;
}


TomatoFarm::~TomatoFarm()
{
}
