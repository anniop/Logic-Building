#include<iostream>
using namespace std;
// Apporach 3 : Using Recurssion.
void Display()
{
    auto iCnt = 1;
    if(iCnt<5)
    {
        cout<<"*"<<endl;
        iCnt++;
        Display();
    }
}

int main()
{

    Display();

    return 0;
}