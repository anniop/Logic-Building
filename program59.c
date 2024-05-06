#include<stdio.h>
void CountOddDigits(int iNo)
{
    
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
            printf("%d\n",iDigit);
        }
    }
    
}

int main()
{
    
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);
    CountOddDigits(iValue);
    if(iValue % 2 == 0)
    {    
        printf("%d is Odd number from string",iValue);
    }
    else
    {
        printf("no Odd numbers found\n");
    }
    return 0;
}