#include "prototype.h"

int main( int argc, char **argv )
{
  ConcretePrototype *obj = new ConcretePrototype("KoterRomanov");
  
  Prototype *copy1 = obj->clone();
  copy1->print();
  
  Prototype *copy2 = obj->clone();
  copy2->print();

  return 0;
}
