// Problem Statement : Check Whether the number is in the range of 30 and 50.

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if ((iNo >= 30) && (iNo <=50))
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

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("%d is in range of 30 and 50....\n", iValue);
    }
    else
    {
        printf("%d is not in the range of 30 and 50....\n", iValue);
    }


    return 0;
}