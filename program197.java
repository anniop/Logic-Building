import java.util.*;

class program197 
{
    public static int SumFactots(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt<= (iNo/2); iCnt++)
        {
            if((iNo%iCnt) ==0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }

    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue =0;
        
        int iRet = 0;
        
        System.out.println("ENter Number : ");
        iValue = sobj.nextInt();
        iRet = SumFactots(iValue);
        System.out.println("The summation of the factors is : "+iRet);
    }
}
