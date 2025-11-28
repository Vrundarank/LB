#include<stdio.h>

void strlwrX(char str[])
{


        while(*str != '\0')
        {
            if((*str >= 'A') && (*str <= 'Z'))
            {
               *str = *str + 32;
            }
            str++;
        }    
}

int main()
{
   char Arr[50] = {'\0'};
   char cValue = '\0';


   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);         //   ^ is not , it will traverse till it finds the \n in the string            

   strlwrX(Arr);

    printf("Updated string is : %s\n",Arr);


   return 0;
}