#ifndef LS_H
#define LS_H
#include <string>
#include "Order.h"

using namespace std;

class LS: public Order
{
	private:

		string path;

	public:
					
		LS();

		LS(string params);

		void run();
};
#endif
