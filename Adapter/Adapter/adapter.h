#ifndef ADAPTER_H
#define ADAPTER_H

/***************************************************************************************************************
Copyright: Koter Romanov

Auther: Koter Romanov

Date: 2018-09-01

Description: 设计模式之适配器模式
****************************************************************************************************************/
#include <iostream>

using namespace std;

//目标类
class Target
{
public:
	virtual inline void Request(){
		cout << "Target Request" << endl;
	}
};

//需要适配的类
class Adaptee
{
public:
	inline void SpecificRequest(){
		cout << "Adaptee SpecificRequest" << endl;
	}
};

//适配器类
class Adapter : public Target
{
public:
	Adapter():m_adaptee(NULL){
		m_adaptee = new Adaptee;
	}

	inline void Request(){
		m_adaptee->SpecificRequest();
	}

private:
	Adaptee *m_adaptee;
};

























#endif //ADAPTER_H