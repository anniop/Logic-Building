#include<stdio.h>
#include<stdlib.h>

int Minimum(int iSize,int Arr[])
{
    int i = 0;
    int iMin = Arr[0];
    for(i = 0;i<iSize;i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
    
}

int main()
{

    int iRet = 0;
    int i =0;
    int *Brr = NULL;
    int iCount = 0;

    printf("Enter Number of Elements that you want to enter : \n");
    scanf("%d",&iCount);

    Brr = (int * )malloc(iCount * sizeof(int));

    printf("Enter The Value of Elements : \n");
    for(i = 0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
    iRet = Minimum(iCount,Brr);
    printf("The Minimum number is %d",iRet);

    free(Brr);
    return 0;
}