#include<stdio.h>

int strlenX(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
    
}

int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;


   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);         //   ^ is not , it will traverse till it finds the \n in the string            

   iRet = strlenX(Arr);

   printf("String Length is : %d \n",iRet);

   return 0;
}