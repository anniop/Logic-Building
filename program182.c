
// Time Complexity of this code is N.N/2
// Reverse string 
#include<stdio.h>

void strrevx(char str[])    
{
    char *start = str;
    char *end = str;
    char temp;
    while(*end != '\0')
    {   
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[100];

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);
    
    strrevx(Arr);
    printf("Reverse string is : %s\n",Arr);
    
    
    return 0;
}