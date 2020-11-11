#ifndef CP_H
#define CP_H

#include "Order.h"
#include <string>

using namespace std;

class CP:public Order
{
	private:
	
	string source;

	string target;
		
	public:

	CP(string strParams);

	void run();

//	int openFile(string fileName);

	void copy(int fdin, int fdout);

};

#endif
