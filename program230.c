#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0 , iCountCapital = 0;
    while(*str != '\0')
    {
        while(*str != '\0')
        {
            if((*str >= 'A') && (*str <= 'Z'))
            {
                iCountCapital++;
            }
            else
            {
                 iCountSmall++;
            }
            str++;
        }
    }
    printf("Number of Small Characters are : %d \n",iCountSmall);
    printf("Number of Capital Characters are : %d \n",iCountCapital);
    
}

int main()
{
   char Arr[50] = {'\0'};
   char cValue = '\0';


   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);         //   ^ is not , it will traverse till it finds the \n in the string            

    CountAll(Arr);

   return 0;
}