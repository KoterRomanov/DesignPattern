#ifndef STRATEGY_H
#define STRATEGY_H

/******************************************************************************************************
Copyright: Koter Romanov

Author: Koter Romanov

Date: 2018-09-02

Description: 设计模式之工厂模式
******************************************************************************************************/

class Strategy
{
public:
	virtual double getResult()=0;

protected:
	int m_first;
	int m_second;
};

class Add : public Strategy
{
public:
	Add(int first, int second){
		m_first = first;
		m_second = second;
	}

	double getResult(){
		return m_first + m_second;
	}
};

class Sub : public Strategy
{
public:
	Sub(int first, int second){
		m_first = first;
		m_second = second;
	}

	double getResult(){
		return m_first - m_second;
	}

};

class Context
{
public:
	Context( Strategy * strategy ):m_strategy(strategy){

	}

	double getResult(){
		return m_strategy->getResult();
	}

private:
	Strategy *m_strategy;
};

























#endif //STRATEGY_H