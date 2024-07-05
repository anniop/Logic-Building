#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0; 
    char FileName[30];
    char Arr[100];

    printf("Enter the filename that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

   
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter the data that you want to write:\n");
    scanf("%[^\n]", Arr);

    write(fd, Arr, strlen(Arr));

    close(fd); 

    return 0;
}