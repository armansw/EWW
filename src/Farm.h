#pragma once
#include "Building.h"
class Farm :
	public Building
{
public:
	Farm();
	virtual string getWorkingPlace() const = 0;
	virtual string getResource() const = 0;
	virtual void setWorkingPlace(string _workingPlace) = 0;
	virtual void setResource(string _resource) = 0;
	~Farm();
};

