#ifndef DIFF_H
#define DIFF_H
#include <unistd.h>
#include "Order.h"
#include <string>

using namespace std;
class DIFF:public Order
{
	public:
	       	DIFF(string strName);
		bool checkParams();
		void splitParams(string str, string &source, string &target);
		void run();

	private:
		string str;
		string source;
		string target;


};

#endif

