#include "FriendUnitAdapter.h"



FriendUnitAdapter::FriendUnitAdapter()
{
}

FriendUnitAdapter::FriendUnitAdapter(shared_ptr<AssassinAdapter> _assassin) {
	assassin = _assassin;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<GeneralAdapter> _general) {
	general = _general;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<HeavyGunnerAdapter> _heavygunner) {
	heavygunner = _heavygunner;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<MachineGunnerAdapter> _machinegunner) {
	machinegunner = _machinegunner;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<MorphAdapter> _morph) {
	morph = _morph;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<ParatrooperAdapter> _paratrooper) {
	paratrooper = _paratrooper;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<SapperAdapter> _sapper) {
	sapper = _sapper;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<ScoutAdapter> _scout) {
	scout = _scout;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<SniperAdapter> _sniper) {
	sniper = _sniper;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<SoldierAdapter> _soldier) {
	soldier = _soldier;
}


FriendUnitAdapter::FriendUnitAdapter(shared_ptr<SupportAdapter> _support) {
	support = _support;
}


FriendUnitAdapter::~FriendUnitAdapter()
{
}
