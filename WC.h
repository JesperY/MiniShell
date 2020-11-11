#ifndef WC_H
#define WC_H
#include <unistd.h>
#include "Order.h"
#include <string>

using namespace std;
class WC:public Order
{
	public:
		WC(string params);
		bool checkParams();
		void run();
	
	private:
		string file;
};

#endif
