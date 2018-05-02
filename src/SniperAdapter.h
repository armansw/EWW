#pragma once
#include "Sniper.h"
#include "Units.h"
class SniperAdapter :
	public Units
{
public:
	SniperAdapter();
	void attack() const override;
	~SniperAdapter();
private:
	shared_ptr<Sniper> sniper;
};

