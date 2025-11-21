#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)                          //Helper func
{
    
    
    if((iNo%2) == 0)
    {   return true; }
    else 
    {   return false; }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    

    return 0;
}