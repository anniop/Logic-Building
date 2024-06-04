#include<stdio.h>

int Power(int iNo1,int iNo2)
{
    int iPow = 1;
    while(1<=iNo2)
    {
        iPow = iPow * iNo1;
        iNo2--;
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