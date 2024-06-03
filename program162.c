#include<stdio.h>

int strCapital(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str>= 65) && (*str<=90))       // Using Ascii values
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    iRet = strCapital(Arr);

    printf("Number of Capital Letters are %d\n",iRet);
    return 0;
}