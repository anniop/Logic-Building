#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo%10;
        cout<<iDigit<<endl;
        iNo = iNo/10;
        Display(iNo);

    }
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