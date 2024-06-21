#include<iostream>
using namespace std;
// Itterative Approach
int Display(int iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        iCount++;
        iNo = iNo/10;

    }
    return iCount;
}

int main()
{

    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Value : "<<endl;
    cin>>iValue;
    iRet = Display(iValue);
    cout<<"Number of Digits are : "<<iRet<<endl;
    

    cout<<"End of Application"<<endl;
    return 0;
}