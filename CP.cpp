#include "CP.h"
#include <string>
#include <unistd.h>
#include <fcntl.h>
#include <cstdio>

using namespace std;

CP::CP(string strParams)
{
	//strParams = ClassInit::trim(strParams);
	source = strParams.substr(0, strParams.find_first_of(" "));
	target = strParams.substr(strParams.find_first_of(" ") + 1);
}

void CP::copy(int fdin, int fdout)
{
	char buff[1024];
	int size;
	while((size = read(fdin, buff, 1024)))
	{
		if(write(fdout, buff, size) != size)
		{	
			perror("CP:write file -");
			return;
		}
	}
	if(size < 0)
		perror("CP: read file -");
}

void CP::run()
{
	int fdin = open(source.c_str(), O_RDONLY);

	if(fdin < 0)
	{
		perror("CP:open -");
		return;
	}

	int fdout = open(target.c_str(), O_WRONLY|O_CREAT);

	if(fdout < 0)
	{
		perror("CP:open -");
	}

	copy(fdin, fdout);
}
