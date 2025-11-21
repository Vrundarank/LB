//Factors Of 6
#include<stdio.h>


void DisplayFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)//Updator
    {
        iNo = -iNo;
    }
                         //6
    for(iCnt=1; iCnt <= (iNo / 2) ; iCnt++)
    {       //12
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }   
    
}

//Time Complexity : O(N/2)
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    
    return 0;

}