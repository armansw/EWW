#pragma once
#include <string>
#include "AlienAssaultAdapter.h"
#include "AlienMachineGunnerAdapter.h"
#include "AlienPetAdapter.h"
#include "BlackSoldierAdapter.h"
#include "DeserterAdapter.h"
#include "GiantAlienAdapter.h"
#include "MorphX2Adapter.h"
#include <memory>
using std::shared_ptr;
using std::string;
class EnemyUnitAdapter
{
public:
	EnemyUnitAdapter();
	EnemyUnitAdapter(shared_ptr<AlienAssault> _alienAssault);
	EnemyUnitAdapter(shared_ptr<AlienMachineGunner> _alienMachinegunner);
	EnemyUnitAdapter(shared_ptr<AlienPet> _alienPet);
	EnemyUnitAdapter(shared_ptr<BlackSoldier> _blackSoldier);
	EnemyUnitAdapter(shared_ptr<Deserter> _deserter);
	EnemyUnitAdapter(shared_ptr<GiantAlien> _giantAlien);
	EnemyUnitAdapter(shared_ptr<MorphX2> _morphX2);
	~EnemyUnitAdapter();
private:
	shared_ptr<AlienAssault> alienAssault;
	shared_ptr<AlienMachineGunner> alienMachinegunner;
	shared_ptr<AlienPet> alienPet;
	shared_ptr<BlackSoldier> blackSoldier;
	shared_ptr<Deserter> deserter;
	shared_ptr<GiantAlien> giantAlien;
	shared_ptr<MorphX2> morphX2;
};

