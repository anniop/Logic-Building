#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        
        ArrayX(int iNo)
        {
            iSize = iNo;
            Arr = new int [iSize];
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter The Elements : \n";
            for(i = 0;i < iSize;i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            int i = 0;

            cout<<"Elements in the array are : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{

    ArrayX aobj(5);
    aobj.Accept();
    aobj.Display();

    return 0;
}