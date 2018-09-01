#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

/***********************************************************************************************************************
Copyright: Koter Romanov

Author: Koter Romanov

Date: 2018-09-01

Description: ���ģʽ֮���󹤳�ģʽ
************************************************************************************************************************/

#include <iostream>

using namespace std;

class SoftWareEngineer
{
public:
	virtual void increase()=0;//�����������ʦ
	virtual void decrease()=0;//�����������ʦ
};

class HardwareEngineer
{
public:
	virtual void increase()=0;
	virtual void decrease()=0;
};

//omg��Ʒ��-�������ʦ
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

//omg��Ʒ��-Ӳ������ʦ
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

//pmg��Ʒ��-�������ʦ
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

//pmg��Ʒ��-Ӳ������ʦ
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

//���󹤳�
class AbstractProduceLine
{
public:
	virtual SoftWareEngineer* createSE()=0;
	virtual HardwareEngineer* createHE()=0;
};

//Omg��Ʒ��
class OmgProduceLine : public AbstractProduceLine
{
	SoftWareEngineer* createSE(){
		return new OmgProductLineSE();
	}

	HardwareEngineer* createHE(){
		return new OmgProduceLineHE();
	}
};

//Pmg��Ʒ��
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