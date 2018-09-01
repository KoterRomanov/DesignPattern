#ifndef FACTORYMETHOD_H
#define FACTORYMETHOD_H

/******************************************************************************************************************
Copyright: Koter Romanov

Author: Koter Romanov

Date:2018-09-01

Description: 设计模式之工厂方法模式
*******************************************************************************************************************/

#include <iostream>

using namespace std;

//抽象动物类
class AbstractAnimal
{
public:
	virtual void name()=0;
};

//老虎类
class Tiger : public AbstractAnimal
{
public:
	void name(){
		cout << "Tiger" << endl;
	}
};

//狮子类
class Lion : public AbstractAnimal
{
public:
	void name(){
		cout << "Lion" << endl;
	}
};

//抽象动物工厂
class AbstractAnimalFactory
{
public:
	virtual AbstractAnimal* create()=0;
};

//老虎工厂
class TigerFactor : public AbstractAnimalFactory
{
public:
	AbstractAnimal* create(){
		return new Tiger();
	}
};

//狮子工厂
class LionFactory : public AbstractAnimalFactory
{
public:
	AbstractAnimal* create(){
		return new Lion();
	}
};























#endif //FACTORYMETHOD_H