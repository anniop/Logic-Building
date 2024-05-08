#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    if(iRow != iCol)       // Filter
    {
        printf("Number of rows and columns are not same\n");
        return;
    }
    for(i = 1; i<=iRow; i++)    // Outer Loop
    {
        for(j = 1; j<=iCol; j++)    // Inner Loop
        {
            if((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
            
            
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue =0;
    int iValue2 = 0;

    printf("Enter Number of rows : ");
    scanf("%d",&iValue);

    printf("Enter Number of Columns : ");
    scanf("%d", &iValue2);
    Display(iValue,iValue2);

    return 0;
}