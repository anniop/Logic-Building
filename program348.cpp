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
    bool BiDirectional(T iValue);
    bool BinarySearch(T iValue);
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

template <class T>
bool ArrayX<T>::BiDirectional(T iValue)
{   
    bool flag = false;
    int iStart = 0;
    int iEnd = 0;

    for(iStart = 0, iEnd = iSize=1; iStart <= iEnd;iStart++,iEnd--)
    {
        if(Arr[iStart] == iValue || Arr[iEnd] == iValue)
        {
            flag = true;
            break;
        }
    }
    
    return flag;
    
}

template <class T>
bool ArrayX<T>::BinarySearch(T iValue)
{   
    int iStart = 0;
    int iEnd = 0;
    int iMid = 0;
    bool flag = false;

    iEnd = iSize-1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) /2);

        if((Arr[iMid] == iValue) || (Arr[iStart] == iValue) || (Arr[iEnd] == iValue))
        {
            flag = true;
            break;
        }
        else if(iValue > Arr[iMid])
        {
            iEnd = iMid - 1;
        }
        else if (iValue < Arr[iMid])
        {
            iStart = iMid + 1;

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
    

    bRet = aobj->BinarySearch(No);
    
    if(bRet == true)
    {
        cout<<"The Element is Present\n";
    }
    else
    {
        cout<<"Element is not Present\n";
    }
    
    delete aobj;

    return 0;
}
