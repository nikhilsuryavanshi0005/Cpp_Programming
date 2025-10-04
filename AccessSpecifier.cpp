#include<iostream>

using namespace std;

class Base  //12
{
    public:
       int i;
    private :
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 11;
            j = 21;
            k = 51;
        }
        void fun()
        {
            cout<<i<<"\n";     // Allowed
            cout<<j<<"\n";    // Allowed
            cout<<k<<"\n";   // Allowed
        }
        
};
class Derived : public Base    // memory =16
{
     public:
        int x;
        void Display()
        {
            cout<<i<<"\n";   // Allowed
            cout<<j<<"\n";    // Error (Not Allowed)
            cout<<k<<"\n";    // Allowed 
        }          
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n";   // Allowed
    cout<<bobj.j<<"\n";   //Error (Not Allowed)
    cout<<bobj.k<<"\n";   //Error (Not Allowed)

    cout<<dobj.i<<"\n";     // Allowed
    cout<<dobj.j<<"\n";     //Error (Not Allowed)
    cout<<dobj.k<<"\n";     //Error (Because it is outsider)

    dobj.fun();         // Allowed
    dobj.Display();     // Allowed

    return 0;
}