#pragma once
#include "MineBuilder.h"
class MineDirector
{
public:
	MineDirector();
	MineDirector(shared_ptr<MineBuilder> _mineBuilder);
	void MakeBuilding();
	shared_ptr<Building> getBuilding();
	~MineDirector();
private:
	shared_ptr<MineBuilder> mineBuilder;
};

