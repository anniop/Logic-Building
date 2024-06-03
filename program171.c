#include<stdio.h>
#include<stdbool.h>
bool checkoccurence(char *str)       // Case Sensitive
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if((*str == 'l') || (*str == 'L'))
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
        printf("Yes the letter l is present in the string");
    }
    else
    {
        printf("The letter l is not present in the string");
    }
    return 0;
}