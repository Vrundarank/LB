#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20] ;

    printf("Enter the name of file that you want to Open : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file ! \n");
    }
    else
    {
        printf("File Successfully Opened with fd : %d\n",fd);
    }
    return 0;
}