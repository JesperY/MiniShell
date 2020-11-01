#ifndef CD_H
#define CD_H

#include <string>
#include "Order.h"

using namespace std;

class CD:public Order
{
	private:

		string path;

	public:
		
		CD();
		
		CD(string params);

		bool checkParams();

		int run();
};

#endif
