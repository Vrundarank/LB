//Input : 12    2     output : true
//Input : 12    3     output : true
//Input : 12    5     output : false
//Input : 12    2    output : true
//Input : 12    2    output : false
#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter First number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("It is Completely Divisible");
    }
    else
    {
        printf("It is not Divisible ");
    }
    return 0;
}