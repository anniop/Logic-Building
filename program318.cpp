#include<iostream>
using namespace std;

int Addition(int iNo1, int iNo2)
{
    int Ans;

    Ans = iNo1 + iNo2;

    return Ans;
}

int main()
{
    
    int iValue1 = 10;
    int iValue2 = 20;

    int iRet = 0;

    iRet = Addition(iValue1,iValue2);
    cout<<"The Addition is : "<<iRet;

    return 0;
}