#include<iostream>
using namespace std;

int main()
{
    
    int *Arr = NULL;
    int iCount = 0;
    int i = 0;

    cout<<"Enter Number of Elements :"<<endl;
    cin>>iCount;
    Arr = new int[iCount];

    cout<<"Enter The elements : "<<endl;
    for(i = 0; i< iCount;i++)
    {
        cin>>Arr[i];
    }

    cout<<"Entered Elements are : "<<endl;
    for(i = 0;i<iCount; i++)
    {
        cout<<Arr[i]<<endl;
    }
    delete  []Arr;

    return 0;
}