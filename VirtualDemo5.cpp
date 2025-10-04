#include<iostream>
using namespace std;

class Base
{
    public :
        int a;
        int b;

        void fun()
        {
            cout<<"Inside The Fun Function\n";
        }
        void gun()
        {
            cout<<"Inside The Gun Function\n";
        }
        virtual void sun()
        {
            cout<<"Inside The  Virtual Sun Function\n";
        }
        virtual void mun()
        {
            cout<<"Inside The mun Function\n";
        }

};

class Derived : public Base
{
    public:
        int x;

        void fun()
        {
            cout<<"Inside The Fun Function\n";
        }
        void sun()
        {
            cout<<"Inside The  Derived Sun Function\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    
}