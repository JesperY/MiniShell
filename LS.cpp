#include "LS.h"
#include <iostream>
#include <unistd.h>
#include <string>
#include <dirent.h>

using namespace std;

LS::LS()
{
	path = ".";
}

LS::LS(string params)
{
	path = params;
}

void LS::run()
{
	/*
		修改打印格式	
	*/
	DIR* dir = opendir(path.c_str());
	
	if(dir == NULL)
	{
		cout << "path is not a directory" << endl;
	}

	struct dirent* ent = NULL;
	
	int count = 1;//FIXUP
	while((ent = readdir(dir)) )
	{

	/*

		if((ent->d_type == 4 || ent->d_type == 8) && ent->d_name[0] != '.')
			cout << ent->d_name << " ";
			*/
		if( ent->d_type == 4 && ent->d_name[0] != '.')//目录文件
		{
			cout << "\033[34m" << ent->d_name << " ";
			count++;
		}
		else if(ent->d_type == 8 && ent->d_name[0] != '.')//常规文件
		{
			cout << ent->d_name << " ";
			count++;
		}

		if(count % 5 == 0)
			cout << endl;

		

	}
	cout << endl;
	closedir(dir);
}

