#ifndef MKDIR_H
#define MKDIR_H
#include<unistd.h>
#include"Order.h"
#include<string>

using namespace std;

class MKDIR: public Order
{
    public:

	MKDIR(string params);
        
        void run();

    protected:

    private:
        string dir;
};

#endif // MKDIR_H
