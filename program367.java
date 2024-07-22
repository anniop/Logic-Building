import java.util.*;

class program367
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine();        
        
        int iCnt = 0;
        int i = 0;
        for(i = 0;i < str.length();i++)
        {
            if (str.charAt(i) == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("Number of white spaces are : "+iCnt);
    }    
}
