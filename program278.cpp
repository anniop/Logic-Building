#include<iostream>
using namespace std;

int Addition(int iNo)
{
    static int iSum = 0;
    if(0<=iNo)
    {
        iSum = iSum+iNo;
        iNo--;
        Addition(iNo);
    }
    return iSum;
    
}

int main()
{

    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Value : "<<endl;
    cin>>iValue;
    iRet = Addition(iValue);
    cout<<"The Addition of Numbers is : "<<iRet<<endl;

    cout<<"End of Application"<<endl;
    return 0;
}