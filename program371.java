import java.util.*;

class program371
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine(); 

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        int iCnt = 0;
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0;i < Arr.length;i++)
        {
            if (Arr[i] == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("Number of words spaces are : "+ (iCnt+1));
    }    
}
