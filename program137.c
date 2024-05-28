#include<stdio.h>
#include<stdlib.h>

void Updator(int iSize,int Arr[])
{
    int i = 0;
    int iMin = Arr[0];
    for(i = 0;i<iSize;i++)
    {

        Arr[i] = Arr[i] + 1;
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
    Updator(iCount,Brr);

    printf("The Updated array is \n");
    for(i = 0; i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);
    return 0;
}