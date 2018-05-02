#include "EnemyUnitAdapter.h"



EnemyUnitAdapter::EnemyUnitAdapter()
{
}

EnemyUnitAdapter::EnemyUnitAdapter(shared_ptr<AlienAssault> _alienAssault) {
	alienAssault = _alienAssault;
}


EnemyUnitAdapter::EnemyUnitAdapter(shared_ptr<AlienMachineGunner> _alienMachinegunner) {
	alienMachinegunner = _alienMachinegunner;
}


EnemyUnitAdapter::EnemyUnitAdapter(shared_ptr<AlienPet> _alienPet) {
	alienPet = _alienPet;
}

EnemyUnitAdapter::EnemyUnitAdapter(shared_ptr<BlackSoldier> _blackSoldier) {
	blackSoldier = _blackSoldier;
}

EnemyUnitAdapter::EnemyUnitAdapter(shared_ptr<Deserter> _deserter) {
	deserter = _deserter;
}

EnemyUnitAdapter::EnemyUnitAdapter(shared_ptr<GiantAlien> _giantAlien) {
	giantAlien = _giantAlien;
}

EnemyUnitAdapter::EnemyUnitAdapter(shared_ptr<MorphX2> _morphX2) {
	morphX2 = _morphX2;
}

EnemyUnitAdapter::~EnemyUnitAdapter()
{
}
