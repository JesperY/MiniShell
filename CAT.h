#ifndef CAT_H
#define CAT_H
#include<string>
#include<unistd.h>
#include "Order.h"

using namespace std;

class CAT: public Order
{
    public:
        CAT(string params);
        bool checkParams();
        void run();
    protected:
    private:
        string dir;
};

#endif // CAT_H
