#include<iostream>
#include<stdbool.h>
using namespace std;

template <class T>
class ArrayX {
public:
    T *Arr;
    int iSize; 

    ArrayX(int Value); // Constructor should accept an integer
    ~ArrayX();
    void Accept(); // These functions should be void
    void Display(); // These functions should be void
    bool LinearSearch(T iValue);
};

template <class T>
ArrayX<T>::ArrayX(int Value) {
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX() {
    delete [] Arr;
}

template <class T>
void ArrayX<T>::Accept() {
    cout << "Enter the elements : \n";
    for(int i = 0; i < iSize; i++) {
        cin >> Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display() {
    cout << "Entered elements are : \n";
    for(int i = 0; i < iSize; i++) {
        cout << Arr[i] << "\n";
    }
}

template <class T>
bool ArrayX<T>::LinearSearch(T iValue)
{   
    bool flag = false;
    int i = 0;
    for(i = 0;i < iSize;i++)
    {
        if(Arr[i] == iValue)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main() 
{
    int iLength = 0;
    int No = 0;
    bool bRet = false;

    cout << "Enter the number of elements : \n";
    cin >> iLength;

    ArrayX<double> *aobj = new ArrayX<double>(iLength);

    aobj->Accept();
    aobj->Display();
    cout<<"Enter The element that you want to search : \n";
    cin>>No;
    bRet = aobj->LinearSearch(No);

    if(bRet == true)
    {
        cout<<"Element is Present\n";
    }
    else
    {
        cout<<"Element is Not Present\n";
    }
    delete aobj;

    return 0;
}
