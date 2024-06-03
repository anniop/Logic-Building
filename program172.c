#include<stdio.h>
#include<stdbool.h>
bool checkoccurence(char *str, char ch)       // Case Sensitive
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
    
}

int main()
{
    char cValue = '\0';
    char Arr[100];
    bool bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter The Character that you want to search\n");
    scanf("%c", &cValue);

    bRet = checkoccurence(Arr, cValue);

    if(bRet == true)
    {
        printf("Yes the letter you entered is present in the string");
    }
    else
    {
        printf("The letter you entered is not present in the string");
    }
    return 0;
}