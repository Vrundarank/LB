#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20] ;

    printf("Enter the name of file that you want to create : \n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);
    if(fd == -1)
    {
        printf("Unable to create File !\n ");
    }
    else
    {
        printf("File Successfully Created with  : %d !\n",fd);
    }
    return 0;
}