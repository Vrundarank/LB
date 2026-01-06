#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside Constructor \n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor \n";
            delete [] Arr;
        }
};

int main()
{
    //  Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(10);

    // Step 2 : Use The Memory
    // LB

    // Step 3 : Deallocate memory
    delete aobj;

    return 0;
}