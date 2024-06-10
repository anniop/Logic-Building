#include<iostream>
using namespace std;

int Average(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return ((float)iSum/(float)iSize);
}

int main()
{
    int iLength = 0;
    int i = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"ENter the Elements : "<<endl;
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }
    
    fRet = Average(ptr, iLength);

    cout<<"Average is : "<<fRet<<endl;

    delete []ptr;

    return 0;
}