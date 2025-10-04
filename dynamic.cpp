#include<iostream>
using namespace std;

int main()
{
    int length =0;
    int *Arr = NULL;

    cout<<"Enter the Number of Elements\n";
    cin>>length;

    //Allocate the memory
    Arr = new int[length];
    if(Arr==NULL)
    {
        cout<<"Unable to Allocate the Memory\n";
    }
    else 
    {
        cout<<"Memory is Allocated Sucessfully\n";
    }
    // Step 2 : Use the Memory

    delete [] Arr;
    // Step 3 : Deallocate The Memory
    

    return 0;
}