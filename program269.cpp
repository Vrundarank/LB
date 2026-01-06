#include<iostream>
using namespace std;

float Summation(float Arr[], int iSize)
{
    int iCnt = 0;
    float fSum = 0.0f;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        fSum = fSum + Arr[iCnt];
    }
    return fSum;
    
}

int main()
{
    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f};
    float iRet = 0.0f;
    iRet = Summation(Brr,5);

    cout<<"Summation is : "<<iRet<<"\n";
    
    return 0;
}