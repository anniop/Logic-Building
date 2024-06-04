import java.util.Scanner;

class program203 
{
    public static int SumOddDigits(int iNo)
    {
        int iSum =0;
        int iDigit = 0;
        int iSum1 = 0;
        while(iNo > 0)
        {
            iDigit = iNo%10;
            if(iDigit%2!=0)
            {
                iSum = iSum + iDigit;
            }
            else
            {
                iSum1 = iSum1 + iDigit;
            }
            iNo = iNo /10;
        }
        return iSum1-iSum;
    }
    public static void main(String[] Google) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue =0;
        
        int iRet = 0;
        
        System.out.println("ENter Number : ");
        iValue = sobj.nextInt();
        
        iRet = SumOddDigits(iValue);
        System.out.println("The Addition of Odd Digits is : "+ iRet);
    }    
}
