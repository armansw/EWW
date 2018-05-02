#include "AppleFarmBuilder.h"


AppleFarmBuilder::AppleFarmBuilder()
{
}


void AppleFarmBuilder::buildArea() {
	farm->setArea(100);
}


void AppleFarmBuilder::buildBody() {
	farm->setBody("AppleFarm corps");
}


void AppleFarmBuilder::buildResource() {
	farm->setResource("Apple");
}


void AppleFarmBuilder::buildSafety() {
	farm->setSafety("very low");
}


void AppleFarmBuilder::buildWall() {
	farm->setWall("low-level weak wall");
}


void AppleFarmBuilder::buildWorkingPlace() {
	farm->setWorkingPlace("Apple plantation");
}


shared_ptr<Building> AppleFarmBuilder::getBuilding() const {
	return this->farm;
}


AppleFarmBuilder::~AppleFarmBuilder()
{
}
