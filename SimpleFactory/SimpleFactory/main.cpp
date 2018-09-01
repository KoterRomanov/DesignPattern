#include "simplefactory.h"


int main( int argc, char **argv )
{
	Operator *add = Factory::create('+');
	add->setFirst(100);
	add->setSecond(100);
	cout << add->getResult() << endl;

	Operator *sub = Factory::create('-');
	sub->setFirst(1000);
	sub->setSecond(999);
	cout << sub->getResult() << endl;

	return 0;
}