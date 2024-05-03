#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(iNo % 4 == 0)
    {
        return  true;
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
    printf("Enter the number : ");
    scanf("%d", &iValue);
    bRet = CheckDivisible(iValue);
    if (bRet == true)
    {
        printf("%d is the factorial of 4\n", iValue);
    }
    else
    {
        printf("%d is not the factorial of 4\n", iValue);
    }
    return 0;
}