#include<stdio.h>
#include<stdlib.h>


int main()
{
    
    int iCount = 0;
    int *Brr = NULL;
    printf("Enter Number of elements : \n");
    scanf("%d",&iCount);
    Brr = (int *)malloc(iCount * sizeof(int));
    
    printf("Enter The elements : \n");
    for(int i = 0;i< iCount;i++)
    {
        scanf("%d\n",&Brr[i]);
    }
    printf("Entered elements are : \n");
    for(int j =0;j<iCount;j++)
    {
        printf("%d\n",Brr[j]);
    }
    free(Brr);

    return 0;    
}