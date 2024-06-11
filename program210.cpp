#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
    public:
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
    void Accept()
    {
        int i = 0;
        cout<<"Enter the elements "<<endl;
        for(i = 0; i< iSize; i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        int i = 0;
        cout<<"The elements you entered are : "<<endl;;
        for(i = 0;i < iSize; i++)
        {
            cout<<Arr[i];
        }
    }

};

int main()
{
    
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);
    aobj.Accept();
    aobj.Display();


    return 0;
}