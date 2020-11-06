#include "RM.h"
#include <iostream>
#include <string>
#include <unistd.h>
#include <dirent.h>
#include <cstdio>
#include <sys/stat.h>

using namespace std;

RM::RM(string strParams)
{
	target = strParams;
}

void RM::removeDir(string strParams)
{
	cout << "will rm " << strParams << endl;
	DIR* dir = opendir(strParams.c_str());

	if(dir == NULL)
	{
		if(remove(strParams.c_str()) != 0)
		{
			cout << "can not open dir: " << strParams << endl;	
		}
		return;
	}
	
	struct dirent* ptr;
	while( (ptr = readdir(dir)) != NULL)
	{
		if(ptr->d_type == 4)
		{
			string s = string(ptr->d_name);

			if(s.compare("..") == 0 || s.compare(".") == 0)
				continue;

			s = strParams + "/" + s;
			removeDir(s);
		}
		else
		{
			cout << "will rm " << ptr->d_name << endl;
			string s = strParams + "/" + string(ptr->d_name);
			if(remove(s.c_str()) != 0)
			{
				//cout << "rm file faild: " << ptr->d_name << endl;
				perror("remove");
			}
		}
	}

	if(remove(strParams.c_str()) != 0)
	{
		cout << "rm dir faild: " << strParams << endl;
	}
	
}

void RM::run()
{
	struct stat s_buff;

	stat(target.c_str(), &s_buff);
	if(S_ISDIR(s_buff.st_mode))
		removeDir(target);
	else
		remove(target.c_str());
}
