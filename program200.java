import java.util.Scanner;

class program200 
{
    public static int SumEvenDigits(int iNo)
    {
        int iSum =0;
        int iDigit = 0;
        while(iNo > 0)
        {
            iDigit = iNo%10;
            if(iDigit%2==0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo /10;
        }
        return iSum;
    }
    public static void main(String[] Google) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue =0;
        
        int iRet = 0;
        
        System.out.println("ENter Number : ");
        iValue = sobj.nextInt();
        
        iRet = SumEvenDigits(iValue);
        System.out.println("The Addition of Even Digits is : "+ iRet);
    }    
}
