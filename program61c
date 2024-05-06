#include<stdio.h>
void Count(int iNo)
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
        if(iDigit > 5)
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
    Count(iValue);
    if(iValue > 5)
    {    
        printf("%d is Greater than 5\n",iValue);
    }
    else
    {
        printf("no greater number found than 5\n");
    }
    return 0;
}