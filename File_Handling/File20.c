#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fdRead = 0, fdWrite = 0;
    char FileName[30];
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0;
    int iSum = 0;
    int i = 0;
    int iCount = 0;

    printf("Enter the existinf file name : \n");
    scanf("%s",FileName);

    fdRead = open(FileName,O_RDWR | O_APPEND);
    if(fdRead == -1)
    {
        printf("Unable to Open file\n");
        return 0;
    }

    while ((iRet = read (fdRead , Buffer, sizeof (Buffer))) != 0)
    {   
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == 'a' || Buffer[i] == 'e' || Buffer[i] == 'i' || Buffer[i] == 'o' || Buffer[i] == 'u')
            {
                iCount++;
            }
        }
        
    }

    printf("The Number of Vowels in this file are %d\n",iCount);

    close(fdRead);
    return 0;
}