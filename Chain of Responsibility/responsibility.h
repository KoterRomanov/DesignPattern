#ifndef RESPONSIBILITY_H
#define RESPONSIBILITY_H

/********************************************************************************************************
Copyright (C) 2018 COTRUST
Author: KoterRomanov
Description: 设计模式之责任链模式
*********************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

//消息类
class Message
{
public:
  string m_context;//消息类型
  string n_name;//产生消息人名称
  int m_job_number;//产生消息人工号
};

//管理者抽象类
class Manager
{
public:
  Manager(Manager *successor,string position_name):m_successor(successor),m_position_name(position_name){
  
  }
  
  virtual ~Manager(){}
  
  virtual void dealwith(Message *msg) = 0;
  
protected:
  Manager *m_successor;//上级
  string m_position_name;//职位名称
};

//项目总监
class ProjectDirector : public Manager
{
public：
  ProjectDirector(Manager *successor, string position_name):Manager(successor,position_name){
  
  }
  
  ~ProjectDirector(){}
  
  void dealwith(Message *msg){
    cout << m_position_name << " agree " << msg->m_context << endl
    if( m_successor )
      m_successor->dealwith(msg);
  }
};

//项目经理
class ProjectManager : public Manager
{
public:
  ProjectManager(Manager *successor, string position_name):Manager(successor, position_name){
  
  }
  
  ~ProjectManager(){}
  
  void dealwith(Message *msg){
    cout << m_position_name << " agree " << msg->context << endl;
    if( m_successor )
      m_successor->dealwith(msg);
  }
};

//项目组长
class ProjectLeader : public Manager
{
public:
  ProjectLeader(Manager *successor, string position_name):Manager(successor,position_name){ 
  
  }
  
  ~ProjectLeader(){}
  
  void dealwith(Message *msg){
    cout << m_position_name << " agree " << msg->context << endl;
    if( m_successor )
      m_successor->dealwith(msg);
  }
};

#endif //RESPONSIBILITY_H
