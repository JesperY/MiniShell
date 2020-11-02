#ifndef MKDIR_H
#define MKDIR_H
#include<unistd.h>
#include"Order.h"

class MKDIR: public Order
{
    public:
        bool checkParams();
        int run();
        void print(string s);
        void print(char *s);

    protected:

    private:
};

#endif // MKDIR_H
