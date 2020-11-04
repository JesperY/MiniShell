#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <iostream>

using namespace std;

class Order
{
	private:

		string strParams;

	public:
		
		virtual bool checkParams(string strParams)
		{
			if(strParams.empty())
			{
				cout << "too few arguments" << endl;
				return false;
			}

			return true;
		}

		virtual void run() = 0;

		//void print(string s);

		//void print(char* s);
};

#endif
