#include<iostream>

using namespace std;

class Base
{
    public:
        int i;
        int j;
        void fun()
        {
            cout<<"Iside Base Fun\n";
        }


};
class Derived : public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of Base class object :"<<sizeof(bobj)<<"\n";

    cout<<"Size of Derived class object :"<<sizeof(dobj)<<"\n";

    return 0;
}