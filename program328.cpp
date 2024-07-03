#include<iostream>
using namespace std;

float Maximum(float Arr[],int iSize)
{
    float iSum = 0;
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
       
        if (Arr[i] > iSum)
        {
            iSum = Arr[i];
        }
        
    }
    return iSum;
   
}

int main()
{
    
    int iLength = 0;
    float *ptr = NULL;
    int i = 0;
    float iRet = 0;

    cout<<"Enter Number of Elements : \n";
    cin>>iLength;

    ptr = new float(iLength);

    cout<<"Enter the Elements : \n";
    for(i = 0; i < iLength ;i++)
    {
        cin>>ptr[i];
    }
    
    iRet = Maximum(ptr, iLength);
    cout<<"Largest Element is : "<<iRet<<"\n";


    delete []ptr;

    return 0;
}