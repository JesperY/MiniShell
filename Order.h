#ifndef ORDER_H
#define ORDER_H

#include <string>

using namespace std;

class Order
{
	private:

		string strParams;

	public:
		
		virtual bool checkParams(){return true;}

		virtual void run() = 0;

		//void print(string s);

		//void print(char* s);
};

#endif
