#include<stdio.h>

int CountOccurance(char str[], char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        
        str++;
    }


    return iCount;
    
}

int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;
   char cValue = '\0';


   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);         //   ^ is not , it will traverse till it finds the \n in the string            

   printf("Enter the Character : \n");
   scanf(" %c",&cValue);          //    Initial space will work on all OS before ^%c 

   iRet = CountOccurance(Arr, cValue);

   printf("Number of occurance are : %d \n",iRet);

   return 0;
}