#include<stdio.h>



int main()
{
   char Name[50] = {'\0'};


   printf("Enter your name : \n");
   scanf("%s",Name);                // Not used & as it gonna point to base address either way

   printf("Hello  : %s \n",Name);
   
   
    return 0;
}