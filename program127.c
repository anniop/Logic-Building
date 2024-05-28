#include<stdio.h>
#include<stdlib.h>

int AddOdd(int Arr[], int iSize)
{
    
    int i = 0;
    int iSum = 0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2!=0)
        {
            iSum = iSum+Arr[i];
        }
       
    }
    return iSum;

}

int main()
{
    
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;
    int iRet = 0;
    printf("Enter Number of elements : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));
    
    printf("Enter The elements : \n");
    for(i = 0;i < iCount;i++)
    {
        scanf("%d\n",&Brr[i]);
    }

    iRet = AddOdd(Brr,iCount);
    printf("%d is the addition\n",iRet);

    free(Brr);

    return 0;    
}