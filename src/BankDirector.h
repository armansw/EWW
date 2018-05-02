#pragma once
#include "Building.h"
#include "BankBuilder.h"
class BankDirector
{
public:
	BankDirector();
	BankDirector(shared_ptr<BankBuilder> _bankBuilder);
	shared_ptr<Building> getBuilding();
	void MakeBuilding();
	~BankDirector();
private:
	shared_ptr<BankBuilder> bankBuilder;
};

