// 1    2   3   4   5
#include<stdio.h>

void Display(int iNo)
{
    //Logic
    int iCnt = 0;

    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
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