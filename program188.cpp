// Apporoach 3
#include<iostream>
//using namespace std;

class Arithmatic
{
    public:
        int iNo1;
        int iNo2;

        Arithmatic(int A = 0,int B = 0)
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

    std::cout<<"ENter NUmber first\n";                               
    std::cin>>iValue1;                                              
    std::cout<<"ENter NUmber second\n";
    std::cin>>iValue2;                 
    
    Arithmatic aobj(iValue1,iValue2);

    iRet = aobj.Addition();
    std::cout<<"Addition is : "<<iRet<<std::endl;

    return 0;
}