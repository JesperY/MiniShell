#include "CAT.h"
#include<iostream>
#include<string>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

using namespace std;

CAT::CAT(string params)
{
    dir=params;
}

bool CAT::checkParams()
{
    if(dir.empty())	//如果目录为空则报错
    {
        cout<<"file failed"<<endl;
        return false;
    }
    return true;

}

void CAT::run()
{

    int fd=open(dir.c_str(),O_RDONLY);	//c_str()把string对象转换成c中字符串样式
    char buf[250];
    int ret=read(fd,buf,sizeof(buf));	//从fd中读取数据到buf，最后一个参数要求读到的字节数
    write(1,buf,ret);	//从buf写入数据到第一个参数，最后一个参数是写入的字节数
    close(fd);
}
