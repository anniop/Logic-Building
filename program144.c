#include<stdio.h>
#include<stdlib.h>

void Reverse(int iSize,int Arr[])
{
    int iStart = 0;
    int iEnd = 0;
    int temp = 0;

    iStart = 0;
    iEnd = iSize-1; 

    while(iStart< iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;
        iStart++;
        iEnd--;
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
    Reverse(iCount,Brr);

    printf("Elements in Reverse order : \n");
    for(i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }
    

    free(Brr);
    return 0;
}