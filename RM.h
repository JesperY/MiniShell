#ifndef RM_H
#define RM_h

#include <string>
#include "Order.h"

using namespace std;

class RM:public Order
{
	private:

		string target;

	public:
		
		RM(string strParams);

		//bool removeDir(string dir);

		//bool removeFile(string file);

		void removeDir(string dir);

		void run();

};


#endif
