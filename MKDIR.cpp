#include "MKDIR.h"
#include<iostream>
#include<cstring>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

bool MKDIR :: checkParams()
{
    return true;
}

MKDIR :: MKDIR(string params)
{
	dir = params;
	cout<<dir<<endl;
}

int MKDIR :: run()
{

    if(mkdir(dir,O_CREAT|0600) == -1) //dir真真真
                                      //O_CREAT真真真真真�0600真真真真真真
    {
            perror("mkdir error");
    }
    cout<<"真�mkdir"<<endl;
}


