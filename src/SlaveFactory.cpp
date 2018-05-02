#include "SlaveFactory.h"



SlaveFactory::SlaveFactory()
{
}


shared_ptr<AbstractUnit> SlaveFactory::createUnit() {
	return make_shared<Slave>();
}


SlaveFactory::~SlaveFactory()
{
}
