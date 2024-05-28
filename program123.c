#include<stdio.h>
#include<stdlib.h>

____ _____(int Arr[], int iSize)
{

    // Logic

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

    iRet = _____(Brr,iCount);
    printf("Addition is : %d\n",iRet);

    free(Brr);

    return 0;    
}