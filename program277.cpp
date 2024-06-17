#include<iostream>
using namespace std;

int Display(int iNo)
{
    int iSum = 0;
    while(0<=iNo)
    {
        iSum = iSum+iNo;
        iNo--;
    }
    return iSum;
    
}

int main()
{

    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Value : "<<endl;
    cin>>iValue;
    iRet = Display(iValue);
    cout<<"The Addition of Numbers is : "<<iRet<<endl;

    cout<<"End of Application"<<endl;
    return 0;
}