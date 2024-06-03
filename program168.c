#include<stdio.h>
#include<stdbool.h>
bool checkoccurence(char *str)       // Case Sensitive
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if((*str == 'w'))
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
    
    char Arr[100];
    bool bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    bRet = checkoccurence(Arr);

    if(bRet == true)
    {
        printf("Yes the letter w is present in the string");
    }
    else
    {
        printf("The letter w is not present in the string");
    }
    return 0;
}