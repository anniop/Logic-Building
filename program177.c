#include<stdio.h>
#include<stdbool.h>
int LastOccurence(char *str, char ch)    
{
    int iCnt = 1;
    int iPos = -1;
    while (*str != '\0')
    {
        if(*str == ch)
        {
           iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
}

int main()
{
    char cValue = '\0';
    char Arr[100];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter The Character that you want to search\n");
    scanf(" %c", &cValue);
    
    iRet = LastOccurence(Arr, cValue);

    if(iRet == -1)
    {
        printf("The letter is not present in the string\n");
    }
    else
    {
    printf("The Last Occurence of the letter is %d\n",iRet);
    }
    return 0;
}