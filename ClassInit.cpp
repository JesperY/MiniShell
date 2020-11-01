#include "ClassInit.h"
#include "PWD.h"
#include "Order.h"

/*
Order* ClassInit::init(string orderName, string params)
{
    //switch
	Order order = NULL;
	return order;
}
*/
Order* ClassInit::init(string orderName)
{
	Order *order = NULL;
	//cout << "orderName=" << orderName << endl;	
	int n = orderName.compare("pwd");
	cout << n << endl;
	if(orderName.compare("pwd") == 0)
	{
		order = new PWD();
	}
	else
	{
		cout << orderName << " :No such order" << endl;
	}

	return order;
}
/*
Order* ClassInit::init(char* orderName, char* params)
{
	Order order = NULL;
	return order;													    
}

Order* ClassInit::init(char* orderName)
{
	Order order = NULL;
	return order;														    
}
*/
