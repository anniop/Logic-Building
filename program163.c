#include<stdio.h>

int strSmall(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
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

    iRet = strSmall(Arr);

    printf("Number of Small Letters are %d\n",iRet);
    return 0;
}