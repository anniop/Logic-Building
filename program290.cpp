#include<iostream>
using namespace std;

int strlenX(char *Brr)
{
    int i = 1;
    int iCount = 0;

    while(*Brr!='\0')
    {
        iCount++;
        Brr++;
    }
    return iCount;
}

int main()
{
    
    char Arr[30];    
    int iRet = 0;
    cout<<"Enter String : "<<endl;
    cin.getline(Arr,30);
    iRet = strlenX(Arr);
    cout<<"the length of the string is : "<<iRet<<endl;


    return 0;
}