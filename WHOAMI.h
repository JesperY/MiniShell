#ifndef WHOAMI_H
#define WHOAMI_H
#include<unistd.h>
#include"Order.h"

using namespace std;
class WHOAMI: public Order
{
	public:
		WHOAMI();
		void run();
};

#endif
