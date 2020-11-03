#include <iostream>
#include <string>
#include "ClassInit.h"
#include "Order.h"
#include <unistd.h>

using namespace std;

int main()
{
	
	string strInput;
	string orderName;
	string strParams;
	while(1)
	{
		cout << "\033[1;32mMiniShell@" << getcwd(NULL, 0) << "> \033[0m";
		getline(cin, strInput);

		/*
			使用getche()实现命令输入时的退格操作
		*/


		if(strInput.empty())//未读取到命令
		{
			cout << "Input Nothing" << endl;
			continue;
		}

		//strInput包括命令名与命令参数，以空格分隔

		int firstSpaceIndex = strInput.find_first_of(' ');//寻找第一个空格

		if(firstSpaceIndex != -1)//若不存在空格，则没有参数或输入错误
		{
			orderName = strInput.substr(0, firstSpaceIndex);//获得命令名
			strParams = strInput.substr(firstSpaceIndex + 1);//获得参数字符串
			
			Order * order = ClassInit::init(orderName, strParams);
			if(order != NULL)
				order->run();

			/*
			根据orderName调用对应的命令，并传递参数字符串
			
			Order* order = ClassInit::init(orderName, strParams);
			if(order != NULL)
				order->run();

			*/
		}
		else
		{
			orderName = strInput;
		
			Order* order = ClassInit::init(orderName);
			if(order != NULL)
				order->run();
			/*
			调用没有参数的命令
			*/
			
		}
	}

	return 0;
}
