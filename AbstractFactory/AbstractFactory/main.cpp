#include "abstractfactory.h"

int main( int argc, char **argv )
{
	AbstractProduceLine *omg = new OmgProduceLine();
	SoftWareEngineer *omgSE = omg->createSE();
	HardwareEngineer *omgHE = omg->createHE();
	omgSE->increase();
	omgSE->decrease();
	omgHE->increase();
	omgHE->decrease();

	AbstractProduceLine *pmg = new PmgProduceLine();
	SoftWareEngineer *pmgSE = pmg->createSE();
	HardwareEngineer *pmgHE = pmg->createHE();
	pmgSE->increase();
	pmgSE->decrease();
	pmgHE->increase();
	pmgHE->decrease();

	return 0;
}