#include "observer.h"

int main( int argc, char **argv )
{
	Subject sub;

	Observer *obj1 = new Observer("tom1");
	Observer *obj2 = new Observer("tom2");

	sub.add(obj1);
	sub.add(obj2);

	sub.setPrice(100);//�����˼۸�
	sub.Notify();//֪ͨ���й۲���

	return 0;
}