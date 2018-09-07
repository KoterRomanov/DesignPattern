#ifndef PROXY_H
#define PROXY_H

#include <iostream>

using namespace std;

//接口类
class Subject
{
public:
  Subject(){}
  virtual ~Subject(){}
  
  virtual void addfile()=0;
};

//真实类
class RealSubject : public Subject
{
public:
  RealSubject(){}
  ~RealSubject(){}
  
  inline void addfile(){
    cout << "real subject add file" << endl;
  }
};

//代理类
class Proxy : public Subject
{
public:
  Proxy(int permission):m_realSubject(NULL),m_permission(permission){
  
  }
  
  ~Proxy(){
  
  }
  
  inline void addfile(){
    if( permission )
    {
      m_realSubject = new RealSubject;
      m_realSubject->addfile();
    }
    else
    {
      cout << "Not Authority" << endl;
    }
  }
 
 private:
  Subject *m_realSubject;
  int m_permission;
};

#endif //PROXY_H
