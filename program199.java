import java.util.*;

class program199 
{
    public static int CountDigits(int iNo)
    {
        int iCnt = 0;
        
        while(iNo>0)
        {
            iCnt++;
            iNo = iNo/10;
        }

        return iCnt;
    }
    public static void main(String[] Google) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue =0;
        
        int iRet = 0;
        
        System.out.println("ENter Number : ");
        iValue = sobj.nextInt();

        iRet = CountDigits(iValue);

        System.out.println("The Number of Digits Are : "+ iRet);
    }    
}
