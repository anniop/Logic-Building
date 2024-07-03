#include<iostream>
using namespace std;

template<class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    
    int iValue1 = 10, iValue2 = 20;
    int iRet = 0;

    float fValue1 = 10.34, fValue2 = 20.32;
    float fRet = 0.0f;

    double dValue1 = 10.2423534;
    double dValue2 = 20.543243;
    double dRet = 0.0;

    iRet = Addition(iValue1,iValue2);
    cout<<"The Addition of Integer is : "<<iRet<<"\n";

    fRet = Addition(fValue1,fValue2);
    cout<<"The Addition of float is : "<<fRet<<"\n";

    dRet = Addition(dValue1,dValue2);
    cout<<"The Addition Double is  : "<<dRet<<"\n";

    return 0;
}