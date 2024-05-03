#include<stdio.h>

long int Factorial(int iNo)
{
    int iCnt = 0;
    long int iFact = 1;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iFact = iFact *iCnt;
        
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter the number ");
    scanf("%d", &iValue);
    iRet = Factorial(iValue);
    printf("The factorial is %ld", iRet);
    return 0;
}