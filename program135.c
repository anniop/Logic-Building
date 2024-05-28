#include<stdio.h>
#include<stdlib.h>

int Maximum(int iSize,int Arr[])
{
    int i = 0;
    int iMax = Arr[0];
    for(i = 0;i<iSize;i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
    
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
    iRet = Maximum(iCount,Brr);
    printf("The Maximum number is %d",iRet);

    free(Brr);
    return 0;
}