#include "MKDIR.h"
#include<iostream>
#include<string>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

using namespace std;

MKDIR::MKDIR(string params)
{
	dir = params;

	cout << dir << endl;
}

void  MKDIR::run()
{
    if(mkdir(dir.c_str(),O_CREAT|0600) == -1) //0600 文件所有者能读+写
    {
            //perror("mkdir error");
    }
    cout<<"¿¿¿mkdir"<<endl;
}


