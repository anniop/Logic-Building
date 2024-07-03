#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;
        
        ArrayX(int iNo);
        void Accept();
        void Display();
        T Addition();
       
};

template<class T>
ArrayX<T> :: ArrayX(int iNo)
{
    iSize = iNo;
    Arr = new T [iSize];

}

template<class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout << "Enter The Elements : \n";
    for (i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}
template<class T>      
T ArrayX<T> :: Addition()
        {
            T iSum;
            int i = 0;
            for(i = 0;i<iSize;i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }

template<class T>      
void ArrayX<T>::Display()
        {
            int i = 0;

            cout<<"Elements in the array are : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }

int main()
{
   
    ArrayX <float>aobj(5);
    aobj.Accept();
    aobj.Display();
    
    cout<<"The Addition is : "<<aobj.Addition()<<"\n";

    return 0;
}