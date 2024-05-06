#include<stdio.h>

int CountOddDigits(int iNo)
{
    
    
    int iCnt = 0;
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo >0)
    {
        iDigit = iNo% 10;       
        iNo = iNo/10;
        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet= CountOddDigits(iValue);
    printf("%d is Odd number from string",iRet);
    return 0;
}