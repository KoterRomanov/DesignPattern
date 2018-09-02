#include "strategy.h"
#include <iostream>

using namespace std;

int main( int argc, char **argv )
{
	Strategy *add = new Add(100, 200);
	Context *addContext = new Context(add);
	cout << addContext->getResult() << endl;

	Strategy *sub = new Sub(200, 100);
	Context *subContext = new Context(sub);
	cout << subContext->getResult() << endl;

	return 0;
}