// Problem Statment : Check Whether if the student is pass or fail and display it (2)
#include<stdio.h>


int CheckResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    // Filter (It comes under input valadition)
    {
        return 1;
    }
    if((fMarks>= 0.0f) && (fMarks < 35.0))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    
    float fValue = 0.0f;
    int iRet = 0;

    printf("Enter Your Percentage : ");
    scanf("%f",&fValue);
    
    iRet = CheckResult(fValue);
    
    if(iRet == 1)
    {
        printf("your input is invalid ...\n");
    }
    else if(iRet == 2)
    {
        printf("Student is FAIL....\n");
    }
    else if (iRet == 3)
    {
        printf("Student is PASS....\n");
    }

    return 0;
}