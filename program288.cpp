#include<iostream>
using namespace std;

int AdditionFacts(int iNo)
{
    int i = 1;
    int iSum = 0;
    while(i<=(iNo/2))
    {   
        if((iNo % i)==0)
        {
            iSum = iSum + i;
        }
        i++;
    }
    return iSum;
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number : "<<endl;
    cin>>iValue;
    iRet = AdditionFacts(iValue);
    cout<<"The Addition is : "<<iRet<<endl;

    return 0;
}