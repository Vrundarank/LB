//Best Approach
#include<stdio.h>
void Display(int iFrequency)
{
    { 
        int iCnt = 0;
        for (iCnt = 1 ; iCnt <= iFrequency ;  iCnt++ ) 
        {
            printf("Jay Ganesh...\n");
        }
    }

}
//Dynamic Function
int main()
{
    int iCount = 0;
    
    printf("Enter The Frequency :");
    scanf("%d",&iCount);

    Display(iCount);

    return 0;
}