#include "ClassInit.h"
#include "PWD.h"
#include "Order.h"
#include <iostream>

using namespace std;

/*
所有的命令实现都继承自Order类，同时该文件中需包含所有的派生类头文件
*/


/*
此部分用于创建带参数的命令对象
记得将头文件一并取消注释

Order* ClassInit::init(string orderName, string params)
{
    //switch
	Order order = NULL;
	return order;
}
*/

//无参数命令
Order* ClassInit::init(string orderName)
{
	Order *order = NULL;
	
	/*
	此处采用if else的形式判断传入的命令
	将对应的命令执行对象赋给Order基类后传出
	*/
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
暂时不会传入c风格字符串，此处请忽略

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
