#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iNo)
        {
            cout<<"Inside Constructor"<<endl;   
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor"<<endl;
            delete []Arr;
        }
};

int main()
{
    
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);
    

    return 0;
}