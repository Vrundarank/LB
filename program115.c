#include<stdio.h>

void Display(int *Arr)//changed parameter name
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < 4 ; iCnt++, Arr++)
    {
        printf("%d\n",*Arr);
    }

}

int main()
{   
    int Arr[] = {10,20,30,40};

    Display(Arr); //100
    
    return 0;
}