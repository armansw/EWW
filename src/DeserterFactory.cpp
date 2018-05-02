#include "DeserterFactory.h"
#include "Deserter.h"


DeserterFactory::DeserterFactory()
{
}


shared_ptr<AbstractUnit> DeserterFactory::createUnit() {
	return make_shared<Deserter>();
}


DeserterFactory::~DeserterFactory()
{
}
