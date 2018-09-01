#include "adapter.h"

int main( int argc, char **argv )
{
	Target *tag = new Adapter;
	tag->Request();

	return 0;
}