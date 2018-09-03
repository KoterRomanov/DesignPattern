#include "decorator.h"

int main( int argc, char **argv )
{
	Person *p = new Person("liming");
	TShit *ts = new TShit;
	BigTrouser *bt = new BigTrouser;

	ts->decorator(p);
	bt->decorator(ts);
	bt->show();

	return 0;
}