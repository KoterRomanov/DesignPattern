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
	\brief Ĭ�Ϲ���
	*/
	single(){

	}

	/*!
	\brief ��������
	*/
	single( const single &obj ){

	}

	/*!
	\brief ��ֵ����
	*/
	single& operator=( const single &obj ){
			return *this;
	}

private:
	static single *m_obj;
};
single* single::m_obj = NULL;




























#endif //SINGLETON_H