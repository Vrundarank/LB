/*
    START :
            Accept Number and store as no 
            Divide no by 2 
            if the Remainder is 0
                then Display as Even 
            otherwise 
                display as Odd

    STOP :
*/
#include<stdio.h>


void CheckEvenOdd(int iNo)                          //Helper func
{
    int iRem = 0;

    iRem = iNo % 2;
    
    if(iRem == 0)
    {
        printf("It is an Even number...\n ");
    }
    else 
    {
        printf("It is Odd number...\n");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}