// Problem Statment : Check Whether if the student is pass or fail and display it (2)
#include<stdio.h>

// User defined macro
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3

int CheckResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    // Filter (It comes under input valadition)
    {
        return RET_INVALID;
    }
    if((fMarks>= 0.0f) && (fMarks < 35.0))
    {
        return RET_FAIL;
    }
    else
    {
        return RET_PASS;
    }
}

int main()
{
    
    float fValue = 0.0f;
    int iRet = 0;

    printf("Enter Your Percentage : ");
    scanf("%f",&fValue);
    
    iRet = CheckResult(fValue);
    
    if(iRet == RET_INVALID)
    {
        printf("your input is invalid ...\n");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is FAIL....\n");
    }
    else if (iRet == RET_PASS)
    {
        printf("Student is PASS....\n");
    }

    return 0;
}