#ifndef MKDIR_H
#define MKDIR_H
#include<unistd.h>
#include"Order.h"
#include<cstring>

class MKDIR: public Order
{
    public:
	    MKDIR(string params);
        bool checkParams();
        int run();
        void print(string s);
        void print(char *s);

    protected:

    private:
        string dir;
};

#endif // MKDIR_H
