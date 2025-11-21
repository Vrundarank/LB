#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;      //Optimization 
        }
    }

    if(iCnt > (iNo/2)) //No factors
    {
        return true;
    } 
    else                //Atleast one Factors
    {
        return false;
    }
    

}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime Number \n",iValue);
    }
    else
    {
        printf("%d is Not a Prime Number \n",iValue);
    }
    

    return 0;
}

/*
            Time Complexity : For prime : N/2
            Time Complexity : For prime : is either 1 or 2
*/