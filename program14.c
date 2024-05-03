// Problem Statment : Check Whether if the student is pass or fail and display it (2)
#include<stdio.h>
#include<stdbool.h>

bool CheckResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    // Filter (It comes under input valadition)
    {
        printf("Invalid Input given please Check Again......\n");
        return false;
    }
    if((fMarks>= 0.0f) && (fMarks < 35.0))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    
    float fValue = 0.0f;
    bool bRet = false;

    printf("Enter Your Percentage : ");
    scanf("%f",&fValue);
    
    bRet = CheckResult(fValue);
    
    if(bRet == true)
    {
        printf("Congratulations !!!!! You Have Passed The Exam.....\n");
        
    }
    else
    {
      printf("Please fill the backlog forms and study hard good luck.....!!!\n");
    }

    return 0;
}