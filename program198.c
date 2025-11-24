#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    unlink("PPA.txt");

    return 0;
}