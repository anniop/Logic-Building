#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
    
    int i = 0;

    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            printf("%d is Even\n",Arr[i]);
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

    DisplayEven(Brr,iCount);

    free(Brr);

    return 0;    
}