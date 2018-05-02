#include "MorphX2Factory.h"


MorphX2Factory::MorphX2Factory()
{
}


shared_ptr<AbstractUnit> MorphX2Factory:: createUnit() {
	return  make_shared<MorphX2>();
}


MorphX2Factory::~MorphX2Factory()
{
}
