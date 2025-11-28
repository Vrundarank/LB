#include<stdio.h>

int CountCapital(char str[])
{
    int iCount = 0;
    while(*str != '\0')
    {
        {
            if((*str >= 'A') && (*str <= 'Z'))
            {
                iCount++;
            }
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

   iRet = CountCapital(Arr);

   printf("Number of Capital Character are : %d \n",iRet);

   return 0;
}