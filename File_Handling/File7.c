#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0; 
    char FileName[30];
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the filename that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    iRet = read(fd,Arr,10);

    printf("Number of bytes successfully readed from the file is %d\n",iRet);
    printf("Data From the file is : %s\n",Arr);

    close(fd); 

    return 0;
}