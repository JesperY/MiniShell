#include "MV.h"
#include "ClassInit.h"
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

MV::MV(string strParams)
{
	source_target = strParams;
}

bool MV::splitParams(string strParams)
{		
	source = ClassInit::trim(strParams.substr(0, strParams.find_first_of(" ")));
	target = ClassInit::trim(strParams.substr(strParams.find_first_of(" ") + 1));

	if(source.empty() || target.empty())
		return false;

	return true;
}

void MV::run()
{
	if(!splitParams(source_target))
	{
		cout << "arguments not match" << endl;
		return;
	}

	if(rename(source.c_str(), target.c_str()) != 0)
	{
		cout << "path is not correct" << endl;
	}

	cout << "move has finished" << endl;
}
