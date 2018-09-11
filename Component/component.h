#ifndef COMPONENT_H
#define COMPONENT_H

/*******************************************************************************************************************
Copyright (C) 2018 COTRUST
Author: KoterRomanov
Description: 设计模式之组合模式
********************************************************************************************************************/

#include <iostream>
#include <list>

using namespace std;

//抽象类
class Component
{
public:
  Component(){}
  virtual ~Component(){}
  
  virtual void add(Component *child) = 0;
  virtual void remove(Component *child) = 0;
  virtual void string getName() = 0;
};

//枝叶结构类
class Composite : public Component
{
public:
  Composite(){}
  ~Composite(){}
  
  void add(Component *child){
    m_leaves.push_back(child);
  }
  
  void remove(Component *child){
    list<Component*>::iterator it = m_leaves.begin();
    while( it != m_leaves.end() ){
      if( *it == child ){
        m_leaves.erase( it );
      }
      ++it;
    }
  }
  
  void display(){
    string context = string();
    list<Component*>::iterator it = m_leaves.begin();
    while( it != m_leaves.end() ){
      if( it != m_leaves.begin() )
        context += "_";
       
      context += (*it)->getName();
      ++it;
    }
    cout << context << endl;
  }
  
  string getName(){
    return string();
  }
  
private:
  list<Component*> m_leaves;  
};

//枝叶类
class Leaf : public Component
{
public:
  Leaf(string name){
    m_name = name;
  }
  
  ~Leaf(){
  
  }
  
  string getName(){
    return m_name;
  }
  
  void add(Component *child){
  
  }
  
  void remove(Component *child){
  
  }
  
private:
  string m_name;
};

#endif //COMPONENT_H
