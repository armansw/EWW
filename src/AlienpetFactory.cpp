#include "AlienpetFactory.h"
#include "AlienPet.h"



AlienPetFactory::AlienPetFactory()
{
}


shared_ptr<AbstractUnit> AlienPetFactory::createUnit() {
	return make_shared<AlienPet>();
}


AlienPetFactory::~AlienPetFactory()
{
}
