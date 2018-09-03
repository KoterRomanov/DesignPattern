#ifndef DECORATOR_H
#define DECORATOR_H

/*************************************************************************************************************
Copyright: Koter Romanov

Author: Koter Romanov

Date: 2018-09-03

Description; 设计模式之装饰者模式
*************************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person( string name ):m_personName(name){

	}

	Person(){

	}

	virtual void show(){
		cout << "decorator " << m_personName << endl;
	}

private:
	string m_personName;
};

//
class Finery : public Person
{
public:
	void decorator( Person *componet ){
		m_componet = componet;
	}

	virtual void show(){
		m_componet->show();
	}

protected:
	Person *m_componet;
};

class TShit : public Finery
{
public:
	void show(){
		cout << "T-Shit" << endl;
		m_componet->show();
	}
};

class BigTrouser : public Finery
{
public:
	void show(){
		cout << "Bit Trouser" << endl;
		m_componet->show();
	}
};






















#endif //DECORATOR_H