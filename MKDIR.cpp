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

    if(mkdir(dir,O_CREAT|0600) == -1) //dir¿¿¿¿¿¿
                                      //O_CREAT¿¿¿¿¿¿¿¿¿¿¿0600¿¿¿¿¿¿¿¿¿¿¿¿
    {
            perror("mkdir error");
    }
    cout<<"¿¿¿mkdir"<<endl;
}


