#include<stdio.h>



int main()
{
   char Name[50] = {'\0'};


   printf("Enter your name : \n");
   scanf("%[^'\n']s",Name);         //   ^ is not , it will traverse till it finds the \n in the string            

   printf("Hello  : %s \n",Name);
   
   
    return 0;
}