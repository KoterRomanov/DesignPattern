#include "factorymethod.h"

int main( int argc, char **argv )
{
	AbstractAnimalFactory *factory = new TigerFactor;
	factory->create()->name();

	factory = new LionFactory;
	factory->create()->name();


	return 0;
}