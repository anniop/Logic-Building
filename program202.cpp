#include<iostream>
using namespace std;

int SumDifference(int iNo)
{
    int iSum =0;
    int iDigit = 0;
    int iSum1 = 0;
        while(iNo > 0)
        {
            iDigit = iNo%10;
            if(iDigit%2!=0)
            {
                iSum = iSum + iDigit;
            }
            else
            {
                iSum1 = iSum1 + iDigit;
            }
            iNo = iNo/10;
        }
        return iSum1-iSum;
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = SumDifference(iValue);
    cout<<"The Difference is : "<<iRet<<endl;  

    return 0;
}