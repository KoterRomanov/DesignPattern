#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

/***********************************************************************************************************************
Copyright: Koter Romanov

Author: Koter Romanov

Date: 2018-09-01

Description: 设计模式之抽象工厂模式
************************************************************************************************************************/

#include <iostream>

using namespace std;

class SoftWareEngineer
{
public:
	virtual void increase()=0;//增加软件工程师
	virtual void decrease()=0;//减少软件工程师
};

class HardwareEngineer
{
public:
	virtual void increase()=0;
	virtual void decrease()=0;
};

//omg产品线-软件工程师
class OmgProductLineSE : public SoftWareEngineer
{
public:
	void increase(){
		cout << "Omg produce line increase software engineer" << endl;
	}

	void decrease(){
		cout << "Omg produce line decrease software engineer" << endl;
	}
};

//omg产品线-硬件工程师
class OmgProduceLineHE: public HardwareEngineer
{
public:
	void increase(){
		cout << "Omg produce line increase hardware engineer" << endl;
	}

	void decrease(){
		cout << "Omg produce line decrease hardware engineer" << endl;
	}
};

//pmg产品线-软件工程师
class PmgProduceLineSE : public SoftWareEngineer
{
public:
	void increase(){
		cout << "Pmg produce line increase software engineer" << endl;
	}

	void decrease(){
		cout << "Pmg produce line decrease software engineer" << endl;
	}
};

//pmg产品线-硬件工程师
class PmgProduceLineHE : public HardwareEngineer
{
public:
	void increase(){
		cout << "Pmg produce line increase hardware engineer" << endl;
	}

	void decrease(){
		cout << "Pmg produce line decrease hardware engineer" << endl;
	}
};

//抽象工厂
class AbstractProduceLine
{
public:
	virtual SoftWareEngineer* createSE()=0;
	virtual HardwareEngineer* createHE()=0;
};

//Omg产品线
class OmgProduceLine : public AbstractProduceLine
{
	SoftWareEngineer* createSE(){
		return new OmgProductLineSE();
	}

	HardwareEngineer* createHE(){
		return new OmgProduceLineHE();
	}
};

//Pmg产品线
class PmgProduceLine : public AbstractProduceLine
{
public:
	SoftWareEngineer* createSE(){
		return new PmgProduceLineSE();
	}

	HardwareEngineer* createHE(){
		return new PmgProduceLineHE();
	}
};

#endif //ABSTRACTFACTORY_H