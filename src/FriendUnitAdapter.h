#pragma once
#include "AssassinAdapter.h"
#include "GeneralAdapter.h"
#include "HeavyGunnerAdapter.h"
#include "MachineGunnerAdapter.h"
#include "MorphAdapter.h"
#include "OfficerAdapter.h"
#include "ParatrooperAdapter.h"
#include "SapperAdapter.h"
#include "ScoutAdapter.h"
#include "SniperAdapter.h"
#include "SoldierAdapter.h"
#include "SupportAdapter.h"
#include <memory>
using std::shared_ptr;
class FriendUnitAdapter
{
public:
	FriendUnitAdapter();
	FriendUnitAdapter(shared_ptr<AssassinAdapter> _assassin);
	FriendUnitAdapter(shared_ptr<GeneralAdapter> _general);
	FriendUnitAdapter(shared_ptr<HeavyGunnerAdapter> _heavygunner);
	FriendUnitAdapter(shared_ptr<MachineGunnerAdapter> _machinegunner);
	FriendUnitAdapter(shared_ptr<MorphAdapter> _morph);
	FriendUnitAdapter(shared_ptr<OfficerAdapter> _officer);
	FriendUnitAdapter(shared_ptr<ParatrooperAdapter> _paratrooper);
	FriendUnitAdapter(shared_ptr<SapperAdapter> _sapper);
	FriendUnitAdapter(shared_ptr<ScoutAdapter> _scout);
	FriendUnitAdapter(shared_ptr<SniperAdapter> _sniper);
	FriendUnitAdapter(shared_ptr<SoldierAdapter> _soldier);
	FriendUnitAdapter(shared_ptr<SupportAdapter> _support);
	~FriendUnitAdapter();
private:
	shared_ptr<AssassinAdapter> assassin;
	shared_ptr<GeneralAdapter> general;
	shared_ptr<HeavyGunnerAdapter> heavygunner;
	shared_ptr<MachineGunnerAdapter> machinegunner;
	shared_ptr<MorphAdapter> morph;
	shared_ptr<ParatrooperAdapter> paratrooper;
	shared_ptr<SapperAdapter> sapper;
	shared_ptr<ScoutAdapter> scout;
	shared_ptr<SniperAdapter> sniper;
	shared_ptr<SoldierAdapter> soldier;
	shared_ptr<SupportAdapter> support;
};


