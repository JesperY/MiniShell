#ifndef DIFF_H
#define DIFF_H
#include <unistd.h>
#include "Order.h"

using namespace std;
class DIFF: public order
{
	public:
	       	DIFF(string filename);
		void run();
		bool checkParams();

	private:
		string filename;


}

#endif

