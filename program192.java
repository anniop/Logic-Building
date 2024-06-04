import java.util.*;

class Arithmatic
{
    public int iNo1 = 0;
    public int iNo2 = 0;

    public Arithmatic(int A, int B)
    {
        iNo1 = A;
        iNo2 = B;
    }
    public int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}

class program192 
{  
    public static void main(String Google[])
    {
    Scanner sobj = new Scanner(System.in);
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;

    System.out.println("Enter First Number : ");
    iValue1 = sobj.nextInt();

    System.out.println("Enter Second Number : ");
    iValue2 = sobj.nextInt();
    Arithmatic aobj = new Arithmatic(iValue1, iValue2);
    iAns = aobj.Addition();

    System.out.println("Addition is : "+ iAns);
    
    }
}
