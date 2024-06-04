#include<stdio.h>

int Power(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iPow = 1;
    for(iCnt = 1; iCnt<=iNo2;iCnt++)
    {
        iPow = iPow * iNo1;
    }

    return iPow;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter NUmber 1 : \n");
    scanf("%d",&iValue1);
    printf("Enter Number 2 : \n");
    scanf("%d",&iValue2);
    iRet = Power(iValue1,iValue2);
    printf("The power is %d",iRet);
    return 0;
}