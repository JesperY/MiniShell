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

    if(argc != 2) //argcΪ��������
    {
        cout<<"mkdir failed"<<endl;
        exit(0);
    }

    if(mkdir(argv[1],O_CREAT|0600) == -1) //argv[1]Ϊ������ļ�Ŀ¼����
                                                                    //o_createΪĿ¼�������򴴽���0600��ʾ�½��ļ��е�Ȩ��
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

