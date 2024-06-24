#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int main()
{

    PNODE Head = NULL;
    NODE obj1;
    NODE obj2;
    NODE obj3;

    obj1.Data = 11;
    obj1.next = &obj2;

    obj2.Data = 21;
    obj2.next = &obj3;

    obj3.Data = 51;
    obj3.next = NULL;
    return 0;
}