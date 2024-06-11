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
        cout<<"The elements you entered are : \n";
        for(i = 0;i < iSize; i++)
        {
            cout<<Arr[i];
        }
    }
    float Average()
    {
        int i = 0;
        int iSum = 0;
        float fAns = 0.0f;
        for(i = 0;i< iSize ; i++)
        {
           
            iSum = iSum + Arr[i];
            
        }
        return ((float)iSum/(float)iSize);
    }

};

int main()
{
    
    int iLength = 0;
    float fRet = 0.0f;
    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    //ArrayX aobj(iLength);        Static Object Creation
    ArrayX *aobj = new ArrayX(iLength);     //  Dynamic Object Creation  
    aobj->Accept();
    aobj->Display();
    fRet = aobj->Average();

    return 0;
}