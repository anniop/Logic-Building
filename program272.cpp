#include<iostream>
using namespace std;
// Apporach 3 : Using Recurssion.
void Display(int iNo)
{
    static int iCnt = 1;
    if(iCnt<=iNo)
    {
        cout<<"*"<<endl;
        iCnt++;
        Display(iNo);
    }
    cout<<"End of Display"<<endl;
    
}

int main()
{

    int iValue = 0;
    cout<<"Enter Value : "<<endl;
    cin>>iValue;
    Display(iValue);
    cout<<"End of Application"<<endl;
    return 0;
}