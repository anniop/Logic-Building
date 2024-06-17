#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 1;
    while(i<=iNo)
    {
        cout<<i<<endl;
        iNo++;
    }
    
}

int main()
{

    int iValue = 0;
    cout<<"Enter Value : "<<endl;
    cin>>iValue;
    Display(iValue);
    cout<<"End of Application"<<endl;
    return 0;
}