#ifndef FACTORYMETHOD_H
#define FACTORYMETHOD_H

/******************************************************************************************************************
Copyright: Koter Romanov

Author: Koter Romanov

Date:2018-09-01

Description: ���ģʽ֮��������ģʽ
*******************************************************************************************************************/

#include <iostream>

using namespace std;

//��������
class AbstractAnimal
{
public:
	virtual void name()=0;
};

//�ϻ���
class Tiger : public AbstractAnimal
{
public:
	void name(){
		cout << "Tiger" << endl;
	}
};

//ʨ����
class Lion : public AbstractAnimal
{
public:
	void name(){
		cout << "Lion" << endl;
	}
};

//�����﹤��
class AbstractAnimalFactory
{
public:
	virtual AbstractAnimal* create()=0;
};

//�ϻ�����
class TigerFactor : public AbstractAnimalFactory
{
public:
	AbstractAnimal* create(){
		return new Tiger();
	}
};

//ʨ�ӹ���
class LionFactory : public AbstractAnimalFactory
{
public:
	AbstractAnimal* create(){
		return new Lion();
	}
};























#endif //FACTORYMETHOD_H