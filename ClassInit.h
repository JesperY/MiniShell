#ifndef CLASSINIT_H
#define CLASSINIT_H

#include <string>
#include "Order.h"

using namespace std;

class ClassInit
{
	public:

		static Order* init(string orderName, string params);

		static Order* init(string orderName);

		//static Order* init(char* orderName);

		//static Order* init(char* orderName, char* params);
};

#endif
