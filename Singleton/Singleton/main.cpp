#include <iostream>
#include "singleton.h"

using namespace std;

int main( int argc, char ** argv )
{
	single *obj = single::getInstance();
	cout << "The single address: " << obj << endl;

	single *newObj = single::getInstance();
	cout << "The new single address: " << newObj << endl;


	return 0;
}