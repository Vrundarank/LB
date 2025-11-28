#include<stdio.h>

void CountSpace(char str[])
{
    int iCount = 0;

        while(*str != '\0')
        {
            if((*str == ' '))
            {
                iCount++;
            }
            str++;
        }
    printf("Number of Spaces  are : %d \n",iCount);

    
}

int main()
{
   char Arr[50] = {'\0'};
   char cValue = '\0';


   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);         //   ^ is not , it will traverse till it finds the \n in the string            

    CountSpace(Arr);

   return 0;
}