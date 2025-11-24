#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

   int fd = 0 , iRet = 0;
   char FileName[20];
   char Data[] = "India is My Country";

   printf("Enter the name of File : \n");
   scanf("%s",FileName);

   fd = open(FileName, O_RDWR);
   
   if(fd == -1)
   {
        printf("Unable to Open ! ");
        return -1;
   }

   iRet = write(fd,Data,11);
   
   printf("%d Bytes Gets Successfully written \n",iRet);

   close(fd);
    
   return 0;

}