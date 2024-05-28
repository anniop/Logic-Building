#include<stdio.h>
#include<stdlib.h>

void Display(int iSize,int Arr[])
{
    int i = 0;
    printf("Elements in Reversed order are :  \n");
    for(i = iSize-1;i>=0;i--)
    {
        printf("%d\n",Arr[i]);
    }

    
}

int main()
{

    
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
    Display(iCount,Brr);

    

    free(Brr);
    return 0;
}