#include<iostream>
using namespace std;
// Apporach 2 : Using While Loop.
void Display()
{
    int iCnt = 1;
    while(iCnt<5)
    {
        cout<<"*"<<endl;
        iCnt++;
    }
}

int main()
{

    Display();

    return 0;
}