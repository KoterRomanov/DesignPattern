#include "component.h"

int main( int argc, char **argv )
{
  string name = string();
  
  Composite *composite = new Composite();
  
  name = string("Widget");
  Component *widget = new Leaf(name);
  
  name = string("Button");
  Component *button = new Leaf(name);
  
  name = string("Label");
  Component *label = new Leaf(name);
  
  composite->add(widget);
  composite->add(button);
  composite->add(label);
  composite->display();
  
  system("pause");
  return 0;
}
