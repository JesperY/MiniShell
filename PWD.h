#ifndef PWD_H
#define PWD_H

#include <string>
#include <unistd.h>
#include "Order.h"

using namespace std;

class PWD: public Order
{
	//private string strParams;
	private:
		char* buff;

		string strWD;
	public:

		//bool checkParams();
	
		void run();
	
		//void print(string s);

		//void print(char *s);

};

#endif
