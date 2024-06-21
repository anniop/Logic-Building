#include<iostream>
using namespace std;

int AdditionFacts(int iNo)
{
    static int  i = 1;
    static int iSum = 0;
    if(i<=(iNo/2))
    {   
        if((iNo % i)==0)
        {
            iSum = iSum + i;
        }
        i++;
        AdditionFacts(iNo);
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