#include<stdio.h>

void Display(int iNo,int iNo2)
{
    int iCnt = 0;
    for (iCnt = iNo2; iCnt<=iNo; iCnt++)
    {
        printf("The value is %d\n", iCnt);
    }
}

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   printf("Enter starting point: \n");
   scanf("%d",&iValue2);
   printf("Enter Ending Point : ");
   scanf("%d", &iValue1);
   Display(iValue1,iValue2);

    return 0;
}