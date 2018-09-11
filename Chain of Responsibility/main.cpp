#include "responsibility.h"

int main( int argc, char **argv )
{
  Mssage *msg = new Mssage;
  msg->m_context = string("ask for leave");
  msg->m_name = string("KoterRomanov");
  msg->m_job_number = 99;
  
  Manager *director = new ProjectDirector(NULL, "Director");
  Manager *manager = new ProjectManager(director, "Manager");
  Manager *leader = new ProjectLeader(manager, "Leader");
  
  leader->dealwith(msg);
  
  delete msg;
  delete director;
  delete manager;
  delete leader;

  system("pause");
  return 0;
}
