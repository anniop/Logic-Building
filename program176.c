#include<stdio.h>
#include<stdbool.h>
int CountFrequency(char *str, char ch)    
{
    
    int iCnt = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
           iCnt++;
        }
        
        str++;
    }
    return iCnt;
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
    
    iRet = CountFrequency(Arr, cValue);

    printf("The Frequency is %d\n",iRet);
    return 0;
}