#include "observer.h"

int main( int argc, char **argv )
{
	Subject sub;

	Observer *obj1 = new Observer("tom1");
	Observer *obj2 = new Observer("tom2");

	sub.add(obj1);
	sub.add(obj2);

	sub.setPrice(100);//更改了价格
	sub.Notify();//通知所有观察者

	return 0;
}