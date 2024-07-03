#include<iostream>
using namespace std;

float Addition(float iNo1, float iNo2)
{
    float Ans;

    Ans = iNo1 + iNo2;

    return Ans;
}

int main()
{
    
    float iValue1 = 10.24;
    float iValue2 = 20.54;

    float iRet = 0;

    iRet = Addition(iValue1,iValue2);
    cout<<"The Addition is : "<<iRet;

    return 0;
}