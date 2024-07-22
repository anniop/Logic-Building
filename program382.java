import java.util.*;

class program382
{
    public static void main(String Google[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String  : ");
        String str = sobj.nextLine(); 

        System.out.println("Enter the Word that you want to search : ");
        String s = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");
        
        int iCnt = 0;
        for(String a : Arr)
        {
            if((s.equals(a)))
            {
                iCnt++;
            }
        }
        System.out.println("Frequency of word is : "+iCnt);

    }    
}
