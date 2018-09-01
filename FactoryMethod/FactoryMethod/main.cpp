#include "factorymethod.h"

int main( int argc, char **argv )
{
	AbstractAnimalFactory *factory = new TigerFactor;
	AbstractAnimal *tiger = factory->create();
	tiger->name();

	factory = new LionFactory;
	AbstractAnimal *lion = factory->create();
	lion->name();

	return 0;
}