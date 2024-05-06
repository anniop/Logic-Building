#include<stdio.h>

int Reverse(long int iNo)
{
    long int iDigit = 0;
    long int iRev = 0;

    if (iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    
    long int iValue = 0;
    long int iRet = 0;
    printf("Enter Value : ");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);
    printf("Reversed number is %d \n",iRet);

    return 0;
}