// Problem Statment : Check Whether if the student is pass or fail and display it (2)
#include<stdio.h>
/*
    0 to 35     Fail
    35 to 50    Pass Class
    50 to 60    Second Class
    60 to 75    First Class
    75 to 100   First Class With distinction

*/

// User defined macro
#define RET_INVALID -1
#define RET_FAIL 1
#define RET_PASS_CLASS 2
#define RET_SECOND_CLASS 3
#define RET_FIRST_CLASS 4
#define RET_FIRST_DISTINCTION 5

int CheckResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    // Filter (It comes under input valadition)
    {
        return RET_INVALID;
    }
    else if((fMarks>= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else if((fMarks >= 35.0f) && (fMarks<= 50.0f))
    {
        return RET_PASS_CLASS;
    }
    else if ((fMarks > 50.0f ) && (fMarks<=60.0f))
    {
        return RET_SECOND_CLASS;
    }
    else if ((fMarks > 60.0f) && (fMarks <=75.0f))
    {
        return RET_FIRST_CLASS;
    }
    else if((fMarks > 75.0f) && (fMarks <= 100.0f))
    {
        return RET_FIRST_DISTINCTION;
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
        printf("You have failed the exam....\n");
    }
    else if (iRet == RET_PASS_CLASS)
    {
        printf("You are in Pass Class....\n");
    }
    else if (iRet == RET_SECOND_CLASS)
    {
        printf("You are in Second Class...\n");
    }
    else if (iRet == RET_FIRST_CLASS)
    {
        printf("You are in First Class ....\n");
    }
    else if (iRet == RET_FIRST_DISTINCTION)
    {
        printf("You are in First Class With Distinction....\n");
    }

    return 0;
}