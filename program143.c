#include<stdio.h>
#include<stdlib.h>

void Swap(int *p, int *q)
{
    int temp = 0;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{   

    int A = 0, B = 0;

    printf("Enter First Number : \n");
    scanf("%d",&A);

    printf("Enter Second Number : \n");
    scanf("%d",&B);

    Swap(&A,&B);

    printf("Value after Swapping of A is %d\n",A);
    printf("Value after Swapping of B is%d\n",B);


    return 0;
}