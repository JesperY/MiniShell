#ifndef ORDER_H
#define ORDER_H

#include <string>

using namespace std;

class Order
{
	private:

		string strParams;

	public:
		
		virtual bool checkParams() = 0;

		virtual int run() = 0;

		void print(string s);

		void print(char* s);
};

#endif
