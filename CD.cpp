#include "CD.h"
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

CD::CD()
{
	
}

CD::CD(string params)
{
	path = params;
	//cout << "path=" << path << endl;
}

bool CD::checkParams()
{
	if(path.empty())
	{
		cout << "faild: command is NULL" << endl;
		return false;
	}

	/*
		可使用stat判断目标路径的文件类型
	*/
	
}

int CD::run()
{
	if(chdir(path.c_str()) != 0)//使用chdir改变工作路径
	{
		cout << "faild: path is not correct" << endl;
	}
	cout << getcwd(NULL, NULL) << endl;
}
