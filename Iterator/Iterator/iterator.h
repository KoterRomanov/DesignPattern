#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>

using namespace std;

class AbstractIterator;

//抽象聚合类
class AbstractAggregate
{
public:
	AbstractAggregate(){}
	virtual ~AbstractAggregate(){}

	virtual AbstractIterator* createIterator()=0;
	virtual string getItem(int index)=0;
	virtual int size()=0;
};

//抽象迭代器类
class AbstractIterator
{
public:
	virtual ~AbstractIterator(){}

	virtual void first()=0;
	virtual void next()=0;
	virtual string item()=0;

protected:
	AbstractIterator(){}
};


//具体迭代器类
class AggregateIterator : public AbstractIterator
{
public:
	AggregateIterator( AbstractAggregate *aggregate):m_aggregate(aggregate),m_index(0){}
	~AggregateIterator(){}

	inline void first(){
		m_index = 0;
	}

	inline void next(){
		if( m_index < m_aggregate->size()-1 )
			++m_index;
	}

	inline string item(){
		return m_aggregate->getItem(m_index);
	}

private:
	AbstractAggregate *m_aggregate;
	int m_index;

};

//具体聚合类
class Aggregate : public AbstractAggregate
{
public:
	~Aggregate(){}

	inline AbstractIterator* createIterator(){
		return new AggregateIterator(this);
	}

	inline void insert(string data){
		m_data.push_back(data);
	}

	inline string getItem(int index){
		if( index > size() )
			return NULL;

		return m_data[index];
	}

	inline int size(){
		return m_data.size();
	}

private:
	vector<string> m_data;
};

























#endif //ITERATOR_H