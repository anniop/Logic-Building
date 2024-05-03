#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt < iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {   
            iSum = iCnt + iSum;    
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

    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = CheckPerfect(iValue);
    if(iRet == true)
    {
        printf("%d is a perfect number", iValue);
    }    
    else
    {
        printf("%d is not a perfect number", iValue);
    }
    return 0;
}