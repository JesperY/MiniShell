#ifndef MV_H
#define MV_H

#include "Order.h"
#include <string>

class MV:public Order
{
	private:

		string source_target;

		string source;

		string target;
		
	public:

		MV(string strParams);
		
		void run();

		bool splitParams(string strParams);

		//bool checkParams(string strParams);

};

#endif
