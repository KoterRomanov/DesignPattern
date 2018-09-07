#ifndef OBSERVER_H
#define OBSERVER_H

/************************************************************************/
/*                                                                      */
/************************************************************************/

#include <iostream>
#include <list>

using namespace std;

//抽象观察者
class AbstractObserver
{
public:
	virtual void update(int price)=0;
};

//抽象主题
class AbstractSubject
{
public:
	virtual void add(AbstractObserver*)=0;
	virtual void remove(AbstractObserver*)=0;
	virtual void Notify()=0;
};

//观察者
class Observer : public AbstractObserver
{
public:
	Observer(string name):m_name(name){

	}

	void update(int price){
		m_standard_price = price;
		cout << "name: " << m_name.data() << " price: " << m_standard_price << endl;
	}

private:
	string m_name;
	int m_standard_price;
};

//主题
class Subject : public AbstractSubject
{
public:
	Subject(){
		m_price = 10;
	}

	inline void setPrice(int price){
		m_price = price;
	}

	inline void add(AbstractObserver *obj){
		m_objs.push_back( obj );
	}

	inline void remove(AbstractObserver *obj){
		m_objs.remove(obj);
	}

	void Notify(){
		list<AbstractObserver*>::iterator it = m_objs.begin();
		while( it != m_objs.end() ){
			(*it)->update(m_price);
			++it;
		}
	}


private:
	int m_price;
	list<AbstractObserver*>m_objs;
};






















#endif //OBSERVER