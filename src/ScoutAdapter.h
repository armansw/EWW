#pragma once
#include "Scout.h"
#include "Units.h"
class ScoutAdapter :
	public Units
{
public:
	ScoutAdapter();
	void attack() const override;
	~ScoutAdapter();
private:
	shared_ptr<Scout> scout;
};

