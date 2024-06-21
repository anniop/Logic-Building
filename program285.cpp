#include<iostream>
using namespace std;
// Recursive Approach
int SumDigits(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum = iSum + (iNo%10);
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