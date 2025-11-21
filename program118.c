#include<stdio.h>

void Display(int Arr[])//changed parameter name
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < sizeof(Arr) ; iCnt++ )
    {
        printf("%d\n",Arr[iCnt]);
    }

}

int main()
{   
    int Brr[] = {10,20,30,40,50,60,70};

    Display(Brr); //100
    
    return 0;
}