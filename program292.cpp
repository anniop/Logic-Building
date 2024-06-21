#include<iostream>
using namespace std;

int CountCapital(char *Brr)
{
    int i = 1;
    static int iCount = 0;

    if(*Brr!='\0')
    {
        if((*Brr >= 'A') && (*Brr <= 'Z'))
        {
        iCount++;
        }
        Brr++;
        CountCapital(Brr);
    }
    return iCount;
}

int main()
{
    
    char Arr[30];    
    int iRet = 0;
    cout<<"Enter String : "<<endl;
    cin.getline(Arr,30);
    iRet = CountCapital(Arr);
    cout<<"the length of the string is : "<<iRet<<endl;


    return 0;
}