#include<stdio.h>
#include<stdbool.h>
int checkoccurence(char *str, char ch)       // Case Sensitive
{
    bool bFlag = false;
    int iCnt = 1;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
    
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
    
    iRet = checkoccurence(Arr, cValue);

    if(iRet != -1)
    {
    printf("letter Occurs at the position  %d\n",iRet);
    }
    else
    {
        printf("There is no such letter prsent in the string \n");
    }

    return 0;
}