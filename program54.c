#include<stdio.h>

int CountDigits(int iNo)
{
    
    
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo >0)
    {
        
        iNo = iNo/10;
        iCnt++;
        
    }
    return iCnt;
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet= CountDigits(iValue);
    printf("Number of digits are %d",iRet);
    return 0;
}