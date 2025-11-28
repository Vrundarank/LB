#include<stdio.h>

void CountDigits(char str[])
{
    int iCount = 0;

        while(*str != '\0')
        {
            if((*str >= 48) && (*str <= 57))
            {
                iCount++;
            }
            str++;
        }
    printf("Number of Digits are : %d \n",iCount);

    
}

int main()
{
   char Arr[50] = {'\0'};
   char cValue = '\0';


   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);         //   ^ is not , it will traverse till it finds the \n in the string            

    CountDigits(Arr);

   return 0;
}