#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 1;
    unsigned long int iFact = 1;
    while(iCnt<= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter the number ");
    scanf("%d", &iValue);
    iRet = Factorial(iValue);
    printf("The factorial is %lu", iRet);
    return 0;
}