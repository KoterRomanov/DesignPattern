#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H

/**********************************************************************************************************************
Copyright: Koter Romanov

Author: Koter Romanov

Date:2018-09-01

Desctription: ���ģʽ֮�򵥹���ģʽ
***********************************************************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

//������
class Operator
{
public:
	virtual double getResult()=0;
	virtual void setFirst(int first)=0;
	virtual void setSecond(int second)=0;

protected:
	int m_first;
	int m_second;
};

//�ӷ�������
class AddOperator : public Operator
{
public:
	inline void setFirst(int first){
		m_first = first;
	}

	inline void setSecond(int second){
		m_second = second;
	}

	inline double getResult(){
		return m_first + m_second;
	}
};

//����������
class SubOperator : public Operator
{
public:
	inline void setFirst(int first){
		m_first = first;
	}

	inline void setSecond(int second){
		m_second = second;
	}

	inline double getResult(){
		return m_first - m_second;
	}
};

//������
class Factory
{
public:
	static Operator* create(char operatorCharacter);
};

Operator* Factory::create(char operatorCharacter){
	Operator *operators = NULL;

	switch(operatorCharacter)
	{
	case '+':
		operators = new AddOperator;
		break;
	case '-':
		operators = new SubOperator;
		break;
	}

	return operators;

}























#endif //SIMPLEFACTORY_H