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

    void BubbleSort();
    void BubbleSortEfficient();
    void SelectionSort();
    void InsertionSort();

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
    for(int i = 0; i < iSize; i++) {
        cin >> Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display() {
    cout << "Entered elements are : \n";
    for(int i = 0; i < iSize; i++) {
        cout << Arr[i] << "\t";
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

template <class T>
void ArrayX<T>::BubbleSort()
{
    T temp;
    int i = 0;
    int j = 0;

    for(i = 0; i < iSize; i++)  // Outer
    {
        for(j = 0; j < iSize-1-i;j++)   // Inner
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;

            }
        }
        cout<<"Array After pass :"<<i+1<<"\n";
        Display();
    }
}

template <class T>
void ArrayX<T>::BubbleSortEfficient()
{
    T temp;
    int i = 0;
    int j = 0;
    bool flag = true;

    for(i = 0; (i < iSize) && (flag == true); i++)  // Outer
    {
        flag = false;
        for(j = 0; j < iSize-1-i;j++)   // Inner
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;

            }
        }

        cout<<"Array After pass :"<<i+1<<"\n";
        Display();
    }
}

template <class T>
void ArrayX<T>::SelectionSort()
{
    int i = 0;
    int j = 0;
    int min_index = 0;
    T temp;

    for(i = 0;i < iSize-1;i++)
    {
        min_index = i;
        for(j = i+1;j<iSize;j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }
}

template <class T>
void ArrayX<T>::InsertionSort()
{
    int i = 0;
    int j = 0;
    T selected;

    for(i = 1;i < iSize; i++)
    {
        for(j = i -1,selected = Arr[i];(j >=0) && (Arr[j] > selected); j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j+1] = selected;
    }
}

int main() 
{
    int iLength = 0;
    

    cout << "Enter the number of elements : \n";
    cin >> iLength;

    ArrayX<double> *aobj = new ArrayX<double>(iLength);

    cout<<"Enter the elements : \n";
    aobj->Accept();
   

    cout<<"Data Before Sorting : \n";

    aobj->Display();
    
    aobj->InsertionSort();

    cout<<"\n";

    cout<<"\nData After Sorting : \n";

    aobj->Display();
    
    delete aobj;

    return 0;
}
// This Code Implements Bubble Sorting.
