#include "PWD.h"
#include <iostream>

using namespace std;


bool PWD::checkParams()
{
	return true;
}



int PWD::run()
{
	if((buff = getcwd(NULL, 0)) == NULL)
	{
		print("ERROR: pwd faild");
	}
	else
	{
		print(buff);
	}
	return 0;
}

void PWD::print(string s)
{
	cout << s << endl;
}

void PWD::print(char* s)
{
	cout << s << endl;
}


