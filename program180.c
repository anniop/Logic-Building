#include<stdio.h>

void Updatestring(char *str)    
{

    while (*str != '\0')
    {
        if((*str == ' '))
        {
            *str = '_';
        }
        str++;
    }

}

int main()
{
    char Arr[100];

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);
    
    Updatestring(Arr);
    printf("The Updated string is %s\n",Arr);
    
    return 0;
}