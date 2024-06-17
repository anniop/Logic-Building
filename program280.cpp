#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo%10;
        cout<<iDigit<<endl;
        iNo = iNo/10;
        Addition(iNo);

    }
    return iDigit;
}

int main()
{

    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Value : "<<endl;
    cin>>iValue;
    iRet = Addition(iValue);
    

    cout<<"End of Application"<<endl;
    return 0;
}