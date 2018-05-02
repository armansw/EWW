#include "AlienAssaultFactory.h"
#include "AlienAssault.h"
#include <memory>
using namespace std;

AlienAssaultFactory::AlienAssaultFactory()
{
}


shared_ptr<AbstractUnit> AlienAssaultFactory::createUnit(){
	return make_shared<AlienAssault>();
}


AlienAssaultFactory::~AlienAssaultFactory()
{
}
