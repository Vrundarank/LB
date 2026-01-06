#include<iostream>
using namespace std;

double Maximum(double No1, double No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    double iValue1 = 10.0 , iValue2 = 11.0 , dRet = 0.0;
    
    dRet = Maximum(iValue1 , iValue2);
    cout<<"Maximum : "<<dRet<<"\n";
    
    return 0;
}