//Input : 12    7     output : It is not Divisible
//Input : 12    6     output : It is Completely Divisible
//Input : 12    5     output : It is not Divisible
//Input : 12    2     output : It is Completely Divisible
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1,int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter First number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2);

    if(bRet == true)
    {
        printf("It is Completely Divisible");
    }
    else
    {
        printf("It is not Divisible ");
    }
    return 0;

}