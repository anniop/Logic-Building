// Apporoach 3
#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int iNo1;
        int iNo2;

        Arithmatic(int A,int B)
        {
            iNo1 = A;
            iNo2 = B;
        }
        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"ENter NUmber first\n";
    cin>>iValue1;
    cout<<"ENter NUmber second\n";
    cin>>iValue2;
    
    Arithmatic aobj(iValue1,iValue2);

    iRet = aobj.Addition();
    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}