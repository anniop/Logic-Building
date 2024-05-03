// Problem Statement: Check Whether the number entered by the user is in the range of 10 to 20
#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 10) && (iNo <= 20))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    bRet = CheckRange(iValue);
    if(bRet == true)
    {
        printf("%d is between 10 & 20", iValue);
    }
    else
    {
        printf("%d is not between 10 & 20", iValue);
    }
    return 0;
}