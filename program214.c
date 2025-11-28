#include<stdio.h>

void Display(char *str)
{
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
}

int main()
{
   char Arr[50] = {'\0'};


   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);         //   ^ is not , it will traverse till it finds the \n in the string            

   Display(Arr);

   return 0;
}