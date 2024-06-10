#include<iostream>
using namespace std;

int main()
{
    int iLength = 0;
    int i = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"ENter the Elements : "<<endl;
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }
    cout<<"Entered Elements are : "<<endl;
    for(i = 0; i < iLength ; i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;

    return 0;
}