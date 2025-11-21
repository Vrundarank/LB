// Input 10
//2     4    6     8    10
#include<stdio.h>

void Display(int iNo)
{
    //Logic
    int iCnt = 0;

    for(iCnt= 2; iCnt <= 10; iCnt++)
    {
        if(iCnt % 2 == 0)
        {    
            printf("%d \t",iCnt);
        }
    }
    printf("\n");
}

int main()
{

    int iValue = 0;
    printf("Please Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}