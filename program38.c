#include<stdio.h>
#include<stdbool.h>
int CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0) // updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
        if(iSum == iNo)
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
    bool iRet = false;
    printf("Enter Number : ");
    scanf("%d", &iValue);
    iRet = CheckPerfect(iValue);
    if (iRet == true)
    {
        printf("%d is a perfect number \n",iValue);
    }
    else
    {
        printf("%d is not a perfect number \n",iValue);
    }
    return 0;
}