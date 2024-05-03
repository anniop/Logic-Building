// Problem Statement : Take the age from the user and display the ticket price to the user
#include<stdio.h>

/////////////////////////////////////////////////////
//
//      Function Name : CheckAge
//      Description :   Used to display the ticket prices according to the age of the customer
//      Input  :        Integer
//      Output :        Integer
//      Author :        Aniket Mahesh Mogal
//      Date   :        29-04-2024
////////////////////////////////////////////////////
int CheckAge(int iNo)
{
    if((iNo > 0) && (iNo <= 4))
    {
        return 0;
    }
    else if((iNo > 4) && (iNo <= 10))
    {
        return 900;
    }
    else if((iNo > 10) && (iNo <= 50))
    {
        return 2000;
    }
    else if (iNo > 50 )
    {
        return 500;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Your Age : ");
    scanf("%d", &iValue);
    iRet = CheckAge(iValue);
    printf("Your ticket price is %d\n", iRet);
    return 0;
}

