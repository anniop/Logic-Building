#include<stdio.h>

int CountVowel(char *str)       // Case Sensitive
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str=='a') || (*str=='e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CountVowel(Arr);

    printf("Number of Vowels are %d\n",iRet);
    return 0;
}