#pragma once
#include "Client.h"
#include <string>
using namespace std;
class Building :
	public Client
{
public:
	Building();
	virtual int getArea() const = 0;
	virtual string getBody() const = 0;
	virtual string getSafety() const = 0;
	virtual string getWall() const = 0;
	virtual void setArea(int _area) = 0;
	virtual void setBody(string _body) = 0;
	virtual void setWall(string _wall) = 0;
	virtual void setSafety(string _safety) = 0;
	~Building();
};

