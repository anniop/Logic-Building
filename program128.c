#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    
    int i = 0;
    int iFrequency = 0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            iFrequency++;
        }
       
    }
    

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

    iRet = CountEven(Brr,iCount);
    printf("Number of even elements are : %d\n",iRet);

    free(Brr);

    return 0;    
}