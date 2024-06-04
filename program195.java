import java.util.*;

class program195 
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue =0;
        int iCnt = 0;
        int iSum =0;
        
        System.out.println("ENter Number : ");
        iValue = sobj.nextInt();

        for(iCnt = 1; iCnt<= iValue/2; iCnt++)
        {
            if((iValue%iCnt) ==0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("The summation of the factors is : "+iSum);
    }
}
