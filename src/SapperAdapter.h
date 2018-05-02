#pragma once
#include "Sapper.h"
#include "Units.h"
class SapperAdapter :
	public Units
{
public:
	SapperAdapter();
	SapperAdapter(shared_ptr<Sapper> _sapper);
	void attack() const override;
	~SapperAdapter();
private:
	shared_ptr<Sapper> sapper;
};

