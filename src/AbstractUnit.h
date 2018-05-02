#pragma once
#include <iostream>
#include "Client.h"
#include <string>
#include <memory>
using std::string;
using std::shared_ptr;
using std::cout;
class AbstractUnit :
	public Client
{
public:
	AbstractUnit();
	virtual int getHP() const = 0;
	virtual int getArmory() const = 0;
	virtual int getTactics() const = 0;
	virtual int getAttack() const = 0;
	virtual void setHP(int _HP) = 0;
	virtual void setArmory(int _Armory) = 0;
	virtual void setTactics(int _Tactics) = 0;
	virtual void setAttack(int _Attack) = 0;
	~AbstractUnit();
};

