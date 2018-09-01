#ifndef ADAPTER_H
#define ADAPTER_H

/***************************************************************************************************************
Copyright: Koter Romanov

Auther: Koter Romanov

Date: 2018-09-01

Description: ���ģʽ֮������ģʽ
****************************************************************************************************************/
#include <iostream>

using namespace std;

//Ŀ����
class Target
{
public:
	virtual inline void Request(){
		cout << "Target Request" << endl;
	}
};

//��Ҫ�������
class Adaptee
{
public:
	inline void SpecificRequest(){
		cout << "Adaptee SpecificRequest" << endl;
	}
};

//��������
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