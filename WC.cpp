#include "WC.h"
#include "ClassInit.h"
#include <iostream>
#include <unistd.h>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

WC :: WC(string params)
{
	file=params;
}

bool WC :: checkParams()
{
	if(file.empty())
	{
		cout<<"command failed"<<endl;
		return false;
	}
	return true;
}

void WC :: run()
{
	int line = 0;
	int word = 0;
	string ans;
	
	ifstream op;
	op.open(file.c_str());

	while(getline(op,ans))
	{
		line++;
		word += ans.length();	
	}


	op.close();

	cout<<"文件共有"<<line<<"行"<<word<<"个字母"<<endl;

}

