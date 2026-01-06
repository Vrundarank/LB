#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()              
{
    float i , j = 0.0f;
    float Ret = 0.0f;

    cout<<"Enter First Number : \n";
    cin>>i;

    cout<<"Enter Second Number : \n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is : "<< Ret << "\n";           // data Loss when input contains small seperated values

    return 0;
}