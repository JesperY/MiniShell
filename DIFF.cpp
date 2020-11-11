#include "DIFF.h"
#include "ClassInit.h"
#include <iostream>
#include <unistd.h>
#include <string>
#include <string.h>
#include <fstream>

using namespace std;

DIFF :: DIFF(string strName)
{
	str=strName;
}

void DIFF :: splitParams(string str, string &source, string &target)
{
	source = ClassInit::trim(str.substr(0, str.find_first_of(" ")));
	target = ClassInit::trim(str.substr(str.find_first_of(" ") + 1));
}


bool DIFF :: checkParams()
{
	if(str.empty())
	{
		cout<<"command failed"<<endl;
		return false;
	}
	return true;
}



void DIFF :: run()
{
	int line=0;
	string ans,ans2;
	splitParams(str, source, target);

	ifstream op1, op2;
	op1.open(source);
	op2.open(target);

	bool same=true;
	while(getline(op1,ans) && getline(op2,ans2))
	{
		line++;
		
		if(ans != ans2)
		{
			same=false;
			cout<<"第"<<line<<"行不同"<<endl;
			cout<<"file1: "<<ans<<endl;
			cout<<"file2: "<<ans2<<endl;
			cout<<endl;
		}
	}

	if(same)
		cout<<"两个文件相同"<<endl;


	op1.close();
	op2.close();
}

