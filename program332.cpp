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
        int Addition()
        {
            int iSum;
            int i = 0;
            for(i = 0;i<iSize;i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
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
    int iRet = 0;
    ArrayX aobj(5);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Addition();
    cout<<"The Addition is : "<<iRet<<"\n";

    return 0;
}