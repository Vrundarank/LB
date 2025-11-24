#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

   int fd = 0 , iRet = 0;
   char FileName[20];
   char Data[50];

   printf("Enter the name of File : \n");
   scanf("%s",FileName);

   fd = open(FileName, O_RDWR);
   
   if(fd == -1)
   {
        printf("Unable to Open ! ");
        return -1;
   }

   iRet = read(fd,Data,7);
   
   printf("%d Bytes Gets read Successfully  \n",iRet);

   printf("data from File : %s \n",Data);

   close(fd);
    
   return 0;

}