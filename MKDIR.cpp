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

int MKDIR :: run()
{
    string argv[1]="test";

    if(argc != 2) //argc为参数个数
    {
        cout<<"mkdir failed"<<endl;
        exit(0);
    }

    if(mkdir(argv[1],O_CREAT|0600) == -1) //argv[1]为输入的文件目录名称
                                                                    //o_create为目录不存在则创建，0600表示新建文件夹的权限
    {
            perror("mkdir error");
    }
}

void MKDIR :: print(string s)
{
    cout<<s<<endl;
}

void MKDIR ::  print(char *s)
{
    cout<<s<<endl;
}

