#include "AppleFarm.h"



AppleFarm::AppleFarm()
{
}


int AppleFarm::getArea() const {
	return this->area;
}


string AppleFarm::getWall() const {
	return this->wall;
}


string AppleFarm::getWorkingPlace() const {
	return this->workingPlace;
}


string AppleFarm::getResource() const {
	return this->resource;
}


string AppleFarm::getSafety() const {
	return this->safety;
}


void AppleFarm::setArea(int buildingArea) {
	area = buildingArea;
}


void AppleFarm::setWall(string _wall) {
	wall = _wall;
}


void AppleFarm::setWorkingPlace(string _workingPlace) {
	workingPlace = _workingPlace;
}


void AppleFarm::setResource(string _resource) {
	resource = _resource;
}


void AppleFarm::setSafety(string _safety) {
	safety = _safety;
}


AppleFarm::~AppleFarm() {}

