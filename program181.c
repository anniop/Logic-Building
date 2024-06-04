#include<stdio.h>

void Updatestring(char *str)    
{

    while (*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }

}

int main()
{
    char Arr[100];

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);
    
    Updatestring(Arr);
    
    
    return 0;
}