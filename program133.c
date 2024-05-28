#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Search(int Arr[], int iSize, int iNo)
{
    
    int i = 0;
    bool bFlag = false;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            bFlag = true;
            break;
        }
       
    }
    
    return bFlag;
}

int main()
{
    int iCount = 0;
    int i = 0;
    int iRet = 0;
    int iValue = 0;
    int *Brr = NULL;

    printf("Enter Number of elements you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter The Elements : \n");
    for(i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    iRet = Search(Brr,iCount,iValue);
    printf("Frequency of that number is %d",iRet);
    
    return 0;    
}