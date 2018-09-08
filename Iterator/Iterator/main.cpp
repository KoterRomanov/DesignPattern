#include "iterator.h"
#include <iostream>

using namespace std;

int main( int argc, char **argv )
{
	Aggregate  *lst = new Aggregate;
	lst->insert("a");
	lst->insert("b");
	lst->insert("c");

	AbstractIterator *it = lst->createIterator();
	cout << it->item().data() << endl;
	it->next();
	cout << it->item().data() << endl;
	it->next();
	cout << it->item().data() << endl;
	it->first();
	cout << it->item().data() << endl;


	return 0;
}