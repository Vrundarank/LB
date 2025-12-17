using namespace std;
#include<iostream>

inline int Addition(int A , int B)
{
    return A + B;
}

int main()
{
    int Ret = 0;
    Ret = Addition(10,11); // 10 + 11 No The Calle Stack frame will be created 

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;

}