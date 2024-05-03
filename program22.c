// This Code Implements For Loop

#include<stdio.h>

int Display(int iNo)
{
    int iCnt =0; 
    for (iCnt = 1; iCnt<= iNo ; iCnt++)
    {
        printf("Jay Hanuman...\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter VALue : ");
    scanf("%d", &iValue);
    Display(iValue);
    

    return 0;
}