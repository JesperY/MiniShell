#include"WHOAMI.h"
#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<pwd.h>
using namespace std;

WHOAMI :: WHOAMI()
{

}

void WHOAMI :: run()
{
	
	uid_t id;
	struct passwd* pbuf;
	id = geteuid();			//获取当前用户的有效用户id
	pbuf = getpwuid(id);		//返回passwd结构体
	cout<<pbuf->pw_name<<endl;	//指向用户名

}
