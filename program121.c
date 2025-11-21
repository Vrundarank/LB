#include<stdio.h>

void Display(int Arr[])//changed parameter name
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < 7 ; iCnt++ )
    {
        printf("%d\n",Arr[iCnt]);
    }

}

int main()
{   
    int Brr[] = {10,20,30,40}; // change

    Display(Brr); //100
    
    return 0;
}