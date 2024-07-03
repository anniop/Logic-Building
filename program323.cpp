#include<iostream>
using namespace std;

void Swap(char &A,char &B)
{
    char temp;

    temp = A;
    A = B;
    B = temp;

}

int main()
{
    
    char Value1 = 'A', Value2 = 'M';

    cout<<"value of variable1 is : "<<Value1<<"\n";
    cout<<"value of variable1 is : "<<Value2<<"\n";

    Swap(Value1,Value2);

    cout<<"Value of Variable1 after swapping is : "<<Value1<<"\n";
    cout<<"Value of Variable2 after swapping is : "<<Value2<<"\n";

    return 0;
}