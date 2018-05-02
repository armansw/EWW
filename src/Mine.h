
#include "Building.h"
class Mine :
	public Building
{
public:
	Mine();
	virtual string getSeperateMachine() const = 0;
	virtual string getResource() const = 0;
	virtual void setResource(string _resource) = 0;
	virtual void setSeperateMachine(string _seperateMachine) = 0;
	~Mine();
};
