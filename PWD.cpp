#include "PWD.h"
#include <iostream>

using namespace std;

/*
bool PWD::checkParams()
{
	return true;
}
*/


void PWD::run()
{
	if((buff = getcwd(NULL, 0)) == NULL)
	{
		//print("ERROR: pwd faild");
		cout << "ERROR: pwd faild" << endl;
	}
	else
	{
		//print(buff);
		cout << buff << endl;
	}
}
/*
void PWD::print(string s)
{
	cout << s << endl;
}

void PWD::print(char* s)
{
	cout << s << endl;
}

*/
