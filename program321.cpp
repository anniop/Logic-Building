#include<iostream>
using namespace std;

template<class T>
T Addition(T iNo1, T iNo2)
{
    T Ans;

    Ans = iNo1 + iNo2;

    return Ans;
}

int main()
{
    
    double iValue1 = 10.2423534;
    double iValue2 = 20.543243;

    double iRet = 0.0;

    iRet = Addition(iValue1,iValue2);
    cout<<"The Addition is : "<<iRet;

    return 0;
}