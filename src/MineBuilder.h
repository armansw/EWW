#pragma once
#include "BuildingBuilder.h"
class MineBuilder :
	public BuildingBuilder
{
public:
	MineBuilder();
	virtual void buildResource() = 0;
	virtual void buildSeperateMachine() = 0;
	~MineBuilder();
};

