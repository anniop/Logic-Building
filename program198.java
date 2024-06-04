import java.util.*;

class program198 
{
    public static int DiffFactors(int iNo)
    {
        int iCnt = 0;
        int iSumF = 0;
        int iSumN = 0;
        for(iCnt = 1; iCnt<iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iSumF = iSumF + iCnt;
            }
            else
            {
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN-iSumF;
    }
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue =0;
        
        int iRet = 0;
        
        System.out.println("ENter Number : ");
        iValue = sobj.nextInt();
        iRet = DiffFactors(iValue);
        System.out.println("The Difference of factors is  : "+iRet);
    }
}
