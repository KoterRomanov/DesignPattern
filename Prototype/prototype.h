#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>
#include <string>

using namespace std;

//原型类
class Prototype
{
public:
  Prototype(){}
  ~Prototype(){}
  
  virtual Prototype* clone()=0;
  virtual inline void print(){
    cout << "Prototype data: " << m_data << endl;
  }
  
protected:
  string m_data;
  
};

class ConcretePrototype : public Prototype
{
public:
  ConcretePrototype(string data){
    m_data = data;
  }
  
  ~ConcretePrototype(){}
  
  inline Prototype* clone(){
    ConcretePrototype *p = new ConcretePrototype();
    *p = *this;
    return p;
  }
  
  inline void print(){
    cout << "ConcretePrototype data: " << m_data << endl;
  }
  
};

#endif //PROTOTYPE_H
