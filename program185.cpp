// Apporoach 2
#include<iostream>
using namespace std;

int Addition(int iNo1,int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"ENter NUmber first\n";
    cin>>iValue1;
    cout<<"ENter NUmber second\n";
    cin>>iValue2;
    iRet = Addition(iValue1,iValue2);

    cout<<"The addition is "<<iRet<<endl;    

    return 0;
}