#pragma once
#include "CastleBuilder.h"
class CastleDirector
{
public:
	CastleDirector();
	CastleDirector(shared_ptr<CastleBuilder> _castleBuilder);
	shared_ptr<Building> getBuilding();
	void MakeBuilding();
	~CastleDirector();
private:
	shared_ptr<CastleBuilder> castleBuilder;
};

