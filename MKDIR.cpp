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

    if(mkdir(dir.c_str(),O_CREAT|0600) == -1) //dir¿¿¿¿¿¿
                                      //O_CREAT¿¿¿¿¿¿¿¿¿¿¿0600¿¿¿¿¿¿¿¿¿¿¿¿
    {
            perror("mkdir error");
    }
    cout<<"¿¿¿mkdir"<<endl;
}


