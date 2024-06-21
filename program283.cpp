#include<iostream>
using namespace std;
// Itterative Approach
int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigits = 0;
    while(iNo != 0)
    {
        iDigits = iNo%10;
        iSum = iSum + iDigits;
        iNo = iNo/10;

    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Value : "<<endl;
    cin>>iValue;
    iRet = SumDigits(iValue);
    cout<<"Addition of digits is     : "<<iRet<<endl;
    

    cout<<"End of Application"<<endl;
    return 0;
}