#include<iostream>
using namespace std;
// Recursive Approach
int SumDigits(int iNo)
{
    static int iSum = 0;
    int iDigits = 0;
    if(iNo != 0)
    {
        iDigits = iNo%10;
        iSum = iSum + iDigits;
        SumDigits(iNo/10);

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