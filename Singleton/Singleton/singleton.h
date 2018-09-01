#ifndef SINGLETON_H
#define SINGLETON_H

class single
{
public:
	static single* getInstance(){
		if( NULL == m_obj )
		{
			m_obj = new single();
		}

		return m_obj;
	}

private:
	/*!
	\brief 默认构造
	*/
	single(){

	}

	/*!
	\brief 拷贝构造
	*/
	single( const single &obj ){

	}

	/*!
	\brief 赋值拷贝
	*/
	single& operator=( const single &obj ){
			return *this;
	}

private:
	static single *m_obj;
};
single* single::m_obj = NULL;




























#endif //SINGLETON_H