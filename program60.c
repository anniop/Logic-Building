#include<stdio.h>

int Count(int iNo)
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
        if(iDigit > 5)
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
    iRet= Count(iValue);
    printf("%d is greater than 5 in the string \n",iRet);
    return 0;
}