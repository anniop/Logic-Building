// *    *   *   *   *

#include<stdio.h>

void display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo; 
    }
    int iCnt =0;
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);   
    display(iValue);

    return 0;
}